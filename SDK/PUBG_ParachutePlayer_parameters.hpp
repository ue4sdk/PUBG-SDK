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

// Function ParachutePlayer.ParachutePlayer_C.UserConstructionScript
struct AParachutePlayer_C_UserConstructionScript_Params
{
};

// Function ParachutePlayer.ParachutePlayer_C.АР„З|·xЗ_
struct AParachutePlayer_C_АР„З|·xЗ__Params
{
};

// Function ParachutePlayer.ParachutePlayer_C.ReceiveEndPlay
struct AParachutePlayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ParachutePlayer.ParachutePlayer_C.ReceiveHit
struct AParachutePlayer_C_ReceiveHit_Params
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

// Function ParachutePlayer.ParachutePlayer_C.ReceiveTick
struct AParachutePlayer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ParachutePlayer.ParachutePlayer_C.ReceiveBeginPlay
struct AParachutePlayer_C_ReceiveBeginPlay_Params
{
};

// Function ParachutePlayer.ParachutePlayer_C.ExecuteUbergraph_ParachutePlayer
struct AParachutePlayer_C_ExecuteUbergraph_ParachutePlayer_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ParachutePlayer.ParachutePlayer_C.On Land__DelegateSignature
struct AParachutePlayer_C_On_Land__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
