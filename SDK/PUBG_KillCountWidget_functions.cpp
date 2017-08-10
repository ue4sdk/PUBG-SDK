// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.39 Test Server) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillCountWidget.KillCountWidget_C.OnPrepress_KillCountVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillCountWidget_C::OnPrepress_KillCountVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.OnPrepress_KillCountVisibility");

	UKillCountWidget_C_OnPrepress_KillCountVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCountWidget.KillCountWidget_C.Get_AdditionalInfo_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UKillCountWidget_C::Get_AdditionalInfo_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.Get_AdditionalInfo_Text_1");

	UKillCountWidget_C_Get_AdditionalInfo_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillCountWidget.KillCountWidget_C.Get_KillCount_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UKillCountWidget_C::Get_KillCount_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.Get_KillCount_Text_1");

	UKillCountWidget_C_Get_KillCount_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillCountWidget.KillCountWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKillCountWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.Construct");

	UKillCountWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCountWidget.KillCountWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillCountWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.Tick");

	UKillCountWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCountWidget.KillCountWidget_C.BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UKillCountWidget_C::BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UKillCountWidget_C_BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCountWidget.KillCountWidget_C.BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UKillCountWidget_C::BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UKillCountWidget_C_BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCountWidget.KillCountWidget_C.KillCountHide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillCountWidget_C::KillCountHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.KillCountHide");

	UKillCountWidget_C_KillCountHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCountWidget.KillCountWidget_C.UpdateKillCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            KillCount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillCountWidget_C::UpdateKillCount(int KillCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.UpdateKillCount");

	UKillCountWidget_C_UpdateKillCount_Params params;
	params.KillCount = KillCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCountWidget.KillCountWidget_C.ExecuteUbergraph_KillCountWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillCountWidget_C::ExecuteUbergraph_KillCountWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCountWidget.KillCountWidget_C.ExecuteUbergraph_KillCountWidget");

	UKillCountWidget_C_ExecuteUbergraph_KillCountWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
