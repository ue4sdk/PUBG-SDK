#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnMouseButtonDown_1
struct UBP_XboxTeamManageWidget_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.HandleButtonB
struct UBP_XboxTeamManageWidget_C_HandleButtonB_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnKeyDown
struct UBP_XboxTeamManageWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnFocusReceived
struct UBP_XboxTeamManageWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature
struct UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.ExecuteUbergraph_BP_XboxTeamManageWidget
struct UBP_XboxTeamManageWidget_C_ExecuteUbergraph_BP_XboxTeamManageWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
