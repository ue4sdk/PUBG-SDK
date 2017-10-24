#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BoatBase.BoatBase_C.UserConstructionScript
struct ABoatBase_C_UserConstructionScript_Params
{
};

// Function BoatBase.BoatBase_C.ReceiveBeginPlay
struct ABoatBase_C_ReceiveBeginPlay_Params
{
};

// Function BoatBase.BoatBase_C.ReceiveTick
struct ABoatBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BoatBase.BoatBase_C.EventFuelConsumption
struct ABoatBase_C_EventFuelConsumption_Params
{
};

// Function BoatBase.BoatBase_C.ExecuteUbergraph_BoatBase
struct ABoatBase_C_ExecuteUbergraph_BoatBase_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
