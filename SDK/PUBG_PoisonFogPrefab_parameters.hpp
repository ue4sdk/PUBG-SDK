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

// Function PoisonFogPrefab.PoisonFogPrefab_C.UserConstructionScript
struct APoisonFogPrefab_C_UserConstructionScript_Params
{
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.АР„З|·xЗ_
struct APoisonFogPrefab_C_АР„З|·xЗ__Params
{
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveBeginPlay
struct APoisonFogPrefab_C_ReceiveBeginPlay_Params
{
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveTick
struct APoisonFogPrefab_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.SetRadius
struct APoisonFogPrefab_C_SetRadius_Params
{
	float*                                             Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.SetCenter
struct APoisonFogPrefab_C_SetCenter_Params
{
	class Vector3D*                                    Center;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.ExecuteUbergraph_PoisonFogPrefab
struct APoisonFogPrefab_C_ExecuteUbergraph_PoisonFogPrefab_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
