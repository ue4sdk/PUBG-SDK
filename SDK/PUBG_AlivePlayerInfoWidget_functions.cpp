// PLAYERUNKNOWN BattleGrounds () SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.GetGameStateBP
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlivePlayerInfoWidget_C::GetGameStateBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.GetGameStateBP");

	UAlivePlayerInfoWidget_C_GetGameStateBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_ColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UAlivePlayerInfoWidget_C::Get_SurvivorCount_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_ColorAndOpacity_1");

	UAlivePlayerInfoWidget_C_Get_SurvivorCount_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_AdditionalInfo_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAlivePlayerInfoWidget_C::Get_AdditionalInfo_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_AdditionalInfo_Text_1");

	UAlivePlayerInfoWidget_C_Get_AdditionalInfo_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.OnPrepass_AlivePlayerInfoVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlivePlayerInfoWidget_C::OnPrepass_AlivePlayerInfoVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.OnPrepass_AlivePlayerInfoVisibility");

	UAlivePlayerInfoWidget_C_OnPrepass_AlivePlayerInfoVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAlivePlayerInfoWidget_C::Get_SurvivorCount_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_Text_1");

	UAlivePlayerInfoWidget_C_Get_SurvivorCount_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_PlayerCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlivePlayerInfoWidget_C::Get_PlayerCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_PlayerCount");

	UAlivePlayerInfoWidget_C_Get_PlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAlivePlayerInfoWidget_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.GetText_1");

	UAlivePlayerInfoWidget_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UAlivePlayerInfoWidget_C::BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UAlivePlayerInfoWidget_C_BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlivePlayerInfoWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Tick");

	UAlivePlayerInfoWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UAlivePlayerInfoWidget_C::BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UAlivePlayerInfoWidget_C_BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlivePlayerInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Construct");

	UAlivePlayerInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.ExecuteUbergraph_AlivePlayerInfoWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAlivePlayerInfoWidget_C::ExecuteUbergraph_AlivePlayerInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.ExecuteUbergraph_AlivePlayerInfoWidget");

	UAlivePlayerInfoWidget_C_ExecuteUbergraph_AlivePlayerInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
