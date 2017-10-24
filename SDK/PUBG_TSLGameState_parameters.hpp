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

// Function TSLGameState.TSLGameState_C.UserConstructionScript
struct ATSLGameState_C_UserConstructionScript_Params
{
};

// Function TSLGameState.TSLGameState_C.UpdateWorldTimeSecondsDelta
struct ATSLGameState_C_UpdateWorldTimeSecondsDelta_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TSLGameState.TSLGameState_C.ExecuteUbergraph_TSLGameState
struct ATSLGameState_C_ExecuteUbergraph_TSLGameState_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
