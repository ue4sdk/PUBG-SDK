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

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup
struct UPopupWidgetForReplay_C_SetPopup_Params
{
	TEnumAsByte<EPopupStyle>                           PopupStyle;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Message;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
struct UPopupWidgetForReplay_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UPopupWidgetForReplay_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct
struct UPopupWidgetForReplay_C_Construct_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event_1
struct UPopupWidgetForReplay_C_Custom_Event_1_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct
struct UPopupWidgetForReplay_C_Destruct_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk
struct UPopupWidgetForReplay_C_XBoxOneOk_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay
struct UPopupWidgetForReplay_C_ExecuteUbergraph_PopupWidgetForReplay_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature
struct UPopupWidgetForReplay_C_HideMyself__DelegateSignature_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature
struct UPopupWidgetForReplay_C_ButtonClickDispatcher__DelegateSignature_Params
{
	TEnumAsByte<EPopupButtonID>                        NewParam;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
