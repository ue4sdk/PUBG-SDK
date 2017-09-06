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

// Function Powerup_Base.Powerup_Base_C.CleanupTimers
struct APowerup_Base_C_CleanupTimers_Params
{
};

// Function Powerup_Base.Powerup_Base_C.UserConstructionScript
struct APowerup_Base_C_UserConstructionScript_Params
{
};

// Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay
struct APowerup_Base_C_ReceiveBeginPlay_Params
{
};

// Function Powerup_Base.Powerup_Base_C.Drop
struct APowerup_Base_C_Drop_Params
{
};

// Function Powerup_Base.Powerup_Base_C.PlayAnim
struct APowerup_Base_C_PlayAnim_Params
{
	class ATslCharacter*                               Char_Ref;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed
struct APowerup_Base_C_ReceiveDestroyed_Params
{
};

// Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base
struct APowerup_Base_C_ExecuteUbergraph_Powerup_Base_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
