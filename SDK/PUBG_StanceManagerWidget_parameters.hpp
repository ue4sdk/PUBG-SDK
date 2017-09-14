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

// Function StanceManagerWidget.StanceManagerWidget_C.On_StanceManagerCanvas_Prepass_1
struct UStanceManagerWidget_C_On_StanceManagerCanvas_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StanceManagerWidget.StanceManagerWidget_C.TickCheckRiderorDriver
struct UStanceManagerWidget_C_TickCheckRiderorDriver_Params
{
};

// Function StanceManagerWidget.StanceManagerWidget_C.TickCheckStance
struct UStanceManagerWidget_C_TickCheckStance_Params
{
};

// Function StanceManagerWidget.StanceManagerWidget_C.VehicleStanceToChracterStance
struct UStanceManagerWidget_C_VehicleStanceToChracterStance_Params
{
};

// Function StanceManagerWidget.StanceManagerWidget_C.OnRider
struct UStanceManagerWidget_C_OnRider_Params
{
};

// Function StanceManagerWidget.StanceManagerWidget_C.OnDriver
struct UStanceManagerWidget_C_OnDriver_Params
{
};

// Function StanceManagerWidget.StanceManagerWidget_C.CharacterStanceToVehicleStance
struct UStanceManagerWidget_C_CharacterStanceToVehicleStance_Params
{
};

// Function StanceManagerWidget.StanceManagerWidget_C.Tick
struct UStanceManagerWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StanceManagerWidget.StanceManagerWidget_C.ExecuteUbergraph_StanceManagerWidget
struct UStanceManagerWidget_C_ExecuteUbergraph_StanceManagerWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
