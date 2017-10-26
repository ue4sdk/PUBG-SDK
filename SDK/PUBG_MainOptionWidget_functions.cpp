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

// Function MainOptionWidget.MainOptionWidget_C.ClearOptionButtonsColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::ClearOptionButtonsColors()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x21662808);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x143f8ae);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdafe4da1);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1ff86cdc);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3c3c6fb9);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x546c1ea5);

	UMainOptionWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::OnDefault()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x63bd64f);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe33192bc);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9a382af4);

	UMainOptionWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.CloseMainOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::CloseMainOption()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x76c4703d);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5af8e440);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x28787d1e);

	UMainOptionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa8da38b9);

	UMainOptionWidget_C_BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9eec78cc);

	UMainOptionWidget_C_BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x62f34771);

	UMainOptionWidget_C_BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4d7ef758);

	UMainOptionWidget_C_BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x59461469);

	UMainOptionWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x46dc7e0f);

	UMainOptionWidget_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf5f02226);

	UMainOptionWidget_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd250f5dd);

	UMainOptionWidget_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.OnHiddenWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::OnHiddenWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa36d5390);

	UMainOptionWidget_C_OnHiddenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.XBoxOnOk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainOptionWidget_C::XBoxOnOk()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3936a7b1);

	UMainOptionWidget_C_XBoxOnOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMainOptionWidget_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6842735d);

	UMainOptionWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainOptionWidget_C::BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcae8ac82);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3283fc03);

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
