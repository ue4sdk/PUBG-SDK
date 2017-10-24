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

// Function NewCastingBarWidget.NewCastingBarWidget_C.On_CastingBarCanvas_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewCastingBarWidget_C::On_CastingBarCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.On_CastingBarCanvas_Prepass_1");

	UNewCastingBarWidget_C_On_CastingBarCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.GetRemainingCastTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UNewCastingBarWidget_C::GetRemainingCastTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.GetRemainingCastTime");

	UNewCastingBarWidget_C_GetRemainingCastTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingNameText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UNewCastingBarWidget_C::GetCastingNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingNameText");

	UNewCastingBarWidget_C_GetCastingNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingProgressBarPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UNewCastingBarWidget_C::GetCastingProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingProgressBarPercent");

	UNewCastingBarWidget_C_GetCastingProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewCastingBarWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.Construct");

	UNewCastingBarWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewCastingBarWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.Tick");

	UNewCastingBarWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewCastingBarWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.Destruct");

	UNewCastingBarWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.OnInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewCastingBarWidget_C::OnInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.OnInteract");

	UNewCastingBarWidget_C_OnInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.ExecuteUbergraph_NewCastingBarWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewCastingBarWidget_C::ExecuteUbergraph_NewCastingBarWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.ExecuteUbergraph_NewCastingBarWidget");

	UNewCastingBarWidget_C_ExecuteUbergraph_NewCastingBarWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
