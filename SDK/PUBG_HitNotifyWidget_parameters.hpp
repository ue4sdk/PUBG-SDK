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

// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage
struct UHitNotifyWidget_C_DamagedPercentToDamage_Params
{
	float                                              DamagedPercent;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent
struct UHitNotifyWidget_C_GetPlayerHealthPercent_Params
{
	float                                              HealthPercent;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent
struct UHitNotifyWidget_C_PostAkEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue
struct UHitNotifyWidget_C_SetRTPCValue_Params
{
	struct FString                                     RTPC;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent
struct UHitNotifyWidget_C_DamagedPercentToDamagePercent_Params
{
	float                                              DamagedPercent;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamagePercent;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound
struct UHitNotifyWidget_C_PlayHitNotifySound_Params
{
};

// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale
struct UHitNotifyWidget_C_GetRandomScale_Params
{
	class Vector2D                                     Scale;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation
struct UHitNotifyWidget_C_GetRandomTranslation_Params
{
	class Vector2D                                     Translation;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify
struct UHitNotifyWidget_C_OnHitNotify_Params
{
	float                                              DamagePercent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EDamageTypeCategory>                   DamageTypeCategory;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
