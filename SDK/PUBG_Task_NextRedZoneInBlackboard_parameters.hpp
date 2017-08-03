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

// Function Task_NextRedZoneInBlackboard.Task_NextRedZoneInBlackboard_C.ReceiveExecute
struct UTask_NextRedZoneInBlackboard_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_NextRedZoneInBlackboard.Task_NextRedZoneInBlackboard_C.ExecuteUbergraph_Task_NextRedZoneInBlackboard
struct UTask_NextRedZoneInBlackboard_C_ExecuteUbergraph_Task_NextRedZoneInBlackboard_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
