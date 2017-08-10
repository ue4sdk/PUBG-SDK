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

// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.GetWheelColorAndOpacity
struct UVehicleWheelInfoWidget_C_GetWheelColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.GetWheelLifePercent
struct UVehicleWheelInfoWidget_C_GetWheelLifePercent_Params
{
	float                                              LifePercent;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.Get_PunctureImage_Visibility
struct UVehicleWheelInfoWidget_C_Get_PunctureImage_Visibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.GetBrush_1
struct UVehicleWheelInfoWidget_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.Tick
struct UVehicleWheelInfoWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.ExecuteUbergraph_VehicleWheelInfoWidget
struct UVehicleWheelInfoWidget_C_ExecuteUbergraph_VehicleWheelInfoWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
