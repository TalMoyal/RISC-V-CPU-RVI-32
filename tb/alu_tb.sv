
module decoder_tb;

    // Inputs to DUT
    logic [6:0] opcode;

    logic reg_write;
    logic alu_src;
    logic mem_write;
 
    decoder dut (
        .opcode(opcode),
        .reg_write(reg_write),
        .alu_src(alu_src),
        .mem_write(mem_write)
    );

    initial begin

        // -------------------------
        // Test 1: ADDI
        // -------------------------

        opcode = 7'b0010011;
        #10;

        if (reg_write !== 1 ||
            alu_src   !== 1 ||
            mem_write !== 0) begin

            $error("ADDI test FAILED");

        end else begin

            $display("ADDI test PASSED");

        end


        // -------------------------
        // Test 2: SW
        // -------------------------

        opcode = 7'b0100011;
        #10;

        if (reg_write !== 0 ||
            alu_src   !== 1 ||
            mem_write !== 1) begin

            $error("SW test FAILED");

        end else begin

            $display("SW test PASSED");

        end


        // -------------------------
        // Test 3: Unknown opcode
        // -------------------------

        opcode = 7'b1111111;
        #10;

        if (reg_write !== 0 ||
            alu_src   !== 0 ||
            mem_write !== 0) begin

            $error("DEFAULT test FAILED");

        end else begin

            $display("DEFAULT test PASSED");

        end


        // -------------------------
        // Finish simulation
        // -------------------------

        $display("All decoder tests completed.");
        $finish;

    end

endmodule