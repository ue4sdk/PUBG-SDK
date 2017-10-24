#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MouseSettingsWidget.MouseSettingsWidget_C.IsEnableApply
struct UMouseSettingsWidget_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.initailizeMouseSettingsWidget
struct UMouseSettingsWidget_C_initailizeMouseSettingsWidget_Params
{
	bool                                               bIsDefaultSetting;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.IsChanged
struct UMouseSettingsWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.OnDefault
struct UMouseSettingsWidget_C_OnDefault_Params
{
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.OnApply
struct UMouseSettingsWidget_C_OnApply_Params
{
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.Construct
struct UMouseSettingsWidget_C_Construct_Params
{
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.OnReset
struct UMouseSettingsWidget_C_OnReset_Params
{
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.ExecuteUbergraph_MouseSettingsWidget
struct UMouseSettingsWidget_C_ExecuteUbergraph_MouseSettingsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
