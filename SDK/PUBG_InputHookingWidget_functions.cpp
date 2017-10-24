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

// Function InputHookingWidget.InputHookingWidget_C.OnInputAxis
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInputHookingWidget_C::OnInputAxis(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputHookingWidget.InputHookingWidget_C.OnInputAxis");

	UInputHookingWidget_C_OnInputAxis_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputHookingWidget.InputHookingWidget_C.OnInputAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInputHookingWidget_C::OnInputAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputHookingWidget.InputHookingWidget_C.OnInputAction");

	UInputHookingWidget_C_OnInputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
