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

// Function MainLobbyHUD.MainLobbyHUD_C.GetNameTagWidget
struct UMainLobbyHUD_C_GetNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULobbyVoiceChat_C*                           Widget;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnDestroyCharacter
struct UMainLobbyHUD_C_OnDestroyCharacter_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnCreateCharacter
struct UMainLobbyHUD_C_OnCreateCharacter_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.On_NameTag_Prepass_1
struct UMainLobbyHUD_C_On_NameTag_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupByID
struct UMainLobbyHUD_C_CloseWebPopupByID_Params
{
	struct FString                                     WebPopupID;                                               // (CPF_Parm, CPF_ZeroConstructor)
};

// Function MainLobbyHUD.MainLobbyHUD_C.RemoveWebPopup
struct UMainLobbyHUD_C_RemoveWebPopup_Params
{
	class UWebPopup_C*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.AddWebPopup
struct UMainLobbyHUD_C_AddWebPopup_Params
{
	class UWebPopup_C*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.CanShowWebPopup
struct UMainLobbyHUD_C_CanShowWebPopup_Params
{
	struct FString                                     PopupId;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopupImpl
struct UMainLobbyHUD_C_ShowWebPopupImpl_Params
{
	struct FWebPopupParam                              Param;                                                    // (CPF_Parm)
};

// Function MainLobbyHUD.MainLobbyHUD_C.On_HorizontalBox_90_Prepass_1
struct UMainLobbyHUD_C_On_HorizontalBox_90_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnReload
struct UMainLobbyHUD_C_OnReload_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.GetMainCoherentWidget
struct UMainLobbyHUD_C_GetMainCoherentWidget_Params
{
	class UCoherentUIGTWidget*                         Browser;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_SystemMenuOrEscape
struct UMainLobbyHUD_C_OnKey_SystemMenuOrEscape_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.InitializeHUD
struct UMainLobbyHUD_C_InitializeHUD_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature
struct UMainLobbyHUD_C_BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
struct UMainLobbyHUD_C_BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
struct UMainLobbyHUD_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopup
struct UMainLobbyHUD_C_ShowWebPopup_Params
{
	struct FWebPopupParam                              Param;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function MainLobbyHUD.MainLobbyHUD_C.Construct
struct UMainLobbyHUD_C_Construct_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.ExecuteUbergraph_MainLobbyHUD
struct UMainLobbyHUD_C_ExecuteUbergraph_MainLobbyHUD_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
