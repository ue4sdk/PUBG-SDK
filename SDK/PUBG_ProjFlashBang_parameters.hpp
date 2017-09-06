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

// Function ProjFlashBang.ProjFlashBang_C.GetFlashBangDistance
struct AProjFlashBang_C_GetFlashBangDistance_Params
{
	float                                              FlashBangDistance;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.GetCameraToFlashBangAngle
struct AProjFlashBang_C_GetCameraToFlashBangAngle_Params
{
	float                                              Angle;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.GetTinnitusSoundIndex
struct AProjFlashBang_C_GetTinnitusSoundIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangCaputeEffect
struct AProjFlashBang_C_SpawnFlashBangCaputeEffect_Params
{
	class ACharacter*                                  ShooterCharacter;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangEffect
struct AProjFlashBang_C_SpawnFlashBangEffect_Params
{
	float                                              FlashBangDistance;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.PlayTinnitusSound
struct AProjFlashBang_C_PlayTinnitusSound_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.UserConstructionScript
struct AProjFlashBang_C_UserConstructionScript_Params
{
};

// Function ProjFlashBang.ProjFlashBang_C.OnTakeAnyDamage_Event
struct AProjFlashBang_C_OnTakeAnyDamage_Event_Params
{
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.ExplodeBP
struct AProjFlashBang_C_ExplodeBP_Params
{
	class Vector3D*                                    Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Rotator*                                     Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FHitResult*                                 Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float*                                             Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.BreakLoop
struct AProjFlashBang_C_BreakLoop_Params
{
};

// Function ProjFlashBang.ProjFlashBang_C.ExecuteUbergraph_ProjFlashBang
struct AProjFlashBang_C_ExecuteUbergraph_ProjFlashBang_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
