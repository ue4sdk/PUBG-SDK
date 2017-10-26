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

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.On_Background_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslHealthGaugeBpWidget_C::On_Background_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc1f489ba);

	UTslHealthGaugeBpWidget_C_On_Background_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_ColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UTslHealthGaugeBpWidget_C::Get_Background_ColorAndOpacity_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x463357e);

	UTslHealthGaugeBpWidget_C_Get_Background_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UTslHealthGaugeBpWidget_C::Get_Background_Visibility_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb6931007);

	UTslHealthGaugeBpWidget_C_Get_Background_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateWaning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTslHealthGaugeBpWidget_C::UpdateWaning()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc7a83176);

	UTslHealthGaugeBpWidget_C_UpdateWaning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateColorGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTslHealthGaugeBpWidget_C::UpdateColorGauge()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf2ce4712);

	UTslHealthGaugeBpWidget_C_UpdateColorGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetMoveCurve
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCurveFloat*             NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslHealthGaugeBpWidget_C::GetMoveCurve(class UCurveFloat** NewParam)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8c575f4f);

	UTslHealthGaugeBpWidget_C_GetMoveCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.SetHealth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewDestination                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bGroggy                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslHealthGaugeBpWidget_C::SetHealth(float NewDestination, bool bGroggy)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x338c05bb);

	UTslHealthGaugeBpWidget_C_SetHealth_Params params;
	params.NewDestination = NewDestination;
	params.bGroggy = bGroggy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.MoveTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTslHealthGaugeBpWidget_C::MoveTick()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x85e1c0bf);

	UTslHealthGaugeBpWidget_C_MoveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetHealthGaugeColorOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslHealthGaugeBpWidget_C::GetHealthGaugeColorOpacity(struct FLinearColor* Color)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9a7f7764);

	UTslHealthGaugeBpWidget_C_GetHealthGaugeColorOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTslHealthGaugeBpWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x19fb83c2);

	UTslHealthGaugeBpWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslHealthGaugeBpWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xba857c00);

	UTslHealthGaugeBpWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.StartMove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTslHealthGaugeBpWidget_C::StartMove()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xff7d7956);

	UTslHealthGaugeBpWidget_C_StartMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.ExecuteUbergraph_TslHealthGaugeBpWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslHealthGaugeBpWidget_C::ExecuteUbergraph_TslHealthGaugeBpWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x13abfd0d);

	UTslHealthGaugeBpWidget_C_ExecuteUbergraph_TslHealthGaugeBpWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
