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

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.IsTeamMatch
struct UInGameMenuWidget_Gamepad_C_IsTeamMatch_Params
{
	bool                                               bIsTeamMatch;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.NavigateButton
struct UInGameMenuWidget_Gamepad_C_NavigateButton_Params
{
	class UWidget*                                     Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.OnFocusReceived
struct UInGameMenuWidget_Gamepad_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.IsPCOnly
struct UInGameMenuWidget_Gamepad_C_IsPCOnly_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.IsGamepadOnly
struct UInGameMenuWidget_Gamepad_C_IsGamepadOnly_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.GetVersionText_1
struct UInGameMenuWidget_Gamepad_C_GetVersionText_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.QuitGame
struct UInGameMenuWidget_Gamepad_C_QuitGame_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.GoToLobby
struct UInGameMenuWidget_Gamepad_C_GoToLobby_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Construct
struct UInGameMenuWidget_Gamepad_C_Construct_Params
{
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.OnHiddenWidget
struct UInGameMenuWidget_Gamepad_C_OnHiddenWidget_Params
{
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.CustomEvent_1
struct UInGameMenuWidget_Gamepad_C_CustomEvent_1_Params
{
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.CustomEvent_2
struct UInGameMenuWidget_Gamepad_C_CustomEvent_2_Params
{
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Tick
struct UInGameMenuWidget_Gamepad_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.OpenGamepadOption
struct UInGameMenuWidget_Gamepad_C_OpenGamepadOption_Params
{
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_392_OnNavigateKeyDown__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_392_OnNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__SETTINGS_K2Node_ComponentBoundEvent_401_OnNavigateKeyDown__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__SETTINGS_K2Node_ComponentBoundEvent_401_OnNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_411_OnNavigateKeyDown__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_411_OnNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_422_OnNavigateKeyDown__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_422_OnNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__SETTINGS_K2Node_ComponentBoundEvent_43_OnGamepadA__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__SETTINGS_K2Node_ComponentBoundEvent_43_OnGamepadA__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_52_OnGamepadA__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_52_OnGamepadA__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_70_OnGamepadA__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_70_OnGamepadA__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnGamepadA__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnGamepadA__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_0_OnGamepadB__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_0_OnGamepadB__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__SETTINGS_K2Node_ComponentBoundEvent_1_OnGamepadB__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__SETTINGS_K2Node_ComponentBoundEvent_1_OnGamepadB__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_2_OnGamepadB__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_2_OnGamepadB__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.ExecuteUbergraph_InGameMenuWidget_Gamepad
struct UInGameMenuWidget_Gamepad_C_ExecuteUbergraph_InGameMenuWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.TestDispatcher__DelegateSignature
struct UInGameMenuWidget_Gamepad_C_TestDispatcher__DelegateSignature_Params
{
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
