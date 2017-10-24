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

// Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Delegate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDistanceSliderWidget_C::ChangeDistance_Delegate(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Delegate");

	UDistanceSliderWidget_C_ChangeDistance_Delegate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistanceFunc
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDistanceSliderWidget_C::SetDistanceFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistanceFunc");

	UDistanceSliderWidget_C_SetDistanceFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Slider
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDistanceSliderWidget_C::ChangeDistance_Slider(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Slider");

	UDistanceSliderWidget_C_ChangeDistance_Slider_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.SetValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Pos                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDistanceSliderWidget_C::SetValue(float Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.SetValue");

	UDistanceSliderWidget_C_SetValue_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDistanceSliderWidget_C::SetDistance(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistance");

	UDistanceSliderWidget_C_SetDistance_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.GetDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDistanceSliderWidget_C::GetDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.GetDistance");

	UDistanceSliderWidget_C_GetDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDistanceSliderWidget_C::BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature");

	UDistanceSliderWidget_C_BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDistanceSliderWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.Construct");

	UDistanceSliderWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.ExecuteUbergraph_DistanceSliderWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDistanceSliderWidget_C::ExecuteUbergraph_DistanceSliderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.ExecuteUbergraph_DistanceSliderWidget");

	UDistanceSliderWidget_C_ExecuteUbergraph_DistanceSliderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.ChagedDistance__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewDistance                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDistanceSliderWidget_C::ChagedDistance__DelegateSignature(float NewDistance, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.ChagedDistance__DelegateSignature");

	UDistanceSliderWidget_C_ChagedDistance__DelegateSignature_Params params;
	params.NewDistance = NewDistance;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
