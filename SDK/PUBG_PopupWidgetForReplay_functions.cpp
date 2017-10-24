// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPopupStyle>       PopupStyle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPopupWidgetForReplay_C::SetPopup(TEnumAsByte<EPopupStyle> PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup");

	UPopupWidgetForReplay_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopupWidgetForReplay_C::BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");

	UPopupWidgetForReplay_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopupWidgetForReplay_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	UPopupWidgetForReplay_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupWidgetForReplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct");

	UPopupWidgetForReplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupWidgetForReplay_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event_1");

	UPopupWidgetForReplay_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupWidgetForReplay_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct");

	UPopupWidgetForReplay_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupWidgetForReplay_C::XBoxOneOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk");

	UPopupWidgetForReplay_C_XBoxOneOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupWidgetForReplay_C::ExecuteUbergraph_PopupWidgetForReplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay");

	UPopupWidgetForReplay_C_ExecuteUbergraph_PopupWidgetForReplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupWidgetForReplay_C::HideMyself__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature");

	UPopupWidgetForReplay_C_HideMyself__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPopupButtonID>    NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupWidgetForReplay_C::ButtonClickDispatcher__DelegateSignature(TEnumAsByte<EPopupButtonID> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature");

	UPopupWidgetForReplay_C_ButtonClickDispatcher__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
