
module decoder (
    input  logic [6:0] opcode,
    input logic [2:0] funct3,
    input  logic [6:0] funct7,

    output logic       reg_write,
    output logic       alu_src,
    output logic       mem_write,
    output logic [2:0] alu_control,
    output logic [1:0] imm_sel,
    output logic mem_to_reg,
    output logic branch

);

always_comb begin

    //default
    reg_write   = 0;
    alu_src     = 0;
    mem_write   = 0;
    mem_to_reg = 1'b0;
    alu_control = 3'b100;  //invalid
    imm_sel     = 2'b11;   //invalid
    branch = 1'b0;

    case (opcode)

        // =================
        // R-Type
        // =================

        7'b0110011: begin
            reg_write = 1;
            alu_src   = 0;
            mem_write = 0;
            
            case (funct3)

                3'b000: begin
                    //  ADD / SUB

                    case(funct7)

                        7'b0000000: begin   //ADD
                            alu_control= 3'b000;
                        end

                        7'b0100000: begin    //SUB
                            alu_control= 3'b001;   
                        end
                            
                        default: begin
                            alu_control = 3'b100;
                            reg_write = 0;
                        end

                    endcase
                end

                3'b111: begin
                    // AND

                    alu_control =  3'b010;
                end

                3'b110: begin
                   // OR
                   alu_control =  3'b011;
                end
             
                default: begin
                    reg_write   = 0;
                    alu_src     = 0;
                    mem_write   = 0;
                    alu_control = 3'b100;
                end
                
            endcase
        end
     
     
        // =================
        // ADDI - I type
        // =================
        7'b0010011: begin

        reg_write   = 1;
        alu_src     = 1;
        mem_write   = 0;
        alu_control = 3'b000;
        imm_sel     = 2'b00;

        end
        // =================
        // LW - I-Type
        // =================
        7'b0000011: begin
            
            if (funct3 == 3'b010) begin
                reg_write   = 1;
                alu_src     = 1;
                mem_write   = 0;
                alu_control = 3'b000;
                imm_sel     = 2'b00;
                mem_to_reg  = 1'b1;
            end
            else begin
                reg_write   = 0;
                alu_src     = 0;
                mem_write   = 0;
                alu_control = 3'b100;
                imm_sel     = 2'b11;
                mem_to_reg  = 1'b0;
            end
        end

         // =================
        // SW - S-Type
        // =================
        7'b0100011: begin
            reg_write = 0;
            alu_src   = 1;
            mem_write = 1;
            alu_control = 3'b000;
            imm_sel = 2'b01;
        end


        // =================
        // B-Type 
        // =================
        7'b1100011: begin

            case (funct3)

                // BEQ
                3'b000: begin

                    alu_control = 3'b001;   // SUB
                    imm_sel     = 2'b10;    // B-Type
                    branch      = 1'b1;  //branch=1
                end

                default: begin
                    // Keep default invalid control values
                end

            endcase
        end
        
        default: begin
            
            reg_write   = 1'b0;
            alu_src     = 1'b0;
            mem_write   = 1'b0;
            alu_control = 3'b100;
            imm_sel = 2'b11;
            mem_to_reg = 1'b0;
            branch = 1'b0;
        end

    endcase
end

endmodule