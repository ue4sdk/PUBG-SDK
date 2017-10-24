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

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsChangeVideoCapture
struct UGeneralSettingWidget_C_IsChangeVideoCapture_Params
{
	bool                                               IsChange;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsEnable_VideoCapture
struct UGeneralSettingWidget_C_IsEnable_VideoCapture_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.ApplyMiniMapType
struct UGeneralSettingWidget_C_ApplyMiniMapType_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.SettingDefault
struct UGeneralSettingWidget_C_SettingDefault_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsChanged
struct UGeneralSettingWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.GetResolutionEnabled
struct UGeneralSettingWidget_C_GetResolutionEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.GetLanguageCultureName
struct UGeneralSettingWidget_C_GetLanguageCultureName_Params
{
	struct FString                                     CultureName;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.InitializeResolutionIWidget
struct UGeneralSettingWidget_C_InitializeResolutionIWidget_Params
{
	bool                                               bConstruct;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.Construct
struct UGeneralSettingWidget_C_Construct_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.OnApply
struct UGeneralSettingWidget_C_OnApply_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.OnDefault
struct UGeneralSettingWidget_C_OnDefault_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.OnReset
struct UGeneralSettingWidget_C_OnReset_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.ExecuteUbergraph_GeneralSettingWidget
struct UGeneralSettingWidget_C_ExecuteUbergraph_GeneralSettingWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
