module register_file_tb;

    logic        clk;
    logic        write_enable;

    logic [4:0]  rs1;
    logic [4:0]  rs2;
    logic [4:0]  rd;
    logic [31:0] write_data;

    logic [31:0] read_data1;
    logic [31:0] read_data2;

    register_file dut (
        .clk(clk),
        .write_enable(write_enable),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .write_data(write_data),
        .read_data1(read_data1),
        .read_data2(read_data2)
    );

    // Clock
    always #5 clk = ~clk;

    initial begin

        clk = 0;
        write_enable = 0;
        rs1 = 0;
        rs2 = 0;
        rd = 0;
        write_data = 0;


        // =====================================
        // TEST 1: Write x5
        // =====================================

        rd = 5;
        write_data = 32'd123;
        write_enable = 1;

        #10;

        write_enable = 0;

        // Read x5
        rs1 = 5;

        #1;

        if (read_data1 == 32'd123)
            $display("WRITE/READ x5 PASSED");
        else
            $display("WRITE/READ x5 FAILED");


        // =====================================
        // TEST 2: Read two registers
        // =====================================

        rd = 6;
        write_data = 32'd456;
        write_enable = 1;

        #10;

        write_enable = 0;

        rs1 = 5;
        rs2 = 6;

        #1;

        if (read_data1 == 32'd123 &&
            read_data2 == 32'd456)
            $display("TWO READ PORTS PASSED");
        else
            $display("TWO READ PORTS FAILED");


        // =====================================
        // TEST 3: x0 must always be zero
        // =====================================

        rd = 0;
        write_data = 32'd999;
        write_enable = 1;

        #10;

        write_enable = 0;

        rs1 = 0;

        #1;

        if (read_data1 == 32'd0)
            $display("x0 PROTECTION PASSED");
        else
            $display("x0 PROTECTION FAILED");


        // =====================================
        // Finish
        // =====================================

        $display("All register file tests completed.");

        $finish;

    end

endmodule