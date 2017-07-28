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

// Function BaseOptionWidget.BaseOptionWidget_C.IsKeyUp
struct UBaseOptionWidget_C_IsKeyUp_Params
{
	bool                                               Keyup;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BaseOptionWidget.BaseOptionWidget_C.IsEnableApply
struct UBaseOptionWidget_C_IsEnableApply_Params
{
	bool                                               bResult;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BaseOptionWidget.BaseOptionWidget_C.OnReset
struct UBaseOptionWidget_C_OnReset_Params
{
};

// Function BaseOptionWidget.BaseOptionWidget_C.IsChanged
struct UBaseOptionWidget_C_IsChanged_Params
{
	bool                                               bChanged;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BaseOptionWidget.BaseOptionWidget_C.OnDefault
struct UBaseOptionWidget_C_OnDefault_Params
{
};

// Function BaseOptionWidget.BaseOptionWidget_C.OnApply
struct UBaseOptionWidget_C_OnApply_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
