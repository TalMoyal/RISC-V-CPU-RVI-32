module datapath (
    input logic [31:0] instruction,
    input logic        clk,

    output logic [31:0] write_back_data,
    output logic [31:0] branch_immediate,
    output logic branch_taken
);

// ---------- Write-back / Memory control ----------
logic        mem_to_reg;
logic [31:0] memory_read_data;


// ---------- Instruction fields ----------

logic [4:0] rs1;
logic [4:0] rs2;
logic [4:0] rd;

logic [2:0] funct3;
logic [6:0] funct7;
logic [6:0] opcode;


// ---------- Control signals ----------

logic [1:0]  imm_sel;
logic [2:0] alu_control;

logic       reg_write;
logic       mem_write;
logic       alu_src;
logic branch;   // Indicates a branch instruction

// alu_src selects the second input of the ALU:
// 0 -> use the value read from register rs2 (R-Type instructions)
// 1 -> use the immediate value (ADDI, SW)


// ---------- Instruction field extraction ----------

assign opcode = instruction[6:0];
assign rd     = instruction[11:7];
assign funct3 = instruction[14:12];
assign rs1    = instruction[19:15];
assign rs2    = instruction[24:20];
assign funct7 = instruction[31:25];



// ---------- Decoder ----------

decoder decoder_inst (
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .reg_write(reg_write),
    .alu_src(alu_src),
    .mem_write(mem_write),
    .alu_control(alu_control),
    .imm_sel(imm_sel),
    .mem_to_reg(mem_to_reg),
    .branch(branch)
);

// ---------- Immediate Generator ----------


logic [31:0] immediate;


immediate_generator immediate_generator_inst (
    .instruction(instruction),
    .imm_sel(imm_sel),
    .immediate(immediate)
);

assign branch_immediate = immediate; 

// ---------- Register File ----------

logic [31:0] read_data1;
logic [31:0] read_data2;

// ---------- ALU input selection ----------

logic [31:0] alu_b;
logic [31:0] alu_result;

logic alu_zero;
 

assign alu_b = (alu_src == 0) ? read_data2 : immediate;


// ---------- ALU ----------

alu alu_inst (
    .a(read_data1),
    .b(alu_b),
    .alu_control(alu_control),
    .result(alu_result),
    .zero(alu_zero)
);

assign branch_taken = branch && alu_zero;

// ---------- Register File instance ----------

register_file register_file_inst (
    .clk(clk),
    .write_enable(reg_write),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .write_data(write_back_data),
    .read_data1(read_data1),
    .read_data2(read_data2)
);

// ---------- Data Memory ----------

data_memory data_memory_inst (
    .clk(clk),
    .mem_write(mem_write),
    .address(alu_result),//the result is the new adress
    .write_data(read_data2),      // Data to store in memory (used by SW)
    .read_data(memory_read_data)  // Data read from memory (used by LW)
);

// ---------- Write-back MUX ----------

// Select the value that will be written to the destination register:
// 0 -> ALU result
// 1 -> Data read from memory
assign write_back_data = (mem_to_reg == 0) ? alu_result : memory_read_data;

endmodule
