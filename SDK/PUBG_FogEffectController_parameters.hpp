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

// Function FogEffectController.FogEffectController_C.DestroyEffect
struct AFogEffectController_C_DestroyEffect_Params
{
};

// Function FogEffectController.FogEffectController_C.CreateEffect
struct AFogEffectController_C_CreateEffect_Params
{
};

// Function FogEffectController.FogEffectController_C.UpdateEffect
struct AFogEffectController_C_UpdateEffect_Params
{
};

// Function FogEffectController.FogEffectController_C.UserConstructionScript
struct AFogEffectController_C_UserConstructionScript_Params
{
};

// Function FogEffectController.FogEffectController_C.ReceiveBeginPlay
struct AFogEffectController_C_ReceiveBeginPlay_Params
{
};

// Function FogEffectController.FogEffectController_C.ReceiveTick
struct AFogEffectController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FogEffectController.FogEffectController_C.ExecuteUbergraph_FogEffectController
struct AFogEffectController_C_ExecuteUbergraph_FogEffectController_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
