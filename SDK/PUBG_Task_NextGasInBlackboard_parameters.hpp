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

// Function Task_NextGasInBlackboard.Task_NextGasInBlackboard_C.ReceiveExecute
struct UTask_NextGasInBlackboard_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_NextGasInBlackboard.Task_NextGasInBlackboard_C.ExecuteUbergraph_Task_NextGasInBlackboard
struct UTask_NextGasInBlackboard_C_ExecuteUbergraph_Task_NextGasInBlackboard_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
