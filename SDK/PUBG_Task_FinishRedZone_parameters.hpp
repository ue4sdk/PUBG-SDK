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

// Function Task_FinishRedZone.Task_FinishRedZone_C.ReceiveExecute
struct UTask_FinishRedZone_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_FinishRedZone.Task_FinishRedZone_C.ExecuteUbergraph_Task_FinishRedZone
struct UTask_FinishRedZone_C_ExecuteUbergraph_Task_FinishRedZone_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
