// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


VL_ATTR_COLD void Vcpu_tb___024root__trace_init_dtype____0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_sub__TOP__0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "cpu_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"write_back_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"branch_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"branch_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "datapath_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"write_back_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"branch_immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"alu_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"alu_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"alu_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "data_memory_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decoder_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"alu_control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "immediate_generator_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"imm_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "register_file_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vcpu_tb___024root__trace_init_dtype____0(vlSelf, tracep, "registers", 0, c+25, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "instruction_memory_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pc_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_dtype_sub____0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_dtype____0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_dtype____0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_tb___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_dtype_sub____0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_dtype_sub____0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_top(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_top\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_tb___024root__trace_register(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_register\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcpu_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcpu_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcpu_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcpu_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_const_0\n"); );
    // Body
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_full_0\n"); );
    // Body
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcpu_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_dtype____0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_full_0_sub_0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.cpu_tb__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+1,(((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg)
                              ? vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory
                             [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result 
                                              >> 2U))]
                              : vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result)),32);
    bufp->fullIData(oldp+2,((((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch) 
                              & (0U == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result))
                              ? (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                 + vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate)
                              : ((IData)(4U) + vlSelfRef.cpu_tb__DOT__dut__DOT__pc))),32);
    bufp->fullIData(oldp+3,((vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                             + vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate)),32);
    bufp->fullIData(oldp+4,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate),32);
    bufp->fullBit(oldp+5,(((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch) 
                           & (0U == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result))));
    bufp->fullBit(oldp+6,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg));
    bufp->fullIData(oldp+7,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory
                            [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result 
                                             >> 2U))]),32);
    bufp->fullCData(oldp+8,(vlSelfRef.__VdfgRegularize_hebeb780c_0_4),5);
    bufp->fullCData(oldp+9,(vlSelfRef.__VdfgRegularize_hebeb780c_0_5),5);
    bufp->fullCData(oldp+10,(vlSelfRef.__VdfgRegularize_hebeb780c_0_3),5);
    bufp->fullCData(oldp+11,(vlSelfRef.__VdfgRegularize_hebeb780c_0_1),3);
    bufp->fullCData(oldp+12,(vlSelfRef.__VdfgRegularize_hebeb780c_0_2),7);
    bufp->fullCData(oldp+13,(vlSelfRef.__VdfgRegularize_hebeb780c_0_0),7);
    bufp->fullCData(oldp+14,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel),2);
    bufp->fullCData(oldp+15,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control),3);
    bufp->fullBit(oldp+16,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write));
    bufp->fullBit(oldp+17,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write));
    bufp->fullBit(oldp+18,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src));
    bufp->fullBit(oldp+19,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch));
    bufp->fullIData(oldp+20,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data1),32);
    bufp->fullIData(oldp+21,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data2),32);
    bufp->fullIData(oldp+22,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_b),32);
    bufp->fullIData(oldp+23,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result),32);
    bufp->fullBit(oldp+24,((0U == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result)));
    Vcpu_tb___024root__trace_full_dtype____0(vlSelf, bufp, 25, vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers);
    bufp->fullBit(oldp+57,(vlSelfRef.cpu_tb__DOT__clk));
    bufp->fullBit(oldp+58,(vlSelfRef.cpu_tb__DOT__reset));
    bufp->fullIData(oldp+59,(vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                             [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                              >> 2U))]),32);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_dtype____0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_full_dtype____0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->fullIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->fullIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->fullIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->fullIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->fullIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->fullIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->fullIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->fullIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->fullIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->fullIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->fullIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->fullIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->fullIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->fullIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->fullIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->fullIData(oldp+31,(__VdtypeVar[31]),32);
}
