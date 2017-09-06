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

// Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.UserConstructionScript
struct AToy_WeapCrossbow_1_C_UserConstructionScript_Params
{
};

// Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.ReceiveTick
struct AToy_WeapCrossbow_1_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.ServerSetAmmoState
struct AToy_WeapCrossbow_1_C_ServerSetAmmoState_Params
{
	TEnumAsByte<ENUM_CrossbowState>*                   NewAmmoState;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.ExecuteUbergraph_Toy_WeapCrossbow_2
struct AToy_WeapCrossbow_1_C_ExecuteUbergraph_Toy_WeapCrossbow_2_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
