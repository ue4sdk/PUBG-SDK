// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KeyOptionWidget.KeyOptionWidget_C.IsKeyUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Keyup                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::IsKeyUp(bool* Keyup)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.IsKeyUp");

	UKeyOptionWidget_C_IsKeyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keyup != nullptr)
		*Keyup = params.Keyup;
}


// Function KeyOptionWidget.KeyOptionWidget_C.DuplicateKeyPopup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPopupButtonID>    PopupButtonId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::DuplicateKeyPopup(TEnumAsByte<EPopupButtonID> PopupButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.DuplicateKeyPopup");

	UKeyOptionWidget_C_DuplicateKeyPopup_Params params;
	params.PopupButtonId = PopupButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.OnChangeKey
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USingKeyDisplayWidget_C* SingleKeyDisplayWidget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            TslInputKey                    (CPF_Parm)

void UKeyOptionWidget_C::OnChangeKey(class USingKeyDisplayWidget_C* SingleKeyDisplayWidget, const struct FTslInputKey& TslInputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.OnChangeKey");

	UKeyOptionWidget_C_OnChangeKey_Params params;
	params.SingleKeyDisplayWidget = SingleKeyDisplayWidget;
	params.TslInputKey = TslInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyAndMouseSetting
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::InitializeKeyAndMouseSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyAndMouseSetting");

	UKeyOptionWidget_C_InitializeKeyAndMouseSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.IsEnableApply
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::IsEnableApply(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.IsEnableApply");

	UKeyOptionWidget_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function KeyOptionWidget.KeyOptionWidget_C.IsChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bChanged                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::IsChanged(bool* bChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.IsChanged");

	UKeyOptionWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChanged != nullptr)
		*bChanged = params.bChanged;
}


// Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::InitializeKeyOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.InitializeKeyOption");

	UKeyOptionWidget_C_InitializeKeyOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.Construct");

	UKeyOptionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.OnDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.OnDefault");

	UKeyOptionWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.OnApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.OnApply");

	UKeyOptionWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.OnReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyOptionWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.OnReset");

	UKeyOptionWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyOptionWidget.KeyOptionWidget_C.ExecuteUbergraph_KeyOptionWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyOptionWidget_C::ExecuteUbergraph_KeyOptionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyOptionWidget.KeyOptionWidget_C.ExecuteUbergraph_KeyOptionWidget");

	UKeyOptionWidget_C_ExecuteUbergraph_KeyOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
