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
 
         // load the program from file into instruction memory
        $readmemh("programs/prog_alu_mem.hex", dut.instruction_memory_inst.memory);
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
 
        // 9 instructions, 1 clock cycle each
        repeat (9) @(posedge clk);
        #1;
 
 
        // --------------------------------
        // Register checks
        // --------------------------------
 
        // ADDI x3, x0, 7  -> x3 = 7
        if (dut.datapath_inst.register_file_inst.registers[3] == 32'd7)
            $display("x3 = 7 PASSED");
        else
            $display("x3 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[3]);
 
 
        // ADDI x4, x0, 5  -> x4 = 5
        if (dut.datapath_inst.register_file_inst.registers[4] == 32'd5)
            $display("x4 = 5 PASSED");
        else
            $display("x4 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[4]);
 
 
        // ADD x5, x3, x4  -> x5 = 7 + 5 = 12
        if (dut.datapath_inst.register_file_inst.registers[5] == 32'd12)
            $display("x5 = 12 PASSED");
        else
            $display("x5 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[5]);
 
 
        // LW x6, 8(x0)    -> x6 = 12 (value stored by SW)
        if (dut.datapath_inst.register_file_inst.registers[6] == 32'd12)
            $display("x6 = 12 PASSED");
        else
            $display("x6 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[6]);
 
 
        // SUB x7, x5, x3  -> x7 = 12 - 7 = 5
        if (dut.datapath_inst.register_file_inst.registers[7] == 32'd5)
            $display("x7 = 5 PASSED");
        else
            $display("x7 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[7]);
 
 
        // AND x8, x5, x4  -> x8 = 12 & 5 = 4
        if (dut.datapath_inst.register_file_inst.registers[8] == 32'd4)
            $display("x8 = 4 PASSED");
        else
            $display("x8 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[8]);
 
 
        // OR x9, x5, x4   -> x9 = 12 | 5 = 13
        if (dut.datapath_inst.register_file_inst.registers[9] == 32'd13)
            $display("x9 = 13 PASSED");
        else
            $display("x9 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[9]);
 
 
        // ADDI x10, x0, -3 -> x10 = -3 = 0xFFFFFFFD (two's complement)
        if (dut.datapath_inst.register_file_inst.registers[10] == 32'hFFFFFFFD)
            $display("x10 = -3 PASSED");
        else
            $display("x10 FAILED: %0d",
                     dut.datapath_inst.register_file_inst.registers[10]);
 
 
        // --------------------------------
        // Data memory check
        // --------------------------------
 
        // SW x5, 8(x0) -> memory word index 8/4 = 2
        if (dut.datapath_inst.data_memory_inst.memory[2] == 32'd12)
            $display("memory[2] = 12 PASSED");
        else
            $display("memory[2] FAILED: %0d",
                     dut.datapath_inst.data_memory_inst.memory[2]);
 
 
        // --------------------------------
        // Final PC
        // --------------------------------
 
        // 9 instructions * 4 bytes = 36
        if (dut.pc_inst.pc == 32'd36)
            $display("FINAL PC PASSED");
        else
            $display("FINAL PC FAILED: %0d", dut.pc_inst.pc);
 
 
        $display("9-instruction CPU integration test completed.");
 
        $finish;
 
    end
 
endmodule
 