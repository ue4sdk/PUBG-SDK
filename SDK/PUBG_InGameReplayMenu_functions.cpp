// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InGameReplayMenu.InGameReplayMenu_C.SetHUD
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslHUD*                 inHUD                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameReplayMenu_C::SetHUD(class ATslHUD* inHUD)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb5104d22);

	UInGameReplayMenu_C_SetHUD_Params params;
	params.inHUD = inHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.GotoReplayList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPopupButtonID>    ButtonID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameReplayMenu_C::GotoReplayList(TEnumAsByte<EPopupButtonID> ButtonID)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x81b24a21);

	UInGameReplayMenu_C_GotoReplayList_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.QuitReplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPopupButtonID>    ButtonID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameReplayMenu_C::QuitReplay(TEnumAsByte<EPopupButtonID> ButtonID)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcebe6335);

	UInGameReplayMenu_C_QuitReplay_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UInGameReplayMenu_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa2e5fc20);

	UInGameReplayMenu_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UInGameReplayMenu_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x48c562aa);

	UInGameReplayMenu_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UInGameReplayMenu_C::BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x47b6cfda);

	UInGameReplayMenu_C_BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.HidePopupWidgetForReplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInGameReplayMenu_C::HidePopupWidgetForReplay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x18bd1fb7);

	UInGameReplayMenu_C_HidePopupWidgetForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.OpenReplayListMap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInGameReplayMenu_C::OpenReplayListMap()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1d5f2c8e);

	UInGameReplayMenu_C_OpenReplayListMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.ExecuteUbergraph_InGameReplayMenu
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameReplayMenu_C::ExecuteUbergraph_InGameReplayMenu(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xce0335c6);

	UInGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
