// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BreatheBarWidget.BreatheBarWidget_C.GetBreathImageColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Ratio                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBreatheBarWidget_C::GetBreathImageColor(float Ratio, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreatheBarWidget.BreatheBarWidget_C.GetBreathImageColor");

	UBreatheBarWidget_C_GetBreathImageColor_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BreatheBarWidget.BreatheBarWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBreatheBarWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreatheBarWidget.BreatheBarWidget_C.OnPrepass_1");

	UBreatheBarWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreatheBarWidget.BreatheBarWidget_C.UpdateBreathGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBreatheBarWidget_C::UpdateBreathGauge(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreatheBarWidget.BreatheBarWidget_C.UpdateBreathGauge");

	UBreatheBarWidget_C_UpdateBreathGauge_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreatheBarWidget.BreatheBarWidget_C.GetBreathRatio
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Breath                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBreatheBarWidget_C::GetBreathRatio(float* Breath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreatheBarWidget.BreatheBarWidget_C.GetBreathRatio");

	UBreatheBarWidget_C_GetBreathRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Breath != nullptr)
		*Breath = params.Breath;
}


// Function BreatheBarWidget.BreatheBarWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBreatheBarWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreatheBarWidget.BreatheBarWidget_C.Construct");

	UBreatheBarWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreatheBarWidget.BreatheBarWidget_C.OnStartBuff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BuffName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStart                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBreatheBarWidget_C::OnStartBuff(const struct FName& BuffName, bool bStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreatheBarWidget.BreatheBarWidget_C.OnStartBuff");

	UBreatheBarWidget_C_OnStartBuff_Params params;
	params.BuffName = BuffName;
	params.bStart = bStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreatheBarWidget.BreatheBarWidget_C.ExecuteUbergraph_BreatheBarWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBreatheBarWidget_C::ExecuteUbergraph_BreatheBarWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreatheBarWidget.BreatheBarWidget_C.ExecuteUbergraph_BreatheBarWidget");

	UBreatheBarWidget_C_ExecuteUbergraph_BreatheBarWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
