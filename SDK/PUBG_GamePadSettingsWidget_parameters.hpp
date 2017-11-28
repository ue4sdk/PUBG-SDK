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

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetGamePadHelpWidgetClass
struct UGamePadSettingsWidget_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnKeyDown
struct UGamePadSettingsWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnPrevOrNextFocusableWidget
struct UGamePadSettingsWidget_C_OnPrevOrNextFocusableWidget_Params
{
	bool*                                              bNext;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     FocusableWidget;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetCurrentFocusWidget
struct UGamePadSettingsWidget_C_GetCurrentFocusWidget_Params
{
	class UWidget*                                     FocusWidget;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetFocusableWidgetByIndex
struct UGamePadSettingsWidget_C_GetFocusableWidgetByIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.Test
struct UGamePadSettingsWidget_C_Test_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsEnableApply
struct UGamePadSettingsWidget_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.initailizeMouseSettingsWidget
struct UGamePadSettingsWidget_C_initailizeMouseSettingsWidget_Params
{
	bool                                               bIsDefaultSetting;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsChanged
struct UGamePadSettingsWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnDefault
struct UGamePadSettingsWidget_C_OnDefault_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnApply
struct UGamePadSettingsWidget_C_OnApply_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.Construct
struct UGamePadSettingsWidget_C_Construct_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnReset
struct UGamePadSettingsWidget_C_OnReset_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnFocusLost
struct UGamePadSettingsWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.ExecuteUbergraph_GamePadSettingsWidget
struct UGamePadSettingsWidget_C_ExecuteUbergraph_GamePadSettingsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
