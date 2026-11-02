module cpu_tb;

    logic clk;
    logic reset;

    cpu dut (
        .clk(clk),
        .reset(reset)
    );

    // Clock
    always #5 clk = ~clk;

    // Waveform dump
    initial begin
        $dumpfile("cpu_tb.vcd");
        $dumpvars(0, cpu_tb);
    end

    initial begin

        clk   = 0;
        reset = 1;

        // --------------------------------
        // Reset
        // --------------------------------

        @(posedge clk);
        #1;

        if (dut.pc_inst.pc == 32'd0)
            $display("RESET PASSED");
        else
            $display("RESET FAILED: PC = %0d", dut.pc_inst.pc);


        // --------------------------------
        // Start CPU
        // --------------------------------

        reset = 0;

        repeat (4) @(posedge clk);
        #1;


        // --------------------------------
        // Register checks
        // --------------------------------

        // x1 = 5
        if (dut.datapath_inst.register_file_inst.registers[1] == 32'd5)
            $display("x1 = 5 PASSED");
        else
            $display("x1 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[1]);


        // x2 = 5
        if (dut.datapath_inst.register_file_inst.registers[2] == 32'd5)
            $display("x2 = 5 PASSED");
        else
            $display("x2 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[2]);


        // x5 should remain 0 because its ADDI was skipped
        if (dut.datapath_inst.register_file_inst.registers[5] == 32'd0)
            $display("x5 SKIPPED PASSED");
        else
            $display("x5 SKIPPED FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[5]);


        // x6 = 42 because the target instruction executed
        if (dut.datapath_inst.register_file_inst.registers[6] == 32'd42)
            $display("x6 = 42 PASSED");
        else
            $display("x6 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[6]);


        // --------------------------------
        // Final PC
        // --------------------------------

        if (dut.pc_inst.pc == 32'd20)
            $display("FINAL PC PASSED");
        else
            $display("FINAL PC FAILED: %0d", dut.pc_inst.pc);


        $display("BEQ CPU integration test completed.");

        $finish;

    end

endmodule