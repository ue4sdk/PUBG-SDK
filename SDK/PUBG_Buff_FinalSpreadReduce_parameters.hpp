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

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.UserConstructionScript
struct ABuff_FinalSpreadReduce_C_UserConstructionScript_Params
{
};

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StartBuffBlueprint
struct ABuff_FinalSpreadReduce_C_StartBuffBlueprint_Params
{
};

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StopBuffBlueprint
struct ABuff_FinalSpreadReduce_C_StopBuffBlueprint_Params
{
	bool*                                              bCanceled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.ExecuteUbergraph_Buff_FinalSpreadReduce
struct ABuff_FinalSpreadReduce_C_ExecuteUbergraph_Buff_FinalSpreadReduce_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
