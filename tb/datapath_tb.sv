module datapath_tb;

    logic [31:0] instruction;
    logic        clk;
    logic [31:0] write_back_data;
    logic branch_taken;

    datapath dut (
        .instruction(instruction),
        .clk(clk),
        .write_back_data(write_back_data),
        .branch_taken(branch_taken)
    );

    always #5 clk = ~clk;

    initial begin

        clk = 0;
        instruction = 32'b0;

        // --------------------------------
        // ADDI x3, x0, 7
        // --------------------------------

        instruction = 32'b000000000111_00000_000_00011_0010011;

        #10;

        if (write_back_data == 32'd7)
            $display("ADDI x3 PASSED");
        else
            $display("ADDI x3 FAILED: result = %0d", write_back_data);


        // --------------------------------
        // ADDI x4, x0, 5
        // --------------------------------

        instruction = 32'b000000000101_00000_000_00100_0010011;

        #10;

        if (write_back_data == 32'd5)
            $display("ADDI x4 PASSED");
        else
            $display("ADDI x4 FAILED: result = %0d", write_back_data);


        // --------------------------------
        // ADD x5, x3, x4
        // x5 = 7 + 5 = 12
        // --------------------------------

        instruction = 32'b0000000_00100_00011_000_00101_0110011;

        #10;

        if (write_back_data == 32'd12)
            $display("ADD x5 PASSED");
        else
            $display("ADD x5 FAILED: result = %0d", write_back_data);
        

        // --------------------------------
        // SW x5, 8(x0)
        // --------------------------------

        instruction = 32'b0000000_00101_00000_010_01000_0100011;

        #10;

        $display("SW completed");


        // --------------------------------
        // LW x6, 8(x0)
        // --------------------------------

        instruction = 32'b000000001000_00000_010_00110_0000011;

        #10;

        if (write_back_data == 32'd12)
            $display("LW x6 PASSED");
        else
            $display("LW x6 FAILED: result = %0d", write_back_data);

        
        
         $display("Sequential datapath test completed.");



        // --------------------------------
        // Prepare x1 = 5
        // ADDI x1, x0, 5
        // --------------------------------

        instruction = 32'b000000000101_00000_000_00001_0010011;

        #10;


        // --------------------------------
        // Prepare x2 = 5
        // ADDI x2, x0, 5
        // --------------------------------

        instruction = 32'b000000000101_00000_000_00010_0010011;

        #10;


        // --------------------------------
        // BEQ x1, x2, +8
        // --------------------------------

        instruction = 32'b0000000_00010_00001_000_0100_0_1100011;

        #1;

        if (branch_taken == 1'b1)
            $display("BEQ TAKEN PASSED");
        else
            $display("BEQ TAKEN FAILED");

         // --------------------------------
        // Prepare x2 = 6
        // ADDI x2, x0, 6
        // --------------------------------

        instruction = 32'b000000000110_00000_000_00010_0010011;

        #10;


        // --------------------------------
        // BEQ x1, x2, +8
        // --------------------------------

        instruction = 32'b0000000_00010_00001_000_0100_0_1100011;

        #1;

        if (branch_taken == 1'b0)
            $display("BEQ NOT TAKEN PASSED");
        else
            $display("BEQ NOT TAKEN FAILED");

         $finish;

    end

endmodule