#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_CheckFinish.Task_CheckFinish_C.ReceiveTick
struct UTask_CheckFinish_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_CheckFinish.Task_CheckFinish_C.ExecuteUbergraph_Task_CheckFinish
struct UTask_CheckFinish_C_ExecuteUbergraph_Task_CheckFinish_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
