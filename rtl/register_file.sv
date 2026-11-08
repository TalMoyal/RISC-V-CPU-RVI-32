
// reigister file


// ADD x5,rs1,rs2 --


module register_file (
    input  logic        clk,
    input  logic        write_enable,

    input  logic [4:0]  rs1,    //read 1
    input  logic [4:0]  rs2,     //read 2
    input  logic [4:0]  rd,      //pos to write
    input  logic [31:0] write_data,

    output logic [31:0] read_data1,
    output logic [31:0] read_data2
);

logic [31:0] registers [0:31];
// simulation only: start with all registers = 0
initial begin
    for (int i = 0; i < 32; i++)
        registers[i] = 32'b0;
end


always_ff @(posedge clk) begin
    if (write_enable) begin   //write enable =1 & clk =1 --->
        if (rd != 0)
            registers[rd] <= write_data;
    end
end

assign read_data1 = (rs1 == 0) ? 32'b0 : registers[rs1];
assign read_data2 = (rs2 == 0) ? 32'b0 : registers[rs2];

endmodule


