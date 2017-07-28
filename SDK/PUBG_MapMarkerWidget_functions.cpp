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

// Function MapMarkerWidget.MapMarkerWidget_C.On_MarkerBorder_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapMarkerWidget_C::On_MarkerBorder_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerWidget.MapMarkerWidget_C.On_MarkerBorder_Prepass_1");

	UMapMarkerWidget_C_On_MarkerBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapMarkerWidget.MapMarkerWidget_C.PlayMarkerEmergingAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarkerWidget_C::PlayMarkerEmergingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerWidget.MapMarkerWidget_C.PlayMarkerEmergingAnimation");

	UMapMarkerWidget_C_PlayMarkerEmergingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapMarkerWidget.MapMarkerWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMapMarkerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerWidget.MapMarkerWidget_C.Construct");

	UMapMarkerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapMarkerWidget.MapMarkerWidget_C.ExecuteUbergraph_MapMarkerWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapMarkerWidget_C::ExecuteUbergraph_MapMarkerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerWidget.MapMarkerWidget_C.ExecuteUbergraph_MapMarkerWidget");

	UMapMarkerWidget_C_ExecuteUbergraph_MapMarkerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
