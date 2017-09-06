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

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.UserConstructionScript
struct ABuff_ADSHoldingBreathCooldown_C_UserConstructionScript_Params
{
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StopBuffBlueprint
struct ABuff_ADSHoldingBreathCooldown_C_StopBuffBlueprint_Params
{
	bool*                                              bCanceled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StartBuffBlueprint
struct ABuff_ADSHoldingBreathCooldown_C_StartBuffBlueprint_Params
{
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.TickBuff
struct ABuff_ADSHoldingBreathCooldown_C_TickBuff_Params
{
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ReceiveTick
struct ABuff_ADSHoldingBreathCooldown_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ExecuteUbergraph_Buff_ADSHoldingBreathCooldown
struct ABuff_ADSHoldingBreathCooldown_C_ExecuteUbergraph_Buff_ADSHoldingBreathCooldown_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
