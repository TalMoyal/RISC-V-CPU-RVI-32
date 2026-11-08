module decoder_tb;

    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;

    logic       reg_write;
    logic       alu_src;
    logic       mem_write;
    logic [2:0] alu_control;
    logic [1:0] imm_sel;
    logic mem_to_reg;
    logic branch;

    decoder dut (
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .reg_write(reg_write),
        .alu_src(alu_src),
        .mem_write(mem_write),
        .alu_control(alu_control),
        .mem_to_reg(mem_to_reg),    
        .imm_sel(imm_sel),
        .branch(branch)
    );

    initial begin

    // ADD
    opcode = 7'b0110011;
    funct3 = 3'b000;
    funct7 = 7'b0000000;
     

    #1;

    if (reg_write == 1 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b000&&
        imm_sel == 2'b11 &&
        mem_to_reg == 1'b0)
        $display("ADD PASSED");
    else
        $display("ADD FAILED");

    
    // sub
    opcode = 7'b0110011;
    funct3 = 3'b000;
    funct7 = 7'b0100000;

    #1;

    if (reg_write == 1 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b001&&
        imm_sel == 2'b11 &&
        mem_to_reg == 1'b0)
        $display("sub PASSED");
    else
        $display("sub FAILED");


    //AND
    opcode = 7'b0110011;
    funct3 = 3'b111;
   

    #1;

    if (reg_write == 1 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b010&&
        imm_sel == 2'b11 &&
        mem_to_reg == 1'b0)
        $display("AND PASSED");
    else
        $display("AND FAILED");

    // OR
    opcode = 7'b0110011;
    funct3 = 3'b110;
    funct7 = 7'b0000000;

    #1;

    if (reg_write == 1 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b011&&
        imm_sel == 2'b11 &&
        mem_to_reg == 1'b0)
        $display("OR PASSED");
    else
        $display("OR FAILED");
            
    // ADDI
    opcode = 7'b0010011;
    funct3 = 3'b000;
    funct7 = 7'b0000000;
 
    #1;

    if (reg_write == 1 &&
        alu_src == 1 &&
        mem_write == 0 &&
        alu_control == 3'b000&&
        imm_sel == 2'b00 &&
        mem_to_reg == 1'b0)
        $display("ADDI PASSED");
    else
        $display("ADDI FAILED");

    // LW
    opcode = 7'b0000011;
    funct3 = 3'b010;
    funct7 = 7'b0000000;

    #1;

    if (reg_write == 1 &&
        alu_src == 1 &&
        mem_write == 0 &&
        alu_control == 3'b000 &&
        imm_sel == 2'b00 &&
        mem_to_reg == 1'b1)
        $display("LW PASSED");
    else
        $display("LW FAILED");

    // SW
    opcode = 7'b0100011;
    funct3 = 3'b010;
    funct7 = 7'b0000000;
 
    #1;

    if (reg_write == 0 &&
        alu_src == 1 &&
        mem_write == 1 &&
        alu_control == 3'b000 &&
        imm_sel == 2'b01&&
        mem_to_reg == 1'b0)
        $display("SW PASSED");
    else
        $display("SW FAILED");
    

    // SB (funct3=000) is not supported -> must behave as NOP
    funct3 = 3'b000;
    #1;

    if (reg_write == 0 &&
        mem_write == 0 &&
        branch == 0 &&
        alu_control == 3'b100 &&
        imm_sel == 2'b11)
        $display("SB (unsupported) -> NOP PASSED");
    else
        $display("SB (unsupported) -> NOP FAILED");
    // --------------------------------
// BEQ
// --------------------------------

    opcode = 7'b1100011;
    funct3 = 3'b000;
    funct7 = 7'b0000000;

    #1;

    if (reg_write   == 1'b0 &&
        alu_src      == 1'b0 &&
        mem_write    == 1'b0 &&
        alu_control  == 3'b001 &&
        imm_sel      == 2'b10 &&
        mem_to_reg   == 1'b0 &&
        branch       == 1'b1)
        $display("BEQ PASSED");
    else
        $display("BEQ FAILED");


// --------------------------------------------------
    // INVALID LW FUNCT3
    // INVALID ADDI FUNCT3 (XORI)
    opcode = 7'b0010011;
    funct3 = 3'b100;
    funct7 = 7'b0000000;

    #1;

    if (reg_write == 0 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b100 &&
        imm_sel == 2'b11 &&
        mem_to_reg == 1'b0 &&
        branch == 1'b0)
        $display("INVALID ADDI FUNCT3 PASSED");
    else
        $display("INVALID ADDI FUNCT3 FAILED");

    // INVALID SW FUNCT3 (SB)
    opcode = 7'b0100011;
    funct3 = 3'b000;
    funct7 = 7'b0000000;

    #1;

    if (reg_write == 0 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b100 &&
        imm_sel == 2'b11 &&
        mem_to_reg == 1'b0 &&
        branch == 1'b0)
        $display("INVALID SW FUNCT3 PASSED");
    else
        $display("INVALID SW FUNCT3 FAILED");

    opcode = 7'b0000011;
    funct3 = 3'b001;
    funct7 = 7'b0000000;

    #1;

    if (reg_write == 0 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b100 &&
        imm_sel == 2'b11 &&
        mem_to_reg == 1'b0)
        $display("INVALID LW FUNCT3 PASSED");
    else
        $display("INVALID LW FUNCT3 FAILED");

    // INVALID OPCODE
    opcode = 7'b1111111;
    funct3 = 3'b000;
    funct7 = 7'b0000000;

    #1;

    if (reg_write == 0 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b100&&
        imm_sel == 2'b11)
        $display("INVALID OPCODE PASSED");
    else
        $display("INVALID OPCODE FAILED");



    // INVALID FUNCT3
    opcode = 7'b0110011;
    funct3 = 3'b001;
    funct7 = 7'b0000000;

    #1;

    if (reg_write == 0 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b100)
        $display("INVALID FUNCT3 PASSED");
    else
        $display("INVALID FUNCT3 FAILED");



    // INVALID FUNCT7
    opcode = 7'b0110011;
    funct3 = 3'b000;
    funct7 = 7'b1111111;

    #1;

    if (reg_write == 0 &&
        alu_src == 0 &&
        mem_write == 0 &&
        alu_control == 3'b100)
        $display("INVALID FUNCT7 PASSED");
    else
        $display("INVALID FUNCT7 FAILED");
    // -------------------------------------

    $finish;
    end
endmodule