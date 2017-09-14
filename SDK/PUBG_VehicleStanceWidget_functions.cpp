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

// Function VehicleStanceWidget.VehicleStanceWidget_C.UpdateGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVehicleStanceWidget_C::UpdateGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleStanceWidget.VehicleStanceWidget_C.UpdateGauge");

	UVehicleStanceWidget_C_UpdateGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleStanceWidget.VehicleStanceWidget_C.GetSpeedText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVehicleStanceWidget_C::GetSpeedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleStanceWidget.VehicleStanceWidget_C.GetSpeedText");

	UVehicleStanceWidget_C_GetSpeedText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleStanceWidget.VehicleStanceWidget_C.TickVehicleStanceCheck
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVehicleStanceWidget_C::TickVehicleStanceCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleStanceWidget.VehicleStanceWidget_C.TickVehicleStanceCheck");

	UVehicleStanceWidget_C_TickVehicleStanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleStanceWidget.VehicleStanceWidget_C.GetFuelPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVehicleStanceWidget_C::GetFuelPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleStanceWidget.VehicleStanceWidget_C.GetFuelPercent");

	UVehicleStanceWidget_C_GetFuelPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleStanceWidget.VehicleStanceWidget_C.GetHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVehicleStanceWidget_C::GetHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleStanceWidget.VehicleStanceWidget_C.GetHealthPercent");

	UVehicleStanceWidget_C_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleStanceWidget.VehicleStanceWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleStanceWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleStanceWidget.VehicleStanceWidget_C.Tick");

	UVehicleStanceWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleStanceWidget.VehicleStanceWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVehicleStanceWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleStanceWidget.VehicleStanceWidget_C.Construct");

	UVehicleStanceWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleStanceWidget.VehicleStanceWidget_C.ExecuteUbergraph_VehicleStanceWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleStanceWidget_C::ExecuteUbergraph_VehicleStanceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleStanceWidget.VehicleStanceWidget_C.ExecuteUbergraph_VehicleStanceWidget");

	UVehicleStanceWidget_C_ExecuteUbergraph_VehicleStanceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
