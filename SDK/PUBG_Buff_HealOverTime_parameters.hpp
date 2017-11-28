#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_HealOverTime.Buff_HealOverTime_C.GetHealAmount
struct ABuff_HealOverTime_C_GetHealAmount_Params
{
	float                                              GoalHealth;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Buff_HealOverTime.Buff_HealOverTime_C.UserConstructionScript
struct ABuff_HealOverTime_C_UserConstructionScript_Params
{
};

// Function Buff_HealOverTime.Buff_HealOverTime_C.TickBuff
struct ABuff_HealOverTime_C_TickBuff_Params
{
};

// Function Buff_HealOverTime.Buff_HealOverTime_C.StopBuffBlueprint
struct ABuff_HealOverTime_C_StopBuffBlueprint_Params
{
	bool*                                              bCanceled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Buff_HealOverTime.Buff_HealOverTime_C.StartBuffBlueprint
struct ABuff_HealOverTime_C_StartBuffBlueprint_Params
{
};

// Function Buff_HealOverTime.Buff_HealOverTime_C.ReceiveTick
struct ABuff_HealOverTime_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Buff_HealOverTime.Buff_HealOverTime_C.ExecuteUbergraph_Buff_HealOverTime
struct ABuff_HealOverTime_C_ExecuteUbergraph_Buff_HealOverTime_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
