// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"

void Vcpu_tb___024root___ctor_var_reset(Vcpu_tb___024root* vlSelf);

Vcpu_tb___024root::Vcpu_tb___024root(Vcpu_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcpu_tb___024root___ctor_var_reset(this);
}

void Vcpu_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcpu_tb___024root::~Vcpu_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
