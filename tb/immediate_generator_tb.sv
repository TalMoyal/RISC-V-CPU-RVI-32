module immediate_generator_tb;

    logic [31:0] instruction;
    logic [1:0]  imm_sel;
    logic [31:0] immediate;

    immediate_generator dut (
        .instruction(instruction),
        .imm_sel(imm_sel),
        .immediate(immediate)
    );

    initial begin

        // --------------------------------
        // I-Type positive immediate
        // ADDI x5, x0, 10
        // --------------------------------

        instruction = 32'b000000001010_00000_000_00101_0010011;
        imm_sel     = 2'b00;

        #1;

        if (immediate == 32'd10)
            $display("I-TYPE POSITIVE PASSED");
        else
            $display("I-TYPE POSITIVE FAILED: immediate = %0d", immediate);


        // --------------------------------
        // I-Type negative immediate
        // ADDI x5, x0, -3
        // --------------------------------

        instruction = 32'b111111111101_00000_000_00101_0010011;
        imm_sel     = 2'b00;

        #1;

        if (immediate == 32'hFFFFFFFD)
            $display("I-TYPE NEGATIVE PASSED");
        else
            $display("I-TYPE NEGATIVE FAILED: immediate = %h", immediate);


        // --------------------------------
        // S-Type positive immediate
        // SW x5, 8(x0)
        // --------------------------------

        instruction = 32'b0000000_00101_00000_010_01000_0100011;
        imm_sel     = 2'b01;

        #1;

        if (immediate == 32'd8)
            $display("S-TYPE POSITIVE PASSED");
        else
            $display("S-TYPE POSITIVE FAILED: immediate = %0d", immediate);


        // --------------------------------
        // B-Type positive immediate
        // BEQ x1, x2, +8
        // --------------------------------

        instruction = 32'b0000000_00010_00001_000_0100_0_1100011;
        imm_sel     = 2'b10;

        #1;

        if (immediate == 32'd8)
            $display("B-TYPE POSITIVE PASSED");
        else
            $display("B-TYPE POSITIVE FAILED: immediate = %0d", immediate);


        // --------------------------------
        // B-Type negative immediate
        // BEQ x1, x2, -8
        // --------------------------------

        instruction = 32'b1111111_00010_00001_000_1100_1_1100011;
        imm_sel     = 2'b10;

        #1;

        if (immediate == 32'hFFFFFFF8)
            $display("B-TYPE NEGATIVE PASSED");
        else
            $display("B-TYPE NEGATIVE FAILED: immediate = %h", immediate);


        // --------------------------------
        // Invalid
        // --------------------------------

        instruction = 32'b0;
        imm_sel     = 2'b11;

        #1;

        if (immediate == 32'b0)
            $display("INVALID PASSED");
        else
            $display("INVALID FAILED: immediate = %h", immediate);


        $display("Immediate Generator tests completed.");

        $finish;

    end

endmodule