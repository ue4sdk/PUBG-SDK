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

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.Init
struct ABP_VaultHelperActor_C_Init_Params
{
	class Vector3D                                     V_Start;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_Apex;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_ApexAdditive;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_End;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslCharacter*                               CharRef;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsClimbing;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVaultType>                            InVaultType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEndToFall;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.UserConstructionScript
struct ABP_VaultHelperActor_C_UserConstructionScript_Params
{
};

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.ReceiveTick
struct ABP_VaultHelperActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.ExecuteUbergraph_BP_VaultHelperActor
struct ABP_VaultHelperActor_C_ExecuteUbergraph_BP_VaultHelperActor_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
