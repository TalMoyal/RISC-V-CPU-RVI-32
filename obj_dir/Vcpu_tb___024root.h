// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_tb.h for the primary calling header

#ifndef VERILATED_VCPU_TB___024ROOT_H_
#define VERILATED_VCPU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_tb__DOT__clk;
    CData/*0:0*/ cpu_tb__DOT__reset;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg;
    CData/*1:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel;
    CData/*2:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch;
    CData/*6:0*/ __VdfgRegularize_hebeb780c_0_0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_1;
    CData/*6:0*/ __VdfgRegularize_hebeb780c_0_2;
    CData/*4:0*/ __VdfgRegularize_hebeb780c_0_3;
    CData/*4:0*/ __VdfgRegularize_hebeb780c_0_4;
    CData/*4:0*/ __VdfgRegularize_hebeb780c_0_5;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__next_pc;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data1;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data2;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_b;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 256> cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers;
    VlUnpacked<IData/*31:0*/, 256> cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h42eb6e09__0;

    // INTERNAL VARIABLES
    Vcpu_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcpu_tb___024root(Vcpu_tb__Syms* symsp, const char* namep);
    ~Vcpu_tb___024root();
    VL_UNCOPYABLE(Vcpu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
