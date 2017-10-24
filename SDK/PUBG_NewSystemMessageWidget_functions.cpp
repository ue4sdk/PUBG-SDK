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

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeIn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewSystemMessageWidget_C::StartFadeIn(class UWidgetAnimation* Animation, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeIn");

	UNewSystemMessageWidget_C_StartFadeIn_Params params;
	params.Animation = Animation;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeOutAnimation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewSystemMessageWidget_C::GetFadeOutAnimation(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeOutAnimation");

	UNewSystemMessageWidget_C_GetFadeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeInAnimation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewSystemMessageWidget_C::GetFadeInAnimation(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeInAnimation");

	UNewSystemMessageWidget_C_GetFadeInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.SetTextSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              TextBlock                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewSystemMessageWidget_C::SetTextSize(class UTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.SetTextSize");

	UNewSystemMessageWidget_C_SetTextSize_Params params;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewSystemMessageWidget_C::StartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeOut");

	UNewSystemMessageWidget_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeOutFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewSystemMessageWidget_C::OnFadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeOutFinished");

	UNewSystemMessageWidget_C_OnFadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeInFinished
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewSystemMessageWidget_C::OnFadeInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeInFinished");

	UNewSystemMessageWidget_C_OnFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.InitializeMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewSystemMessageWidget_C::InitializeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.InitializeMessage");

	UNewSystemMessageWidget_C_InitializeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewSystemMessageWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.Construct");

	UNewSystemMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.ExecuteUbergraph_NewSystemMessageWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewSystemMessageWidget_C::ExecuteUbergraph_NewSystemMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.ExecuteUbergraph_NewSystemMessageWidget");

	UNewSystemMessageWidget_C_ExecuteUbergraph_NewSystemMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.EndMessage__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNewSystemMessageWidget_C* SystemMessage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewSystemMessageWidget_C::EndMessage__DelegateSignature(class UNewSystemMessageWidget_C* SystemMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewSystemMessageWidget.NewSystemMessageWidget_C.EndMessage__DelegateSignature");

	UNewSystemMessageWidget_C_EndMessage__DelegateSignature_Params params;
	params.SystemMessage = SystemMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
