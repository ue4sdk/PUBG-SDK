// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.GetPlayerStateNum
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslCharacter*           ShooterCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TeamNum                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleSeatInfoWidget_C::GetPlayerStateNum(class ATslCharacter* ShooterCharacter, int* TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.GetPlayerStateNum");

	UVehicleSeatInfoWidget_C_GetPlayerStateNum_Params params;
	params.ShooterCharacter = ShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamNum != nullptr)
		*TeamNum = params.TeamNum;
}


// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.IsVisibleHandle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UVehicleSeatInfoWidget_C::IsVisibleHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.IsVisibleHandle");

	UVehicleSeatInfoWidget_C_IsVisibleHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.GetSeatColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UVehicleSeatInfoWidget_C::GetSeatColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.GetSeatColor");

	UVehicleSeatInfoWidget_C_GetSeatColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleSeatInfoWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.Tick");

	UVehicleSeatInfoWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.ExecuteUbergraph_VehicleSeatInfoWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVehicleSeatInfoWidget_C::ExecuteUbergraph_VehicleSeatInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.ExecuteUbergraph_VehicleSeatInfoWidget");

	UVehicleSeatInfoWidget_C_ExecuteUbergraph_VehicleSeatInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
