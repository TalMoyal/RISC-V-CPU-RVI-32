// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0\n"); );
    // Body
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcpu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_tb___024root__trace_chg_dtype____0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0_sub_0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cpu_tb__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+1,(((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg)
                                 ? vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory
                                [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result 
                                                 >> 2U))]
                                 : vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result)),32);
        bufp->chgIData(oldp+2,((((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch) 
                                 & (0U == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result))
                                 ? (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                    + vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate)
                                 : ((IData)(4U) + vlSelfRef.cpu_tb__DOT__dut__DOT__pc))),32);
        bufp->chgIData(oldp+3,((vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                + vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate)),32);
        bufp->chgIData(oldp+4,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate),32);
        bufp->chgBit(oldp+5,(((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch) 
                              & (0U == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result))));
        bufp->chgBit(oldp+6,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg));
        bufp->chgIData(oldp+7,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory
                               [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result 
                                                >> 2U))]),32);
        bufp->chgCData(oldp+8,(vlSelfRef.__VdfgRegularize_hebeb780c_0_4),5);
        bufp->chgCData(oldp+9,(vlSelfRef.__VdfgRegularize_hebeb780c_0_5),5);
        bufp->chgCData(oldp+10,(vlSelfRef.__VdfgRegularize_hebeb780c_0_3),5);
        bufp->chgCData(oldp+11,(vlSelfRef.__VdfgRegularize_hebeb780c_0_1),3);
        bufp->chgCData(oldp+12,(vlSelfRef.__VdfgRegularize_hebeb780c_0_2),7);
        bufp->chgCData(oldp+13,(vlSelfRef.__VdfgRegularize_hebeb780c_0_0),7);
        bufp->chgCData(oldp+14,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel),2);
        bufp->chgCData(oldp+15,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control),3);
        bufp->chgBit(oldp+16,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write));
        bufp->chgBit(oldp+17,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write));
        bufp->chgBit(oldp+18,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src));
        bufp->chgBit(oldp+19,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch));
        bufp->chgIData(oldp+20,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data1),32);
        bufp->chgIData(oldp+21,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data2),32);
        bufp->chgIData(oldp+22,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_b),32);
        bufp->chgIData(oldp+23,(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result),32);
        bufp->chgBit(oldp+24,((0U == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result)));
        Vcpu_tb___024root__trace_chg_dtype____0(vlSelf, bufp, 25, vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers);
    }
    bufp->chgBit(oldp+57,(vlSelfRef.cpu_tb__DOT__clk));
    bufp->chgBit(oldp+58,(vlSelfRef.cpu_tb__DOT__reset));
    bufp->chgIData(oldp+59,(vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                            [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                             >> 2U))]),32);
}

void Vcpu_tb___024root__trace_chg_dtype____0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_dtype____0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
}

void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_cleanup\n"); );
    // Body
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
