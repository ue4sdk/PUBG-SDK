#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.UserConstructionScript
struct AAircraftCarePackage_Test_C_UserConstructionScript_Params
{
};

// Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.ReceiveBeginPlay
struct AAircraftCarePackage_Test_C_ReceiveBeginPlay_Params
{
};

// Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.ReceiveTick
struct AAircraftCarePackage_Test_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.ExecuteUbergraph_AircraftCarePackage_Test
struct AAircraftCarePackage_Test_C_ExecuteUbergraph_AircraftCarePackage_Test_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
