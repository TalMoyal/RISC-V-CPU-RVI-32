module cpu_pipelined_load_use_tb;
 
    logic clk;
    logic reset;
 
    cpu_pipelined dut (
        .clk(clk),
        .reset(reset)
    );
 
    // Clock
    always #5 clk = ~clk;
 
    // Waveform dump
    initial begin
        $dumpfile("cpu_pipelined_load_use_tb.vcd");
        $dumpvars(0, cpu_pipelined_load_use_tb);
    end
 
    initial begin
 
        clk   = 0;
        reset = 1;
 
         // load the program from file into instruction memory
        $readmemh("programs/prog_load_use.hex", dut.instruction_memory_inst.memory);
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
 
        // 9 = 4+4+1
        repeat (9) @(posedge clk);
        #1;
 
 
        // --------------------------------
        // Register checks
        // --------------------------------
 

        // ADDI x3, x0, 7  -> x3 = 7
        if (dut.register_file_inst.registers[3] == 32'd7)
            $display("x3 = 7 PASSED");

        else
            $display("x3 FAILED: %0d",
                     dut.register_file_inst.registers[3]) ;
 
 
        // SW x3, 8(x0) -> memory word index 8/4 = 2
        if (dut.data_memory_inst.memory[2] == 32'd7)
            $display("memory[2] = 7 PASSED");
        else
            $display("memory[2] FAILED: %0d",
                   dut.data_memory_inst.memory[2]);

        // LW x4, 8(x0)    -> x4 = 7 (value stored by SW)
        if (dut.register_file_inst.registers[4] == 32'd7)
            $display("x4 = 7 PASSED");
        else
            $display("x4 FAILED: %0d",
                   dut.register_file_inst.registers[4]);
 

 
        // ADD x5, x4, x4 -> x5 = 7 + 7 = 14
        if (dut.register_file_inst.registers[5] == 32'd14)
            $display("x5 = 14 PASSED");
        else
            $display("x5 FAILED: %0d",
                    dut.register_file_inst.registers[5]);
 
 

        // --------------------------------
        // Final PC
        // --------------------------------
 
        // 9 cycle * 4 bytes = 36 -4 stall =32
        if (dut.pc_inst.pc == 32'd32)
            $display("FINAL PC PASSED");
        else
            $display("FINAL PC FAILED: %0d", dut.pc_inst.pc);
 
 
        $display("instruction pipelined CPU integration test completed.");
 
        $finish;
 
    end
 
endmodule
 