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

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.OnFocusReceived
struct UPopupWidget_Gamepad_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.SetPopup
struct UPopupWidget_Gamepad_C_SetPopup_Params
{
	EPopupStyle                                        PopupStyle;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Message;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
struct UPopupWidget_Gamepad_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UPopupWidget_Gamepad_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Construct
struct UPopupWidget_Gamepad_C_Construct_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Custom Event_1
struct UPopupWidget_Gamepad_C_Custom_Event_1_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Destruct
struct UPopupWidget_Gamepad_C_Destruct_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.XBoxOneOk
struct UPopupWidget_Gamepad_C_XBoxOneOk_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Custom Event_2
struct UPopupWidget_Gamepad_C_Custom_Event_2_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.XBoxOneCancel
struct UPopupWidget_Gamepad_C_XBoxOneCancel_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__OK_K2Node_ComponentBoundEvent_199_OnGamepadA__DelegateSignature
struct UPopupWidget_Gamepad_C_BndEvt__OK_K2Node_ComponentBoundEvent_199_OnGamepadA__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__CANCEL_K2Node_ComponentBoundEvent_216_OnGamepadA__DelegateSignature
struct UPopupWidget_Gamepad_C_BndEvt__CANCEL_K2Node_ComponentBoundEvent_216_OnGamepadA__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__OK_K2Node_ComponentBoundEvent_235_OnNavigateKeyDown__DelegateSignature
struct UPopupWidget_Gamepad_C_BndEvt__OK_K2Node_ComponentBoundEvent_235_OnNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__CANCEL_K2Node_ComponentBoundEvent_252_OnNavigateKeyDown__DelegateSignature
struct UPopupWidget_Gamepad_C_BndEvt__CANCEL_K2Node_ComponentBoundEvent_252_OnNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.ExecuteUbergraph_PopupWidget_Gamepad
struct UPopupWidget_Gamepad_C_ExecuteUbergraph_PopupWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.ButtonClickDispatcher__DelegateSignature
struct UPopupWidget_Gamepad_C_ButtonClickDispatcher__DelegateSignature_Params
{
	EPopupButtonID                                     NewParam;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
