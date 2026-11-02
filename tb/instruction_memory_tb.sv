module instruction_memory_tb;

    logic [31:0] address;
    logic [31:0] instruction;

    instruction_memory dut (
        .address(address),
        .instruction(instruction)
    );

    initial begin

        // Test first instruction
        address = 32'd0;
        #1;

        if (instruction == 32'b000000000111_00000_000_00011_0010011)
            $display("ADDRESS 0 PASSED");
        else
            $display("ADDRESS 0 FAILED");


        // Test a middle instruction
        address = 32'd8;
        #1;

        if (instruction == 32'b0000000_00100_00011_000_00101_0110011)
            $display("ADDRESS 8 PASSED");
        else
            $display("ADDRESS 8 FAILED");


        // Test last instruction in our program
        address = 32'd32;
        #1;

        if (instruction == 32'b111111111101_00000_000_01010_0010011)
            $display("ADDRESS 32 PASSED");
        else
            $display("ADDRESS 32 FAILED");


        $display("Instruction Memory tests completed.");

        $finish;

    end

endmodule