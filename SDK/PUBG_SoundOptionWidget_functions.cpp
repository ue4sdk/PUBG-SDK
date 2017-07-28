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

// Function SoundOptionWidget.SoundOptionWidget_C.IsKeyUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Keyup                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USoundOptionWidget_C::IsKeyUp(bool* Keyup)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundOptionWidget.SoundOptionWidget_C.IsKeyUp");

	USoundOptionWidget_C_IsKeyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keyup != nullptr)
		*Keyup = params.Keyup;
}


// Function SoundOptionWidget.SoundOptionWidget_C.IsChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bChanged                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USoundOptionWidget_C::IsChanged(bool* bChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundOptionWidget.SoundOptionWidget_C.IsChanged");

	USoundOptionWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChanged != nullptr)
		*bChanged = params.bChanged;
}


// Function SoundOptionWidget.SoundOptionWidget_C.OnApply
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USoundOptionWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundOptionWidget.SoundOptionWidget_C.OnApply");

	USoundOptionWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundOptionWidget.SoundOptionWidget_C.OnDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USoundOptionWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundOptionWidget.SoundOptionWidget_C.OnDefault");

	USoundOptionWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundOptionWidget.SoundOptionWidget_C.OnReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USoundOptionWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundOptionWidget.SoundOptionWidget_C.OnReset");

	USoundOptionWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundOptionWidget.SoundOptionWidget_C.ExecuteUbergraph_SoundOptionWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USoundOptionWidget_C::ExecuteUbergraph_SoundOptionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundOptionWidget.SoundOptionWidget_C.ExecuteUbergraph_SoundOptionWidget");

	USoundOptionWidget_C_ExecuteUbergraph_SoundOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
