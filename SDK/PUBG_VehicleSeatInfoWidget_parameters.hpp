#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.39 Test Server) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.GetPlayerStateNum
struct UVehicleSeatInfoWidget_C_GetPlayerStateNum_Params
{
	class ATslCharacter*                               ShooterCharacter;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamNum;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.IsVisibleHandle
struct UVehicleSeatInfoWidget_C_IsVisibleHandle_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.GetSeatColor
struct UVehicleSeatInfoWidget_C_GetSeatColor_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.Tick
struct UVehicleSeatInfoWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.ExecuteUbergraph_VehicleSeatInfoWidget
struct UVehicleSeatInfoWidget_C_ExecuteUbergraph_VehicleSeatInfoWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
