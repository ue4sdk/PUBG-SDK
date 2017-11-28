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

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetGamePadHelpWidgetClass
struct UGeneralSettingWidget_Gamepad_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnKeyDown
struct UGeneralSettingWidget_Gamepad_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetCurrentFocusWidget
struct UGeneralSettingWidget_Gamepad_C_GetCurrentFocusWidget_Params
{
	class UWidget*                                     FocusWidget;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnFocusReceived
struct UGeneralSettingWidget_Gamepad_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsEnable_VideoCapture
struct UGeneralSettingWidget_Gamepad_C_IsEnable_VideoCapture_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.SettingDefault
struct UGeneralSettingWidget_Gamepad_C_SettingDefault_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsChanged
struct UGeneralSettingWidget_Gamepad_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetLanguageCultureName
struct UGeneralSettingWidget_Gamepad_C_GetLanguageCultureName_Params
{
	struct FString                                     CultureName;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.InitializeResolutionIWidget
struct UGeneralSettingWidget_Gamepad_C_InitializeResolutionIWidget_Params
{
	bool                                               bConstruct;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.Construct
struct UGeneralSettingWidget_Gamepad_C_Construct_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnApply
struct UGeneralSettingWidget_Gamepad_C_OnApply_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnDefault
struct UGeneralSettingWidget_Gamepad_C_OnDefault_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnReset
struct UGeneralSettingWidget_Gamepad_C_OnReset_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.ExecuteUbergraph_GeneralSettingWidget_Gamepad
struct UGeneralSettingWidget_Gamepad_C_ExecuteUbergraph_GeneralSettingWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
