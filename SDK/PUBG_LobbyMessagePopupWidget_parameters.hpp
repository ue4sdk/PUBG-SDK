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

// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
struct ULobbyMessagePopupWidget_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.BndEvt__Button_108_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature
struct ULobbyMessagePopupWidget_C_BndEvt__Button_108_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.SetPopup
struct ULobbyMessagePopupWidget_C_SetPopup_Params
{
	EPopupStyle                                        PopupStyle;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Message;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.BndEvt__Button_OK_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
struct ULobbyMessagePopupWidget_C_BndEvt__Button_OK_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
struct ULobbyMessagePopupWidget_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.ExecuteUbergraph_LobbyMessagePopupWidget
struct ULobbyMessagePopupWidget_C_ExecuteUbergraph_LobbyMessagePopupWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.ButtonClick__DelegateSignature
struct ULobbyMessagePopupWidget_C_ButtonClick__DelegateSignature_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
