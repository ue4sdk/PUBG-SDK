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

// Function KeySttingsWidget.KeySttingsWidget_C.IsKeyUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Keyup                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeySttingsWidget_C::IsKeyUp(bool* Keyup)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.IsKeyUp");

	UKeySttingsWidget_C_IsKeyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keyup != nullptr)
		*Keyup = params.Keyup;
}


// Function KeySttingsWidget.KeySttingsWidget_C.IsEnableApply
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeySttingsWidget_C::IsEnableApply(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.IsEnableApply");

	UKeySttingsWidget_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function KeySttingsWidget.KeySttingsWidget_C.OnInputKey
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USingKeyDisplayWidget_C* SingleKeyDisplayWidget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            TslInputKey                    (CPF_Parm)

void UKeySttingsWidget_C::OnInputKey(class USingKeyDisplayWidget_C* SingleKeyDisplayWidget, const struct FTslInputKey& TslInputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.OnInputKey");

	UKeySttingsWidget_C_OnInputKey_Params params;
	params.SingleKeyDisplayWidget = SingleKeyDisplayWidget;
	params.TslInputKey = TslInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySttingsWidget.KeySttingsWidget_C.SettingsDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeySttingsWidget_C::SettingsDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.SettingsDefault");

	UKeySttingsWidget_C_SettingsDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySttingsWidget.KeySttingsWidget_C.IsChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bChanged                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeySttingsWidget_C::IsChanged(bool* bChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.IsChanged");

	UKeySttingsWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChanged != nullptr)
		*bChanged = params.bChanged;
}


// Function KeySttingsWidget.KeySttingsWidget_C.InitializeKeySettingsWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeySttingsWidget_C::InitializeKeySettingsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.InitializeKeySettingsWidget");

	UKeySttingsWidget_C_InitializeKeySettingsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySttingsWidget.KeySttingsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKeySttingsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.Construct");

	UKeySttingsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySttingsWidget.KeySttingsWidget_C.OnApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeySttingsWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.OnApply");

	UKeySttingsWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySttingsWidget.KeySttingsWidget_C.OnDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeySttingsWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.OnDefault");

	UKeySttingsWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySttingsWidget.KeySttingsWidget_C.OnReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeySttingsWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.OnReset");

	UKeySttingsWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySttingsWidget.KeySttingsWidget_C.ExecuteUbergraph_KeySttingsWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeySttingsWidget_C::ExecuteUbergraph_KeySttingsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.ExecuteUbergraph_KeySttingsWidget");

	UKeySttingsWidget_C_ExecuteUbergraph_KeySttingsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySttingsWidget.KeySttingsWidget_C.OnChangeKey__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USingKeyDisplayWidget_C* SingleKeyDisplayWidget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            TslInputKey                    (CPF_Parm)

void UKeySttingsWidget_C::OnChangeKey__DelegateSignature(class USingKeyDisplayWidget_C* SingleKeyDisplayWidget, const struct FTslInputKey& TslInputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySttingsWidget.KeySttingsWidget_C.OnChangeKey__DelegateSignature");

	UKeySttingsWidget_C_OnChangeKey__DelegateSignature_Params params;
	params.SingleKeyDisplayWidget = SingleKeyDisplayWidget;
	params.TslInputKey = TslInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
