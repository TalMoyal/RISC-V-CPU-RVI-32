// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"

void Vcpu_tb___024root___timing_ready(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_static(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_static\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelfRef.cpu_tb__DOT__clk;
    Vcpu_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_final(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_final\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_tb___024root___eval_phase__stl(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_settle(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_settle\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/cpu_tb.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcpu_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vcpu_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcpu_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vcpu_tb___024root___stl_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___stl_sequent__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    // Body
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

VL_ATTR_COLD bool Vcpu_tb___024root___eval_phase__stl(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__stl\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcpu_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vcpu_tb___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vcpu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge cpu_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root___ctor_var_reset(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___ctor_var_reset\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->cpu_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5729153853397715463ull);
    vlSelf->cpu_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4669460685312951478ull);
    vlSelf->cpu_tb__DOT__dut__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15446351515042717921ull);
    vlSelf->cpu_tb__DOT__dut__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1183876348006981362ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch_immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12025957238663727073ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_to_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2691757906926235096ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__imm_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11684173950583155512ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_control = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6379872212228968013ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13395227887017036264ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17010769594797030432ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9182177435091811065ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2936832318581978856ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15399324384816384893ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3576800221186607424ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5180896243211152754ull);
    vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15013992498951027161ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__data_memory_inst__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13437187910419094390ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_tb__DOT__dut__DOT__datapath_inst__DOT__register_file_inst__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7920954971107353623ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cpu_tb__DOT__dut__DOT__instruction_memory_inst__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4868279409304295596ull);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
