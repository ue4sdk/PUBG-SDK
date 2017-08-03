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

// Function BP_BulletCamActor.BP_BulletCamActor_C.Init
struct ABP_BulletCamActor_C_Init_Params
{
	class ATslWeapon_Trajectory*                       NewParam;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript
struct ABP_BulletCamActor_C_UserConstructionScript_Params
{
};

// Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick
struct ABP_BulletCamActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor
struct ABP_BulletCamActor_C_ExecuteUbergraph_BP_BulletCamActor_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
