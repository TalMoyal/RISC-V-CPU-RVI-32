module data_memory (
    input logic        clk,
    input logic        mem_write,
    input logic [31:0] address,
    input logic [31:0] write_data,


    output logic [31:0] read_data

);

    logic [31:0] memory [0:255];

    always_ff @(posedge clk) begin
        if (mem_write) begin
            memory[address[9:2]] <= write_data;
            
            //adress[31:2] same as divise by 4 . focus the others bits
            // Use address[31:2] as the word index, since each memory word is 4 bytes
        end
    end

    assign read_data = memory[address[9:2]];

endmodule