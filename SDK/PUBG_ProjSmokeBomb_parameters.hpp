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

// Function ProjSmokeBomb.ProjSmokeBomb_C.UserConstructionScript
struct AProjSmokeBomb_C_UserConstructionScript_Params
{
};

// Function ProjSmokeBomb.ProjSmokeBomb_C.End
struct AProjSmokeBomb_C_End_Params
{
};

// Function ProjSmokeBomb.ProjSmokeBomb_C.ReceiveHit
struct AProjSmokeBomb_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D*                                    HitLocation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D*                                    HitNormal;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D*                                    NormalImpulse;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ProjSmokeBomb.ProjSmokeBomb_C.ReceiveTick
struct AProjSmokeBomb_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjSmokeBomb.ProjSmokeBomb_C.OnTakeAnyDamage_Event
struct AProjSmokeBomb_C_OnTakeAnyDamage_Event_Params
{
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjSmokeBomb.ProjSmokeBomb_C.ExecuteUbergraph_ProjSmokeBomb
struct AProjSmokeBomb_C_ExecuteUbergraph_ProjSmokeBomb_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
