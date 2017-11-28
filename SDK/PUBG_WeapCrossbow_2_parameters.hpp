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

// Function WeapCrossbow_2.WeapCrossbow_1_C.UserConstructionScript
struct AWeapCrossbow_1_C_UserConstructionScript_Params
{
};

// Function WeapCrossbow_2.WeapCrossbow_1_C.ReceiveTick
struct AWeapCrossbow_1_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeapCrossbow_2.WeapCrossbow_1_C.ServerSetAmmoState
struct AWeapCrossbow_1_C_ServerSetAmmoState_Params
{
	TEnumAsByte<ENUM_CrossbowState>                    NewAmmoState;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeapCrossbow_2.WeapCrossbow_1_C.ExecuteUbergraph_WeapCrossbow_2
struct AWeapCrossbow_1_C_ExecuteUbergraph_WeapCrossbow_2_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
