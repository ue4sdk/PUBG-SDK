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

// Function KeySttingsWidget.KeySttingsWidget_C.IsKeyUp
struct UKeySttingsWidget_C_IsKeyUp_Params
{
	bool                                               Keyup;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeySttingsWidget.KeySttingsWidget_C.IsEnableApply
struct UKeySttingsWidget_C_IsEnableApply_Params
{
	bool                                               bResult;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeySttingsWidget.KeySttingsWidget_C.OnInputKey
struct UKeySttingsWidget_C_OnInputKey_Params
{
	class USingKeyDisplayWidget_C*                     SingleKeyDisplayWidget;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                TslInputKey;                                              // (CPF_Parm)
};

// Function KeySttingsWidget.KeySttingsWidget_C.SettingsDefault
struct UKeySttingsWidget_C_SettingsDefault_Params
{
};

// Function KeySttingsWidget.KeySttingsWidget_C.IsChanged
struct UKeySttingsWidget_C_IsChanged_Params
{
	bool                                               bChanged;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeySttingsWidget.KeySttingsWidget_C.InitializeKeySettingsWidget
struct UKeySttingsWidget_C_InitializeKeySettingsWidget_Params
{
};

// Function KeySttingsWidget.KeySttingsWidget_C.Construct
struct UKeySttingsWidget_C_Construct_Params
{
};

// Function KeySttingsWidget.KeySttingsWidget_C.OnApply
struct UKeySttingsWidget_C_OnApply_Params
{
};

// Function KeySttingsWidget.KeySttingsWidget_C.OnDefault
struct UKeySttingsWidget_C_OnDefault_Params
{
};

// Function KeySttingsWidget.KeySttingsWidget_C.OnReset
struct UKeySttingsWidget_C_OnReset_Params
{
};

// Function KeySttingsWidget.KeySttingsWidget_C.ExecuteUbergraph_KeySttingsWidget
struct UKeySttingsWidget_C_ExecuteUbergraph_KeySttingsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeySttingsWidget.KeySttingsWidget_C.OnChangeKey__DelegateSignature
struct UKeySttingsWidget_C_OnChangeKey__DelegateSignature_Params
{
	class USingKeyDisplayWidget_C*                     SingleKeyDisplayWidget;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                TslInputKey;                                              // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
