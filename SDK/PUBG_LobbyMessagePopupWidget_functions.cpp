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

// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULobbyMessagePopupWidget_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc5942859);

	ULobbyMessagePopupWidget_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.BndEvt__Button_108_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULobbyMessagePopupWidget_C::BndEvt__Button_108_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x714a541e);

	ULobbyMessagePopupWidget_C_BndEvt__Button_108_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.SetPopup
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPopupStyle                    PopupStyle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ULobbyMessagePopupWidget_C::SetPopup(EPopupStyle PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfd9ef7b1);

	ULobbyMessagePopupWidget_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.BndEvt__Button_OK_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULobbyMessagePopupWidget_C::BndEvt__Button_OK_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x842faad);

	ULobbyMessagePopupWidget_C_BndEvt__Button_OK_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULobbyMessagePopupWidget_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdec212ed);

	ULobbyMessagePopupWidget_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.ExecuteUbergraph_LobbyMessagePopupWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyMessagePopupWidget_C::ExecuteUbergraph_LobbyMessagePopupWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb49ecb60);

	ULobbyMessagePopupWidget_C_ExecuteUbergraph_LobbyMessagePopupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMessagePopupWidget.LobbyMessagePopupWidget_C.ButtonClick__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyMessagePopupWidget_C::ButtonClick__DelegateSignature(EPopupButtonID ButtonID)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4eef284);

	ULobbyMessagePopupWidget_C_ButtonClick__DelegateSignature_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
