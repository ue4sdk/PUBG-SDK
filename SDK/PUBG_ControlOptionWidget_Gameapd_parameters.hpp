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

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetGamePadHelpWidgetClass
struct UControlOptionWidget_Gameapd_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnKeyDown
struct UControlOptionWidget_Gameapd_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetCurrentFocusWidget
struct UControlOptionWidget_Gameapd_C_GetCurrentFocusWidget_Params
{
	class UWidget*                                     FocusWidget;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.IsChanged
struct UControlOptionWidget_Gameapd_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnPrevOrNextFocusableWidget
struct UControlOptionWidget_Gameapd_C_OnPrevOrNextFocusableWidget_Params
{
	bool*                                              bNext;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     FocusableWidget;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnFocusReceived
struct UControlOptionWidget_Gameapd_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.Construct
struct UControlOptionWidget_Gameapd_C_Construct_Params
{
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnDefault
struct UControlOptionWidget_Gameapd_C_OnDefault_Params
{
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnReset
struct UControlOptionWidget_Gameapd_C_OnReset_Params
{
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnApply
struct UControlOptionWidget_Gameapd_C_OnApply_Params
{
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.ExecuteUbergraph_ControlOptionWidget_Gameapd
struct UControlOptionWidget_Gameapd_C_ExecuteUbergraph_ControlOptionWidget_Gameapd_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
