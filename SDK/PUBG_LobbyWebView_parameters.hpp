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

// Function LobbyWebView.LobbyWebView_C.WebViewBroadcast
struct ULobbyWebView_C_WebViewBroadcast_Params
{
	struct FString                                     EventName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Parameter;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function LobbyWebView.LobbyWebView_C.WebViewUnload
struct ULobbyWebView_C_WebViewUnload_Params
{
	int                                                ViewIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.WebViewShow
struct ULobbyWebView_C_WebViewShow_Params
{
	int                                                VeiwIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Visible;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb
struct ULobbyWebView_C_HandleEventFromWeb_Params
{
	class UCoherentUIGTJSPayload*                      payload;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.WebViewInputFocus
struct ULobbyWebView_C_WebViewInputFocus_Params
{
	int                                                ViewIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.WebViewLoad
struct ULobbyWebView_C_WebViewLoad_Params
{
	int                                                ViewIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature
struct ULobbyWebView_C_BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature_Params
{
};

// Function LobbyWebView.LobbyWebView_C.J_1
struct ULobbyWebView_C_J_1_Params
{
	class UCoherentUIGTJSPayload*                      payload;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_1_K2Node_ComponentBoundEvent_545_UIGTReadyForBindingsSignature__DelegateSignature
struct ULobbyWebView_C_BndEvt__WebView_1_K2Node_ComponentBoundEvent_545_UIGTReadyForBindingsSignature__DelegateSignature_Params
{
};

// Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_2_K2Node_ComponentBoundEvent_548_UIGTReadyForBindingsSignature__DelegateSignature
struct ULobbyWebView_C_BndEvt__WebView_2_K2Node_ComponentBoundEvent_548_UIGTReadyForBindingsSignature__DelegateSignature_Params
{
};

// Function LobbyWebView.LobbyWebView_C.Construct
struct ULobbyWebView_C_Construct_Params
{
};

// Function LobbyWebView.LobbyWebView_C.Tick
struct ULobbyWebView_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.Destruct
struct ULobbyWebView_C_Destruct_Params
{
};

// Function LobbyWebView.LobbyWebView_C.PressAKey
struct ULobbyWebView_C_PressAKey_Params
{
};

// Function LobbyWebView.LobbyWebView_C.PressBKey
struct ULobbyWebView_C_PressBKey_Params
{
};

// Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView
struct ULobbyWebView_C_ExecuteUbergraph_LobbyWebView_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
