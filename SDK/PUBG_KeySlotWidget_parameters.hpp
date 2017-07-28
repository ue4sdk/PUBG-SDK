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

// Function KeySlotWidget.KeySlotWidget_C.OnKeyDown
struct UKeySlotWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.UpdateKey
struct UKeySlotWidget_C_UpdateKey_Params
{
};

// Function KeySlotWidget.KeySlotWidget_C.GetButtonSltateText
struct UKeySlotWidget_C_GetButtonSltateText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.OnMouseButtonDown
struct UKeySlotWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.OnMouseButtonUp_1
struct UKeySlotWidget_C_OnMouseButtonUp_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.OnMouseButtonDown_1
struct UKeySlotWidget_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.GetColorAndOpacity_2
struct UKeySlotWidget_C_GetColorAndOpacity_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function KeySlotWidget.KeySlotWidget_C.OnFocusReceived
struct UKeySlotWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.OnMouseButtonUp
struct UKeySlotWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.Keyup
struct UKeySlotWidget_C_Keyup_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function KeySlotWidget.KeySlotWidget_C.KeyDown
struct UKeySlotWidget_C_KeyDown_Params
{
	struct FKey                                        Input;                                                    // (CPF_Parm)
};

// Function KeySlotWidget.KeySlotWidget_C.UpdateKeyUp
struct UKeySlotWidget_C_UpdateKeyUp_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function KeySlotWidget.KeySlotWidget_C.UpdateKeyDown
struct UKeySlotWidget_C_UpdateKeyDown_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function KeySlotWidget.KeySlotWidget_C.IsInputKeyDown
struct UKeySlotWidget_C_IsInputKeyDown_Params
{
	bool                                               KeyDown;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeySlotWidget.KeySlotWidget_C.OnKeyUp
struct UKeySlotWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.GetColorAndOpacity_1
struct UKeySlotWidget_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.OnApplyKeyChanged
struct UKeySlotWidget_C_OnApplyKeyChanged_Params
{
};

// Function KeySlotWidget.KeySlotWidget_C.UpdateKeySlotWidget
struct UKeySlotWidget_C_UpdateKeySlotWidget_Params
{
};

// Function KeySlotWidget.KeySlotWidget_C.GetDownedKeyName
struct UKeySlotWidget_C_GetDownedKeyName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeySlotWidget.KeySlotWidget_C.Construct
struct UKeySlotWidget_C_Construct_Params
{
};

// Function KeySlotWidget.KeySlotWidget_C.OnFocusLost
struct UKeySlotWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
};

// Function KeySlotWidget.KeySlotWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature
struct UKeySlotWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function KeySlotWidget.KeySlotWidget_C.ExecuteUbergraph_KeySlotWidget
struct UKeySlotWidget_C_ExecuteUbergraph_KeySlotWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeySlotWidget.KeySlotWidget_C.OnSlotButtonClicked__DelegateSignature
struct UKeySlotWidget_C_OnSlotButtonClicked__DelegateSignature_Params
{
	TEnumAsByte<EKeyState>                             KeyState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                OriginKey;                                                // (CPF_Parm)
	struct FTslInputKey                                LastDownedKey;                                            // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
