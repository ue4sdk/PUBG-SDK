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

// Function DeathDropItemPackage.DeathDropItemPackage_C.GetCategory
struct ADeathDropItemPackage_C_GetCategory_Params
{
	struct FText                                       Category;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function DeathDropItemPackage.DeathDropItemPackage_C.UserConstructionScript
struct ADeathDropItemPackage_C_UserConstructionScript_Params
{
};

// Function DeathDropItemPackage.DeathDropItemPackage_C.ReceiveBeginPlay
struct ADeathDropItemPackage_C_ReceiveBeginPlay_Params
{
};

// Function DeathDropItemPackage.DeathDropItemPackage_C.ExecuteUbergraph_DeathDropItemPackage
struct ADeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
