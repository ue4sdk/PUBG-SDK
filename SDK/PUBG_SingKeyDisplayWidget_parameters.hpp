#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.IsKeyUp
struct USingKeyDisplayWidget_C_IsKeyUp_Params
{
	bool                                               Keyup;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.UpdateKey
struct USingKeyDisplayWidget_C_UpdateKey_Params
{
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.IsChanged
struct USingKeyDisplayWidget_C_IsChanged_Params
{
	bool                                               bChanged;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.InitializeKeyDIsplayWIdget
struct USingKeyDisplayWidget_C_InitializeKeyDIsplayWIdget_Params
{
	bool                                               bDefault;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.Construct
struct USingKeyDisplayWidget_C_Construct_Params
{
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnApply
struct USingKeyDisplayWidget_C_OnApply_Params
{
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnDefault
struct USingKeyDisplayWidget_C_OnDefault_Params
{
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnReset
struct USingKeyDisplayWidget_C_OnReset_Params
{
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.BndEvt__KeySlotWidget_2_K2Node_ComponentBoundEvent_12_OnSettingLastDownedKey__DelegateSignature
struct USingKeyDisplayWidget_C_BndEvt__KeySlotWidget_2_K2Node_ComponentBoundEvent_12_OnSettingLastDownedKey__DelegateSignature_Params
{
	struct FTslInputKey                                TslInputKey;                                              // (CPF_Parm)
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.ExecuteUbergraph_SingKeyDisplayWidget
struct USingKeyDisplayWidget_C_ExecuteUbergraph_SingKeyDisplayWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SingKeyDisplayWidget.SingKeyDisplayWidget_C.OnInputedKey__DelegateSignature
struct USingKeyDisplayWidget_C_OnInputedKey__DelegateSignature_Params
{
	class USingKeyDisplayWidget_C*                     SingleKeyDisplayWidget;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                TslInputKey;                                              // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
