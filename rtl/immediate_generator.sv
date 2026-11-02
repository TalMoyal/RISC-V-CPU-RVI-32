
module immediate_generator (
    input  logic [31:0] instruction,
    input  logic [1:0]  imm_sel, 

    output logic [31:0] immediate
);

    // imm_sel selects the instruction format used to generate the immediate.
 
    always_comb begin
        case (imm_sel)
            // Case 00: I-Type instructions (e.g., ADDI, LW)

            // The 12-bit immediate is contiguous and located in bits [31:20].
            // Sign extension is done by replicating the MSB (instruction[31]) 20 times.
            2'b00: begin
                immediate = { {20{instruction[31]}}, instruction[31:20] };
            end

            // Case 01: S-Type instructions (e.g., SW)
            
            // The 12-bit immediate is split to keep rs1 and rs2 in fixed positions.
            // Top 7 bits are in [31:25], and bottom 5 bits are in [11:7].
            // We sign-extend the MSB 20 times and concatenate the two split parts.
            2'b01: begin
                immediate = { {20{instruction[31]}}, instruction[31:25], instruction[11:7] };
            end

            // Case 10: B-Type instructions (e.g., BEQ)
            // The immediate is split and scrambled around rs1/rs2.
            // Bit 0 is always 0 because B-Type branch offsets are multiples of 2 bytes.
            2'b10: begin
                immediate = { {20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0 };
            end

            // Default case (e.g., for R-Type instructions or unknown opcodes)
            // Outputs zero to prevent unwanted behavior and avoid unintended latches.
            default: begin
                immediate = 32'b0;
            end
    endcase
end
   
endmodule
