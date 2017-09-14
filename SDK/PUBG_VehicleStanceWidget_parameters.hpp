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

// Function VehicleStanceWidget.VehicleStanceWidget_C.UpdateGauge
struct UVehicleStanceWidget_C_UpdateGauge_Params
{
};

// Function VehicleStanceWidget.VehicleStanceWidget_C.GetSpeedText
struct UVehicleStanceWidget_C_GetSpeedText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function VehicleStanceWidget.VehicleStanceWidget_C.TickVehicleStanceCheck
struct UVehicleStanceWidget_C_TickVehicleStanceCheck_Params
{
};

// Function VehicleStanceWidget.VehicleStanceWidget_C.GetFuelPercent
struct UVehicleStanceWidget_C_GetFuelPercent_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function VehicleStanceWidget.VehicleStanceWidget_C.GetHealthPercent
struct UVehicleStanceWidget_C_GetHealthPercent_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function VehicleStanceWidget.VehicleStanceWidget_C.Tick
struct UVehicleStanceWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleStanceWidget.VehicleStanceWidget_C.Construct
struct UVehicleStanceWidget_C_Construct_Params
{
};

// Function VehicleStanceWidget.VehicleStanceWidget_C.ExecuteUbergraph_VehicleStanceWidget
struct UVehicleStanceWidget_C_ExecuteUbergraph_VehicleStanceWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
