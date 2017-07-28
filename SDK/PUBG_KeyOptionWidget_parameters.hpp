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

// Function KeyOptionWidget.KeyOptionWidget_C.IsKeyUp
struct UKeyOptionWidget_C_IsKeyUp_Params
{
	bool                                               Keyup;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeyOptionWidget.KeyOptionWidget_C.DuplicateKeyPopup
struct UKeyOptionWidget_C_DuplicateKeyPopup_Params
{
	TEnumAsByte<EPopupButtonID>                        PopupButtonId;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeyOptionWidget.KeyOptionWidget_C.OnChangeKey
struct UKeyOptionWidget_C_OnChangeKey_Params
{
	class USingKeyDisplayWidget_C*                     SingleKeyDisplayWidget;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                TslInputKey;                                              // (CPF_Parm)
};

// Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyAndMouseSetting
struct UKeyOptionWidget_C_InitializeKeyAndMouseSetting_Params
{
};

// Function KeyOptionWidget.KeyOptionWidget_C.IsEnableApply
struct UKeyOptionWidget_C_IsEnableApply_Params
{
	bool                                               bResult;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeyOptionWidget.KeyOptionWidget_C.IsChanged
struct UKeyOptionWidget_C_IsChanged_Params
{
	bool                                               bChanged;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyOption
struct UKeyOptionWidget_C_InitializeKeyOption_Params
{
};

// Function KeyOptionWidget.KeyOptionWidget_C.Construct
struct UKeyOptionWidget_C_Construct_Params
{
};

// Function KeyOptionWidget.KeyOptionWidget_C.OnDefault
struct UKeyOptionWidget_C_OnDefault_Params
{
};

// Function KeyOptionWidget.KeyOptionWidget_C.OnApply
struct UKeyOptionWidget_C_OnApply_Params
{
};

// Function KeyOptionWidget.KeyOptionWidget_C.OnReset
struct UKeyOptionWidget_C_OnReset_Params
{
};

// Function KeyOptionWidget.KeyOptionWidget_C.ExecuteUbergraph_KeyOptionWidget
struct UKeyOptionWidget_C_ExecuteUbergraph_KeyOptionWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
