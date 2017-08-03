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

// Function Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.ReceiveTick
struct UTask_CarePackageFinishCheck_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.ExecuteUbergraph_Task_CarePackageFinishCheck
struct UTask_CarePackageFinishCheck_C_ExecuteUbergraph_Task_CarePackageFinishCheck_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
