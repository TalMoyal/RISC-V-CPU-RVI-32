

module cpu_pipelined (
    input logic clk,
    input logic reset
);

// ---------- IF ---------
logic [31:0] pc;
logic [31:0] instruction;
logic [31:0] next_pc;

logic load_use_hazard;

 program_counter pc_inst (
        .clk(clk),
        .reset(reset),
        .next_pc(next_pc),
        .pc(pc)
    );

instruction_memory instruction_memory_inst (
        .address(pc),
        .instruction(instruction)
    );

// stall: on load-use hazard hold pc, otherwise advance to the next instruction
assign next_pc = load_use_hazard ? pc :pc + 32'd4;//enable flag 
  

// ---------- IF/ID ----------
logic [31:0] if_id_pc;
logic [31:0] if_id_instruction;



// ---------- IF/ID register ----------
always_ff @(posedge clk) begin
    if (reset) 
    begin
        if_id_pc          <= 32'd0;
        if_id_instruction <= 32'h00000013;   // addi x0,x0,0
    end
    else 
    begin
        if (load_use_hazard==0)
        begin
            if_id_pc          <= pc;
            if_id_instruction <= instruction;
        end
    end
end


//***********************____***************************

// ---------- ID stage fields ----------
logic [4:0] rd;
logic [4:0] rs1;
logic [4:0] rs2;
logic [6:0] opcode;
logic [2:0] funct3;
logic [6:0] funct7;


assign rd  = if_id_instruction[11:7];
assign rs1 = if_id_instruction[19:15];
assign rs2 = if_id_instruction[24:20];
assign opcode = if_id_instruction[6:0];
assign funct3 = if_id_instruction[14:12];
assign funct7 = if_id_instruction[31:25];


// ---------- ID stage: decoder outputs ----------
logic        reg_write;
logic        alu_src;
logic        mem_write;
logic        mem_to_reg;
logic        branch;
logic [2:0]  alu_control;
logic [1:0]  imm_sel;

// ---------- ID stage: data outputs ----------
logic [31:0] read_data1;
logic [31:0] read_data2;
logic [31:0] immediate;


// ---------- Decoder ----------

decoder decoder_inst (
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    //.      |
    //       v     decoder output
    .reg_write(reg_write),
    .alu_src(alu_src),
    .mem_write(mem_write),
    .alu_control(alu_control),
    .imm_sel(imm_sel),
    .mem_to_reg(mem_to_reg),
    .branch(branch)

    );

// ---------- Immediate Generator ----------


immediate_generator immediate_generator_inst (
    .instruction(if_id_instruction),
    .imm_sel(imm_sel),
    .immediate(immediate)
);


// ---------- WB feedback (driven later by MEM/WB) ----------
logic        mem_wb_reg_write;
logic [4:0]  mem_wb_rd;
logic [31:0] write_back_data;

// ---------- Register File ----------
register_file register_file_inst (
    .clk(clk),
    .write_enable(mem_wb_reg_write),   // write side: from WB
    .rd(mem_wb_rd),                    // write side: from WB
    .write_data(write_back_data),      // write side: from WB
    .rs1(rs1),                         // read side: from ID
    .rs2(rs2),                         // read side: from ID
    .read_data1(read_data1),           // goes to ID/EX
    .read_data2(read_data2)            // goes to ID/EX
);

// ---------- ID/EX ----------
logic [31:0] id_ex_pc;
logic [31:0] id_ex_read_data1;
logic [31:0] id_ex_read_data2;
logic [31:0] id_ex_immediate;
logic [4:0]  id_ex_rd;
logic [2:0]  id_ex_alu_control;

logic        id_ex_reg_write;
logic        id_ex_mem_to_reg;
logic        id_ex_mem_write;
logic        id_ex_alu_src;
logic        id_ex_branch;



logic [4:0] id_ex_rs1;     // fowarding regs
logic [4:0] id_ex_rs2;     // fowarding regs




// ---------- ID/EX register ----------

always_ff @(posedge clk) begin
    if (reset) begin
        id_ex_pc         <= 32'd0;
        id_ex_read_data1 <= 32'd0;
        id_ex_read_data2 <= 32'd0;
        id_ex_immediate  <= 32'd0;
        id_ex_rd         <= 5'd0;
        // control reset - step 4

        // default & 0 
        id_ex_reg_write  <=1'b0;
        id_ex_mem_to_reg <= 1'b0;
        id_ex_mem_write <= 1'b0;
        id_ex_alu_src <= 1'b0;
        id_ex_branch <= 1'b0;
        id_ex_alu_control <= 3'b100;

        id_ex_rs1  <=  5'd0;  //forward
        id_ex_rs2  <=  5'd0;  //forward


    end
    else 
    begin

        if (!load_use_hazard)
            begin
                id_ex_reg_write  <=reg_write;
                id_ex_mem_to_reg <= mem_to_reg;
                id_ex_mem_write <= mem_write;
                id_ex_alu_src <= alu_src;
                id_ex_branch <=  branch ;

            end
            else begin
                id_ex_reg_write  <=1'b0;
                id_ex_mem_to_reg <= 1'b0;
                id_ex_mem_write <= 1'b0;
                id_ex_alu_src <= 1'b0;
                id_ex_branch <= 1'b0;

            end

        id_ex_pc         <= if_id_pc ;
        id_ex_read_data1 <= read_data1;
        id_ex_read_data2 <= read_data2;
        id_ex_immediate  <= immediate ;
        id_ex_rd         <=  rd ;

        id_ex_alu_control <=alu_control;

        id_ex_rs1  <= rs1;  //forward
        id_ex_rs2  <= rs2;  //forward

    end
end

// load-use: instruction in EX is a LW whose rd is a source (rs1/rs2) of the instruction in ID
//assign load_use_hazard = id_ex_mem_to_reg && (id_ex_rd != 0) && (id_ex_rd == rs1 || id_ex_rd == rs2);
assign load_use_hazard = 1'b0;


// ---------- EX/MEM ----------
logic [31:0] ex_mem_alu_result ;
logic [31:0] ex_mem_write_data;
logic [4:0]  ex_mem_rd;

logic        ex_mem_reg_write;
logic        ex_mem_mem_to_reg;
logic        ex_mem_mem_write;



logic [1:0] forward_a;
logic [1:0] forward_b;

logic [31:0] forwarded_a;
logic [31:0] forwarded_b;

    always_comb begin
        if (ex_mem_reg_write ==1 && ex_mem_rd != 0 && ex_mem_rd == id_ex_rs1)
            forward_a =2'b10;      
        else if (mem_wb_reg_write ==1 && mem_wb_rd != 0 &&  mem_wb_rd == id_ex_rs1)
            forward_a =2'b01;
        else 
            forward_a =2'b00;
    end



    always_comb begin
        if (ex_mem_reg_write ==1 && ex_mem_rd != 0 && ex_mem_rd == id_ex_rs2)
            forward_b =2'b10;      
        else if (mem_wb_reg_write ==1 && mem_wb_rd != 0 &&  mem_wb_rd == id_ex_rs2)
            forward_b =2'b01;
        else 
            forward_b =2'b00;
    end

assign forwarded_a = (forward_a == 2'b10) ? ex_mem_alu_result :
                     (forward_a == 2'b01) ? write_back_data   :
                                            id_ex_read_data1;

assign forwarded_b = (forward_b == 2'b10) ? ex_mem_alu_result :
                     (forward_b == 2'b01) ? write_back_data   :
                                            id_ex_read_data2;

//**************************__________EX____________***************************


logic [31:0] alu_b;
logic [31:0] alu_result;
logic alu_zero;
logic branch_taken;
 
alu alu_inst (
    .a(forwarded_a),
    .b(alu_b),
    .alu_control(id_ex_alu_control),
    .result(alu_result),
    .zero(alu_zero)
);

assign branch_taken = id_ex_branch && alu_zero; // will impact next_pc 
assign alu_b = (id_ex_alu_src == 0) ? forwarded_b : id_ex_immediate;




always_ff @(posedge clk) begin
    if (reset) begin

        ex_mem_alu_result <= 32'd0;
        ex_mem_write_data <= 32'd0;
        ex_mem_rd       <= 5'd0;

        ex_mem_reg_write  <=1'b0;
        ex_mem_mem_to_reg <= 1'b0;
        ex_mem_mem_write<= 1'b0;

    end
    else 
    begin
        ex_mem_alu_result <= alu_result;
        ex_mem_write_data <= forwarded_b ;
        ex_mem_rd       <= id_ex_rd ;

        ex_mem_reg_write <= id_ex_reg_write;
        ex_mem_mem_to_reg <= id_ex_mem_to_reg ;
        ex_mem_mem_write <= id_ex_mem_write  ;
 
    end
end



//------------------------------------------------
logic [31:0] memory_read_data ;



data_memory data_memory_inst (
    .clk(clk),
    .mem_write(ex_mem_mem_write),
    .address(ex_mem_alu_result),         //the result is the new adress
    .write_data(ex_mem_write_data),      // Data to store in memory (used by SW)
    .read_data(memory_read_data)  // Data read from memory (used by LW)
);



//**************************__________WB____________***************************


logic [31:0] mem_wb_alu_result ;
logic [31:0] mem_wb_read_data;
logic   mem_wb_mem_to_reg;
//logic        mem_wb_reg_write;
//logic [4:0]  mem_wb_rd;
//logic [31:0] write_back_data;

logic [4:0] bypass_rd;

 
 


always_ff @(posedge clk) begin
    if (reset) begin

        mem_wb_alu_result <= 32'd0;
        mem_wb_read_data <= 32'd0;
        mem_wb_rd       <= 5'd0;
        mem_wb_reg_write  <=1'b0;
        mem_wb_mem_to_reg <= 1'b0;

    end
    else 
    begin
        mem_wb_alu_result <= ex_mem_alu_result ;
        mem_wb_read_data <= memory_read_data ;
        mem_wb_rd       <= ex_mem_rd  ;
        mem_wb_reg_write  <=ex_mem_reg_write ;
        mem_wb_mem_to_reg <= ex_mem_mem_to_reg;
 
    end
end

assign write_back_data = (mem_wb_mem_to_reg == 0) ? mem_wb_alu_result : mem_wb_read_data;
 


endmodule