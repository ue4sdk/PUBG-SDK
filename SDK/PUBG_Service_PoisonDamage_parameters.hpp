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

// Function Service_PoisonDamage.Service_PoisonDamage_C.TakeDamageToCharacter
struct UService_PoisonDamage_C_TakeDamageToCharacter_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SafetyRadius;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     SafetyPosition;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Service_PoisonDamage.Service_PoisonDamage_C.EverySecond
struct UService_PoisonDamage_C_EverySecond_Params
{
};

// Function Service_PoisonDamage.Service_PoisonDamage_C.ReceiveActivation
struct UService_PoisonDamage_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Service_PoisonDamage.Service_PoisonDamage_C.ExecuteUbergraph_Service_PoisonDamage
struct UService_PoisonDamage_C_ExecuteUbergraph_Service_PoisonDamage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
