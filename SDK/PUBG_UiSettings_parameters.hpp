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

// Function UiSettings.UiSettings_C.GetSelectUseCharacterCapture
struct UUiSettings_C_GetSelectUseCharacterCapture_Params
{
	bool                                               UseCharacterCapture;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UiSettings.UiSettings_C.ApplyByCurrentSelectedSettings
struct UUiSettings_C_ApplyByCurrentSelectedSettings_Params
{
};

// Function UiSettings.UiSettings_C.IsChanged
struct UUiSettings_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UiSettings.UiSettings_C.IsEnableApply
struct UUiSettings_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UiSettings.UiSettings_C.SetToDefault
struct UUiSettings_C_SetToDefault_Params
{
};

// Function UiSettings.UiSettings_C.InitUiSetting
struct UUiSettings_C_InitUiSetting_Params
{
};

// Function UiSettings.UiSettings_C.OnDefault
struct UUiSettings_C_OnDefault_Params
{
};

// Function UiSettings.UiSettings_C.Construct
struct UUiSettings_C_Construct_Params
{
};

// Function UiSettings.UiSettings_C.OnApply
struct UUiSettings_C_OnApply_Params
{
};

// Function UiSettings.UiSettings_C.ExecuteUbergraph_UiSettings
struct UUiSettings_C_ExecuteUbergraph_UiSettings_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
