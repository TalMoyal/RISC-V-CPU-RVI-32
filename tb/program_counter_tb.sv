module program_counter_tb;

    logic        clk;
    logic        reset;
    logic [31:0] next_pc;
    logic [31:0] pc;

    program_counter dut (
        .clk(clk),
        .reset(reset),
        .next_pc(next_pc),
        .pc(pc)
    );

    // Clock
    always #5 clk = ~clk;

    initial begin

        clk     = 0;
        reset   = 1;
        next_pc = 32'd4;

        // --------------------------------
        // TEST 1: Reset
        // --------------------------------

        @(posedge clk);
        #1;

        if (pc == 32'd0)
            $display("RESET PASSED");
        else
            $display("RESET FAILED: pc = %0d", pc);


        // --------------------------------
        // TEST 2: PC = 4
        // --------------------------------

        reset   = 0;
        next_pc = 32'd4;

        @(posedge clk);
        #1;

        if (pc == 32'd4)
            $display("PC = 4 PASSED");
        else
            $display("PC = 4 FAILED: pc = %0d", pc);


        // --------------------------------
        // TEST 3: PC = 8
        // --------------------------------

        next_pc = 32'd8;

        @(posedge clk);
        #1;

        if (pc == 32'd8)
            $display("PC = 8 PASSED");
        else
            $display("PC = 8 FAILED: pc = %0d", pc);


        // --------------------------------
        // TEST 4: PC = 16
        // --------------------------------

        next_pc = 32'd16;

        @(posedge clk);
        #1;

        if (pc == 32'd16)
            $display("PC = 16 PASSED");
        else
            $display("PC = 16 FAILED: pc = %0d", pc);


        // --------------------------------
        // TEST 5: Reset again
        // --------------------------------

        reset = 1;

        @(posedge clk);
        #1;

        if (pc == 32'd0)
            $display("RESET AGAIN PASSED");
        else
            $display("RESET AGAIN FAILED: pc = %0d", pc);


        $display("Program Counter tests completed.");

        $finish;

    end

endmodule