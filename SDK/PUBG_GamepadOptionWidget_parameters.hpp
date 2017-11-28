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

// Function GamepadOptionWidget.GamepadOptionWidget_C.OnPrepass_LTorRTVisibility
struct UGamepadOptionWidget_C_OnPrepass_LTorRTVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.OnKeyDown
struct UGamepadOptionWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.On_GuideLayer_Prepass_1
struct UGamepadOptionWidget_C_On_GuideLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.On_CONTROL_Prepass_1
struct UGamepadOptionWidget_C_On_CONTROL_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.PrevOrNextPage
struct UGamepadOptionWidget_C_PrevOrNextPage_Params
{
	bool                                               bNext;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEventReply                                 Reply;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.OnFocusReceived
struct UGamepadOptionWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.ProcessKeyDown
struct UGamepadOptionWidget_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
	struct FEventReply                                 Replay;                                                   // (CPF_Parm, CPF_OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
