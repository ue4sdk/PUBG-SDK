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

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos
struct ABP_ActiveRagdollActor_C_SetServerPos_Params
{
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient
struct ABP_ActiveRagdollActor_C_InitClient_Params
{
	class USkeletalMeshComponent*                      MeshRef;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     InVelocity;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer
struct ABP_ActiveRagdollActor_C_InitServer_Params
{
	class Vector3D                                     InVelocity;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript
struct ABP_ActiveRagdollActor_C_UserConstructionScript_Params
{
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay
struct ABP_ActiveRagdollActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick
struct ABP_ActiveRagdollActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor
struct ABP_ActiveRagdollActor_C_ExecuteUbergraph_BP_ActiveRagdollActor_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
