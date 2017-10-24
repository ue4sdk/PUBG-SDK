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

// Function MainOptionWidget.MainOptionWidget_C.ClearOptionButtonsColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::ClearOptionButtonsColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.ClearOptionButtonsColors");

	UMainOptionWidget_C_ClearOptionButtonsColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.PopupButtonClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPopupButtonID>    ButtonID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainOptionWidget_C::PopupButtonClicked(TEnumAsByte<EPopupButtonID> ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.PopupButtonClicked");

	UMainOptionWidget_C_PopupButtonClicked_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.Get_ResetButton_bIsEnabled_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMainOptionWidget_C::Get_ResetButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.Get_ResetButton_bIsEnabled_1");

	UMainOptionWidget_C_Get_ResetButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainOptionWidget.MainOptionWidget_C.Get_OkButton_bIsEnabled_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMainOptionWidget_C::Get_OkButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.Get_OkButton_bIsEnabled_1");

	UMainOptionWidget_C_Get_OkButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainOptionWidget.MainOptionWidget_C.ShowMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_Parm)

void UMainOptionWidget_C::ShowMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.ShowMessage");

	UMainOptionWidget_C_ShowMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.OnReset");

	UMainOptionWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.OnDefault");

	UMainOptionWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.ChangeOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainOptionWidget_C::ChangeOption(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.ChangeOption");

	UMainOptionWidget_C_ChangeOption_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.OnApply");

	UMainOptionWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.CloseMainOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::CloseMainOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.CloseMainOption");

	UMainOptionWidget_C_CloseMainOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.IsApplyButtonEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMainOptionWidget_C::IsApplyButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.IsApplyButtonEnabled");

	UMainOptionWidget_C_IsApplyButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainOptionWidget.MainOptionWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMainOptionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.Construct");

	UMainOptionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature");

	UMainOptionWidget_C_BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature");

	UMainOptionWidget_C_BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature");

	UMainOptionWidget_C_BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature");

	UMainOptionWidget_C_BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature");

	UMainOptionWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature");

	UMainOptionWidget_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature");

	UMainOptionWidget_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature");

	UMainOptionWidget_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnHiddenWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::OnHiddenWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.OnHiddenWidget");

	UMainOptionWidget_C_OnHiddenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.XBoxOnOk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::XBoxOnOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.XBoxOnOk");

	UMainOptionWidget_C_XBoxOnOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMainOptionWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.Destruct");

	UMainOptionWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature");

	UMainOptionWidget_C_BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.ExecuteUbergraph_MainOptionWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainOptionWidget_C::ExecuteUbergraph_MainOptionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainOptionWidget.MainOptionWidget_C.ExecuteUbergraph_MainOptionWidget");

	UMainOptionWidget_C_ExecuteUbergraph_MainOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
