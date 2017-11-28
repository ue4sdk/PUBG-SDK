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

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.OnKeyDown
struct UXboxGamepadHelpWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.OnMouseButtonDown_1
struct UXboxGamepadHelpWidget_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.SetState
struct UXboxGamepadHelpWidget_C_SetState_Params
{
	int                                                State;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.Construct
struct UXboxGamepadHelpWidget_C_Construct_Params
{
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.OnFocusLost
struct UXboxGamepadHelpWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.ExecuteUbergraph_XboxGamepadHelpWidget
struct UXboxGamepadHelpWidget_C_ExecuteUbergraph_XboxGamepadHelpWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
