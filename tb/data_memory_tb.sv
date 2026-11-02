module data_memory_tb;

    logic        clk;
    logic        mem_write;
    logic [31:0] address;
    logic [31:0] write_data;
    logic [31:0] read_data;

    data_memory dut (
        .clk(clk),
        .mem_write(mem_write),
        .address(address),
        .write_data(write_data),
        .read_data(read_data)
    );

    // Clock
    always #5 clk = ~clk;

    initial begin

        clk        = 0;
        mem_write  = 0;
        address    = 0;
        write_data = 0;


        // WRITE TEST
        address    = 32'd108;
        write_data = 32'd55;
        mem_write  = 1;

        #10;

        mem_write = 0;
        #1;

        if (read_data == 32'd55)
            $display("WRITE/READ PASSED");
        else
            $display("WRITE/READ FAILED");

                
        // NO WRITE TEST
        address    = 32'd108;
        write_data = 32'd99;
        mem_write  = 0;

        #10;

        if (read_data == 32'd55)
            $display("NO WRITE PROTECTION PASSED");
        else
            $display("NO WRITE PROTECTION FAILED");
        $display("All data memory tests completed.");
        $finish;

    end
endmodule

