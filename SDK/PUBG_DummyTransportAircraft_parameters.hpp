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

// Function DummyTransportAircraft.DummyTransportAircraft_C.SetAllCloudParticleActivate
struct ADummyTransportAircraft_C_SetAllCloudParticleActivate_Params
{
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DummyTransportAircraft.DummyTransportAircraft_C.UserConstructionScript
struct ADummyTransportAircraft_C_UserConstructionScript_Params
{
};

// Function DummyTransportAircraft.DummyTransportAircraft_C.ReceiveBeginPlay
struct ADummyTransportAircraft_C_ReceiveBeginPlay_Params
{
};

// Function DummyTransportAircraft.DummyTransportAircraft_C.ReceiveTick
struct ADummyTransportAircraft_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerRide
struct ADummyTransportAircraft_C_OnLocalPlayerRide_Params
{
};

// Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerLeave
struct ADummyTransportAircraft_C_OnLocalPlayerLeave_Params
{
};

// Function DummyTransportAircraft.DummyTransportAircraft_C.ExecuteUbergraph_DummyTransportAircraft
struct ADummyTransportAircraft_C_ExecuteUbergraph_DummyTransportAircraft_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
