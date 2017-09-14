#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VehicleFuelWidget.VehicleFuelWidget_C.On_Oil_bg_Prepass_1
struct UVehicleFuelWidget_C_On_Oil_bg_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleFuelWidget.VehicleFuelWidget_C.GetFuelGaugeBGColor
struct UVehicleFuelWidget_C_GetFuelGaugeBGColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function VehicleFuelWidget.VehicleFuelWidget_C.GetVehicleFuelPercent
struct UVehicleFuelWidget_C_GetVehicleFuelPercent_Params
{
	float                                              FuelPercent;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleFuelWidget.VehicleFuelWidget_C.Construct
struct UVehicleFuelWidget_C_Construct_Params
{
};

// Function VehicleFuelWidget.VehicleFuelWidget_C.Tick
struct UVehicleFuelWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleFuelWidget.VehicleFuelWidget_C.ExecuteUbergraph_VehicleFuelWidget
struct UVehicleFuelWidget_C_ExecuteUbergraph_VehicleFuelWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
