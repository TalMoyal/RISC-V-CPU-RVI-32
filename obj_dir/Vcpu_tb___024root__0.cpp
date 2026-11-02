// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_initial(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("cpu_tb.vcd"s);
        vlSymsp->_traceDumpOpen();
        vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory[0U] = 0x00500093U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory[1U] = 0x00500113U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory[2U] = 0x00208463U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory[3U] = 0x06300293U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory[4U] = 0x02a00313U;
    }
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vcpu_tb___024root____VbeforeTrig_h42eb6e09__0(Vcpu_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.cpu_tb__DOT__clk = 0U;
    vlSelfRef.cpu_tb__DOT__reset = 1U;
    Vcpu_tb___024root____VbeforeTrig_h42eb6e09__0(vlSelf, 
                                                  "@(posedge cpu_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h42eb6e09__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge cpu_tb.clk)", 
                                                         "tb/cpu_tb.sv", 
                                                         29);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/cpu_tb.sv", 
                                         30);
    if ((0U == vlSelfRef.cpu_tb__DOT__dut__DOT__pc)) {
        VL_WRITEF_NX("RESET PASSED\n",0);
    } else {
        VL_WRITEF_NX("RESET FAILED: PC = %0d\n",1, '#',32,vlSelfRef.cpu_tb__DOT__dut__DOT__pc);
    }
    vlSelfRef.cpu_tb__DOT__reset = 0U;
    cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vcpu_tb___024root____VbeforeTrig_h42eb6e09__0(vlSelf, 
                                                      "@(posedge cpu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h42eb6e09__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge cpu_tb.clk)", 
                                                             "tb/cpu_tb.sv", 
                                                             44);
        cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/cpu_tb.sv", 
                                         45);
    if ((5U == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[1U])) {
        VL_WRITEF_NX("x1 = 5 PASSED\n",0);
    } else {
        VL_WRITEF_NX("x1 FAILED: %0d\n",1, '#',32,vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[1U]);
    }
    if ((5U == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[2U])) {
        VL_WRITEF_NX("x2 = 5 PASSED\n",0);
    } else {
        VL_WRITEF_NX("x2 FAILED: %0d\n",1, '#',32,vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[2U]);
    }
    if ((0U == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[5U])) {
        VL_WRITEF_NX("x5 SKIPPED PASSED\n",0);
    } else {
        VL_WRITEF_NX("x5 SKIPPED FAILED: %0d\n",1, '#',32,vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[5U]);
    }
    if ((0x0000002aU == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[6U])) {
        VL_WRITEF_NX("x6 = 42 PASSED\n",0);
    } else {
        VL_WRITEF_NX("x6 FAILED: %0d\n",1, '#',32,vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[6U]);
    }
    if ((0x00000014U == vlSelfRef.cpu_tb__DOT__dut__DOT__pc)) {
        VL_WRITEF_NX("FINAL PC PASSED\n",0);
    } else {
        VL_WRITEF_NX("FINAL PC FAILED: %0d\n",1, '#',32,vlSelfRef.cpu_tb__DOT__dut__DOT__pc);
    }
    VL_WRITEF_NX("BEQ CPU integration test completed.\n",0);
    VL_FINISH_MT("tb/cpu_tb.sv", 96, "");
    co_return;
}

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/cpu_tb.sv", 
                                             12);
        vlSelfRef.cpu_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__clk)));
    }
    co_return;
}

bool Vcpu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcpu_tb___024root___nba_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    IData/*31:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0;
    __VdlyVal__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0;
    __VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0;
    __VdlyVal__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0;
    __VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0 = 0;
    // Body
    __VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0 = 0U;
    if (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write) {
        __VdlyVal__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data2;
        __VdlyDim0__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0 
            = (0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result 
                              >> 2U));
        __VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0 = 1U;
    }
    if (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write) {
        if ((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3))) {
            __VdlyVal__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0 
                = ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg)
                    ? vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory
                   [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result 
                                    >> 2U))] : vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result);
            __VdlyDim0__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_3;
            __VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0 = 1U;
        }
    }
    vlSelfRef.cpu_tb__DOT__dut__DOT__pc = ((IData)(vlSelfRef.cpu_tb__DOT__reset)
                                            ? 0U : vlSelfRef.cpu_tb__DOT__dut__DOT__next_pc);
    if (__VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory[__VdlyDim0__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0] 
            = __VdlyVal__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory__v0;
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[__VdlyDim0__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0] 
            = __VdlyVal__cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers__v0;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (0x0000001fU 
                                                & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (0x0000001fU 
                                                & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x0000001fU 
                                                & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 7U));
    __VdfgRegularize_hebeb780c_0_6 = (0x000fffffU & 
                                      (- (IData)((vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                                  [
                                                  (0x000000ffU 
                                                   & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                  >> 0x0000001fU))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                                [(0x000000ffU 
                                                  & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                     >> 2U))] 
                                                >> 0x00000019U);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000007fU 
                                                & vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                                [(0x000000ffU 
                                                  & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                     >> 2U))]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (7U 
                                                & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000cU));
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data1 
        = (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers
           [vlSelfRef.__VdfgRegularize_hebeb780c_0_4] 
           & (- (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data2 
        = (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers
           [vlSelfRef.__VdfgRegularize_hebeb780c_0_5] 
           & (- (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
    if ((0x00000040U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
        if ((0x00000020U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            if ((0x00000010U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
            } else if ((8U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
            } else if ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
            } else if ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                if ((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                }
                if ((1U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    if ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 1U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 1U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 2U;
                    }
                } else {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                }
            } else {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
            }
        } else {
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
        }
    } else {
        if ((0x00000020U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            if ((0x00000010U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                if ((8U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                } else if ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                } else if ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    if ((1U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 1U;
                        if ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                            if ((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))) {
                                if ((0x20U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))) {
                                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                                }
                            }
                            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control 
                                = ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))
                                    ? 0U : ((0x20U 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))
                                             ? 1U : 4U));
                        } else {
                            if ((7U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                                if ((6U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                                }
                            }
                            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control 
                                = ((7U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                    ? 2U : ((6U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                             ? 3U : 4U));
                        }
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                        if ((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                            if ((7U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                                if ((6U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                                }
                            }
                        }
                    } else {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                    }
                } else {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                }
            } else {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write 
                    = ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                 >> 3U))) && ((1U & 
                                               (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))));
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = 0U;
                if ((8U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                } else if ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                } else if ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    if ((1U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 0U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 1U;
                    } else {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                    }
                } else {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                }
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src 
                    = ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                 >> 3U))) && ((1U & 
                                               (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))));
            }
            if ((8U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
            } else if ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
            } else if ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                if ((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                }
            } else {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
            }
        } else {
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = 0U;
            if ((0x00000010U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                if ((8U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                } else if ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                } else if ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    if ((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                    }
                    if ((1U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 0U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 0U;
                    } else {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                    }
                } else {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = 0U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                }
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write 
                    = ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                 >> 3U))) && ((1U & 
                                               (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))));
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src 
                    = ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                 >> 3U))) && ((1U & 
                                               (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))));
            } else {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg 
                    = ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                 >> 3U))) && ((1U & 
                                               (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                      >> 1U)) 
                                                  && ((1U 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                      && (2U 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))))));
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write 
                    = ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                 >> 3U))) && ((1U & 
                                               (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                      >> 1U)) 
                                                  && ((1U 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                      && (2U 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))))));
                if ((8U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                } else if ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                } else if ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    if ((1U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                        if ((2U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 0U;
                            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 0U;
                        } else {
                            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                        }
                    } else {
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                        vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                    }
                } else {
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = 4U;
                    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = 3U;
                }
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src 
                    = ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                 >> 3U))) && ((1U & 
                                               (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                      >> 1U)) 
                                                  && ((1U 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                      && (2U 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))))));
            }
        }
        if ((8U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
        } else if ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
        } else if ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            if ((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) {
                vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
            }
        } else {
            vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = 0U;
        }
    }
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate 
        = ((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel))
            ? ((__VdfgRegularize_hebeb780c_0_6 << 0x0000000cU) 
               | (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                  [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                   >> 2U))] >> 0x00000014U))
            : ((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel))
                ? ((__VdfgRegularize_hebeb780c_0_6 
                    << 0x0000000cU) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2) 
                                        << 5U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)))
                : (((__VdfgRegularize_hebeb780c_0_6 
                     << 0x0000000cU) | ((0x00000800U 
                                         & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                            [(0x000000ffU 
                                              & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            << 4U)) 
                                        | ((0x000007e0U 
                                            & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                               [(0x000000ffU 
                                                 & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                    >> 2U))] 
                                               >> 0x00000014U)) 
                                           | (0x0000001eU 
                                              & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory
                                                 [(0x000000ffU 
                                                   & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                 >> 7U))))) 
                   & (- (IData)((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel)))))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_b 
        = ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src)
            ? vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate
            : vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data2);
    vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result 
        = (((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control))
             ? ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control))
                 ? (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_b 
                    | vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data1)
                 : (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_b 
                    & vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data1))
             : ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control))
                 ? (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data1 
                    - vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_b)
                 : (vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_b 
                    + vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data1))) 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control) 
                                  >> 2U))))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__next_pc = (((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch) 
                                                 & (0U 
                                                    == vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result))
                                                 ? 
                                                (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                 + vlSelfRef.cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate)
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.cpu_tb__DOT__dut__DOT__pc));
}

void Vcpu_tb___024root___timing_ready(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___timing_ready\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h42eb6e09__0.ready("@(posedge cpu_tb.clk)");
    }
}

void Vcpu_tb___024root___timing_resume(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___timing_resume\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h42eb6e09__0.moveToResumeQueue(
                                                          "@(posedge cpu_tb.clk)");
    vlSelfRef.__VtrigSched_h42eb6e09__0.resume("@(posedge cpu_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcpu_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcpu_tb___024root___eval_phase__act(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__act\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.cpu_tb__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
            = vlSelfRef.cpu_tb__DOT__clk;
    }
    Vcpu_tb___024root___timing_ready(vlSelf);
    Vcpu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcpu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcpu_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vcpu_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_tb___024root___eval_phase__inact(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__inact\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/cpu_tb.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vcpu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcpu_tb___024root___eval_phase__nba(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__nba\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcpu_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vcpu_tb___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
        Vcpu_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcpu_tb___024root___eval(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/cpu_tb.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/cpu_tb.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vcpu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/cpu_tb.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vcpu_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vcpu_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcpu_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vcpu_tb___024root____VbeforeTrig_h42eb6e09__0(Vcpu_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root____VbeforeTrig_h42eb6e09__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.cpu_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelfRef.cpu_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h42eb6e09__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h42eb6e09__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vcpu_tb___024root___eval_debug_assertions(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_debug_assertions\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
