`timescale 1ns/1ps

module tb_mux2to1;

    logic a;
    logic b;
    logic sel;
    logic y;

    mux2to1 dut (
        .a(a),
        .b(b),
        .sel(sel),
        .y(y)
    );

    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, tb_mux2to1);

        a = 1'b0; b = 1'b1; sel = 1'b0;
        #10;
        
        sel = 1'b1;
        #10;
        
        a = 1'b1; b = 1'b0; sel = 1'b0;
        #10;
        
        sel = 1'b1;
        #10;

        $display("Simulation finished!");
        $finish;
    end

endmodule