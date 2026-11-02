module cpu (
    input logic clk,
    input logic reset
);

    logic [31:0] pc;
    logic [31:0] instruction;
    logic [31:0] write_back_data;
    logic [31:0] next_pc;
    logic [31:0] branch_target;
    logic [31:0] branch_immediate;
    logic branch_taken;

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


    datapath datapath_inst (
        .instruction(instruction),
        .clk(clk),
        .write_back_data(write_back_data),
        .branch_taken(branch_taken),
        .branch_immediate(branch_immediate)
    );

    assign branch_target = pc + branch_immediate;

    assign next_pc = branch_taken ? branch_target : (pc + 32'd4);  //branch_taken = 1 -> branch target , else pc+=4
    
endmodule