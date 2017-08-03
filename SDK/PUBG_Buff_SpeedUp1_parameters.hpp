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

// Function Buff_SpeedUp1.Buff_SpeedUp1_C.UserConstructionScript
struct ABuff_SpeedUp1_C_UserConstructionScript_Params
{
};

// Function Buff_SpeedUp1.Buff_SpeedUp1_C.StartBuffBlueprint
struct ABuff_SpeedUp1_C_StartBuffBlueprint_Params
{
};

// Function Buff_SpeedUp1.Buff_SpeedUp1_C.StopBuffBlueprint
struct ABuff_SpeedUp1_C_StopBuffBlueprint_Params
{
	bool*                                              bCanceled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Buff_SpeedUp1.Buff_SpeedUp1_C.ExecuteUbergraph_Buff_SpeedUp1
struct ABuff_SpeedUp1_C_ExecuteUbergraph_Buff_SpeedUp1_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
