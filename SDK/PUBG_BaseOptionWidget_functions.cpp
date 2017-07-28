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

// Function BaseOptionWidget.BaseOptionWidget_C.IsKeyUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Keyup                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseOptionWidget_C::IsKeyUp(bool* Keyup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.IsKeyUp");

	UBaseOptionWidget_C_IsKeyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keyup != nullptr)
		*Keyup = params.Keyup;
}


// Function BaseOptionWidget.BaseOptionWidget_C.IsEnableApply
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseOptionWidget_C::IsEnableApply(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.IsEnableApply");

	UBaseOptionWidget_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BaseOptionWidget.BaseOptionWidget_C.OnReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseOptionWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.OnReset");

	UBaseOptionWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseOptionWidget.BaseOptionWidget_C.IsChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bChanged                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseOptionWidget_C::IsChanged(bool* bChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.IsChanged");

	UBaseOptionWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChanged != nullptr)
		*bChanged = params.bChanged;
}


// Function BaseOptionWidget.BaseOptionWidget_C.OnDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseOptionWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.OnDefault");

	UBaseOptionWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseOptionWidget.BaseOptionWidget_C.OnApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseOptionWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.OnApply");

	UBaseOptionWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
