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

// Function HudAlwaysOn.HudAlwaysOn_C.TeamInfoPrepass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudAlwaysOn_C::TeamInfoPrepass(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.TeamInfoPrepass");

	UHudAlwaysOn_C_TeamInfoPrepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudAlwaysOn.HudAlwaysOn_C.On_ReportBotton_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudAlwaysOn_C::On_ReportBotton_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.On_ReportBotton_Prepass_1");

	UHudAlwaysOn_C_On_ReportBotton_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudAlwaysOn.HudAlwaysOn_C.OnPrepass_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudAlwaysOn_C::OnPrepass_2(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.OnPrepass_2");

	UHudAlwaysOn_C_OnPrepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudAlwaysOn.HudAlwaysOn_C.On_CharacterCanvas_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudAlwaysOn_C::On_CharacterCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.On_CharacterCanvas_Prepass_1");

	UHudAlwaysOn_C_On_CharacterCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudAlwaysOn.HudAlwaysOn_C.GetVisibilityOnMatchState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHudAlwaysOn_C::GetVisibilityOnMatchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.GetVisibilityOnMatchState");

	UHudAlwaysOn_C_GetVisibilityOnMatchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudAlwaysOn.HudAlwaysOn_C.On_BlueZoneGpsWidget_RoundType_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudAlwaysOn_C::On_BlueZoneGpsWidget_RoundType_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.On_BlueZoneGpsWidget_RoundType_Prepass_1");

	UHudAlwaysOn_C_On_BlueZoneGpsWidget_RoundType_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudAlwaysOn.HudAlwaysOn_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudAlwaysOn_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.OnPrepass_1");

	UHudAlwaysOn_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudAlwaysOn.HudAlwaysOn_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHudAlwaysOn_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.Construct");

	UHudAlwaysOn_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudAlwaysOn.HudAlwaysOn_C.BndEvt__ReportBotton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UHudAlwaysOn_C::BndEvt__ReportBotton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.BndEvt__ReportBotton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UHudAlwaysOn_C_BndEvt__ReportBotton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudAlwaysOn.HudAlwaysOn_C.ExecuteUbergraph_HudAlwaysOn
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudAlwaysOn_C::ExecuteUbergraph_HudAlwaysOn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudAlwaysOn.HudAlwaysOn_C.ExecuteUbergraph_HudAlwaysOn");

	UHudAlwaysOn_C_ExecuteUbergraph_HudAlwaysOn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
