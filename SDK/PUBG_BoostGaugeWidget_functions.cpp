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

// Function BoostGaugeWidget.BoostGaugeWidget_C.GetSpectatorTslCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostGaugeWidget_C::GetSpectatorTslCharacter(class ATslCharacter** TslCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.GetSpectatorTslCharacter");

	UBoostGaugeWidget_C_GetSpectatorTslCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslCharacter != nullptr)
		*TslCharacter = params.TslCharacter;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostGaugeWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.OnPrepass_1");

	UBoostGaugeWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UBoostGaugeWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.GetVisibility_1");

	UBoostGaugeWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.GetBoostGaugeColorandOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UBoostGaugeWidget_C::GetBoostGaugeColorandOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.GetBoostGaugeColorandOpacity");

	UBoostGaugeWidget_C_GetBoostGaugeColorandOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.GetAlpha
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          BoostAlpha                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostGaugeWidget_C::GetAlpha(float* BoostAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.GetAlpha");

	UBoostGaugeWidget_C_GetAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoostAlpha != nullptr)
		*BoostAlpha = params.BoostAlpha;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.UpdageGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBoostGaugeWidget_C::UpdageGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.UpdageGauge");

	UBoostGaugeWidget_C_UpdageGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.GetBoostGaugePercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Percent                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostGaugeWidget_C::GetBoostGaugePercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.GetBoostGaugePercent");

	UBoostGaugeWidget_C_GetBoostGaugePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBoostGaugeWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.Construct");

	UBoostGaugeWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostGaugeWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.Tick");

	UBoostGaugeWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UBoostGaugeWidget_C::BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBoostGaugeWidget_C_BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostGaugeWidget.BoostGaugeWidget_C.ExecuteUbergraph_BoostGaugeWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostGaugeWidget_C::ExecuteUbergraph_BoostGaugeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostGaugeWidget.BoostGaugeWidget_C.ExecuteUbergraph_BoostGaugeWidget");

	UBoostGaugeWidget_C_ExecuteUbergraph_BoostGaugeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
