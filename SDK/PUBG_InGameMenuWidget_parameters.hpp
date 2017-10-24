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

// Function InGameMenuWidget.InGameMenuWidget_C.GetVersionText_1
struct UInGameMenuWidget_C_GetVersionText_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function InGameMenuWidget.InGameMenuWidget_C.QuitGame
struct UInGameMenuWidget_C_QuitGame_Params
{
	TEnumAsByte<EPopupButtonID>                        ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.GoToLobby
struct UInGameMenuWidget_C_GoToLobby_Params
{
	TEnumAsByte<EPopupButtonID>                        ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.Construct
struct UInGameMenuWidget_C_Construct_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.OnHiddenWidget
struct UInGameMenuWidget_C_OnHiddenWidget_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_1
struct UInGameMenuWidget_C_CustomEvent_1_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_2
struct UInGameMenuWidget_C_CustomEvent_2_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.Tick
struct UInGameMenuWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.ExecuteUbergraph_InGameMenuWidget
struct UInGameMenuWidget_C_ExecuteUbergraph_InGameMenuWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.TestDispatcher__DelegateSignature
struct UInGameMenuWidget_C_TestDispatcher__DelegateSignature_Params
{
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
