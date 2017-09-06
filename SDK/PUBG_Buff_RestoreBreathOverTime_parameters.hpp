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

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff
struct ABuff_RestoreBreathOverTime_C_CanApplyBuff_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript
struct ABuff_RestoreBreathOverTime_C_UserConstructionScript_Params
{
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveTick
struct ABuff_RestoreBreathOverTime_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay
struct ABuff_RestoreBreathOverTime_C_ReceiveBeginPlay_Params
{
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff
struct ABuff_RestoreBreathOverTime_C_TickBuff_Params
{
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime
struct ABuff_RestoreBreathOverTime_C_ExecuteUbergraph_Buff_RestoreBreathOverTime_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
