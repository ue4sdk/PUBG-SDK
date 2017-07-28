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

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyDown
struct UKeyReceiverWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKey
struct UKeyReceiverWidget_C_UpdateKey_Params
{
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.GetButtonSltateText
struct UKeyReceiverWidget_C_GetButtonSltateText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown
struct UKeyReceiverWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp_1
struct UKeyReceiverWidget_C_OnMouseButtonUp_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown_1
struct UKeyReceiverWidget_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_2
struct UKeyReceiverWidget_C_GetColorAndOpacity_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusReceived
struct UKeyReceiverWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp
struct UKeyReceiverWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.Keyup
struct UKeyReceiverWidget_C_Keyup_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.KeyDown
struct UKeyReceiverWidget_C_KeyDown_Params
{
	struct FKey                                        Input;                                                    // (CPF_Parm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyUp
struct UKeyReceiverWidget_C_UpdateKeyUp_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyDown
struct UKeyReceiverWidget_C_UpdateKeyDown_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.IsInputKeyDown
struct UKeyReceiverWidget_C_IsInputKeyDown_Params
{
	bool                                               KeyDown;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyUp
struct UKeyReceiverWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_1
struct UKeyReceiverWidget_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnApplyKeyChanged
struct UKeyReceiverWidget_C_OnApplyKeyChanged_Params
{
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeySlotWidget
struct UKeyReceiverWidget_C_UpdateKeySlotWidget_Params
{
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.GetDownedKeyName
struct UKeyReceiverWidget_C_GetDownedKeyName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.Construct
struct UKeyReceiverWidget_C_Construct_Params
{
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusLost
struct UKeyReceiverWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature
struct UKeyReceiverWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.ExecuteUbergraph_KeyReceiverWidget
struct UKeyReceiverWidget_C_ExecuteUbergraph_KeyReceiverWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnSettingLastDownedKey__DelegateSignature
struct UKeyReceiverWidget_C_OnSettingLastDownedKey__DelegateSignature_Params
{
	struct FTslInputKey                                TslInputKey;                                              // (CPF_Parm)
};

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnSlotButtonClicked__DelegateSignature
struct UKeyReceiverWidget_C_OnSlotButtonClicked__DelegateSignature_Params
{
	TEnumAsByte<EKeyState>                             KeyState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                OriginKey;                                                // (CPF_Parm)
	struct FTslInputKey                                LastDownedKey;                                            // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
