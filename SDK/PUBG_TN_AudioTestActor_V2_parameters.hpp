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

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintDistance
struct ATN_AudioTestActor_V2_C_PrintDistance_Params
{
	float                                              DistanceInMeters;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudioRetrigger
struct ATN_AudioTestActor_V2_C_PlayAudioRetrigger_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Retrigger
struct ATN_AudioTestActor_V2_C_Retrigger_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintText
struct ATN_AudioTestActor_V2_C_PrintText_Params
{
	struct FString                                     InText;                                                   // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetSwitch
struct ATN_AudioTestActor_V2_C_SetSwitch_Params
{
	struct FString                                     Group;                                                    // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Param;                                                    // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetNextSound
struct ATN_AudioTestActor_V2_C_SetNextSound_Params
{
	bool                                               bForward;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Destroy
struct ATN_AudioTestActor_V2_C_Destroy_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudio
struct ATN_AudioTestActor_V2_C_PlayAudio_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Initialize
struct ATN_AudioTestActor_V2_C_Initialize_Params
{
	class APlayerPawn_v2_C*                            Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.UserConstructionScript
struct ATN_AudioTestActor_V2_C_UserConstructionScript_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ReceiveTick
struct ATN_AudioTestActor_V2_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ExecuteUbergraph_TN_AudioTestActor_V2
struct ATN_AudioTestActor_V2_C_ExecuteUbergraph_TN_AudioTestActor_V2_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
