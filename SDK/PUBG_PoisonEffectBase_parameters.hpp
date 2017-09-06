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

// Function PoisonEffectBase.PoisonEffectBase_C.SetRadius
struct APoisonEffectBase_C_SetRadius_Params
{
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PoisonEffectBase.PoisonEffectBase_C.SetCenter
struct APoisonEffectBase_C_SetCenter_Params
{
	class Vector3D                                     Center;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PoisonEffectBase.PoisonEffectBase_C.UserConstructionScript
struct APoisonEffectBase_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
