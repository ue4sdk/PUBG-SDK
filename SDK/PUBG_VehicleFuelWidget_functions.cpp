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

// Function VehicleFuelWidget.VehicleFuelWidget_C.On_Oil_bg_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleFuelWidget_C::On_Oil_bg_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleFuelWidget.VehicleFuelWidget_C.On_Oil_bg_Prepass_1");

	UVehicleFuelWidget_C_On_Oil_bg_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleFuelWidget.VehicleFuelWidget_C.GetFuelGaugeBGColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UVehicleFuelWidget_C::GetFuelGaugeBGColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleFuelWidget.VehicleFuelWidget_C.GetFuelGaugeBGColor");

	UVehicleFuelWidget_C_GetFuelGaugeBGColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleFuelWidget.VehicleFuelWidget_C.GetVehicleFuelPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          FuelPercent                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleFuelWidget_C::GetVehicleFuelPercent(float* FuelPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleFuelWidget.VehicleFuelWidget_C.GetVehicleFuelPercent");

	UVehicleFuelWidget_C_GetVehicleFuelPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FuelPercent != nullptr)
		*FuelPercent = params.FuelPercent;
}


// Function VehicleFuelWidget.VehicleFuelWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVehicleFuelWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleFuelWidget.VehicleFuelWidget_C.Construct");

	UVehicleFuelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleFuelWidget.VehicleFuelWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleFuelWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleFuelWidget.VehicleFuelWidget_C.Tick");

	UVehicleFuelWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleFuelWidget.VehicleFuelWidget_C.ExecuteUbergraph_VehicleFuelWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleFuelWidget_C::ExecuteUbergraph_VehicleFuelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleFuelWidget.VehicleFuelWidget_C.ExecuteUbergraph_VehicleFuelWidget");

	UVehicleFuelWidget_C_ExecuteUbergraph_VehicleFuelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
