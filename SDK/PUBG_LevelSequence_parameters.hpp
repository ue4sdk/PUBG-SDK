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

// Function LevelSequence.LevelSequencePlayer.Stop
struct ULevelSequencePlayer_Stop_Params
{
};

// Function LevelSequence.LevelSequencePlayer.StartPlayingNextTick
struct ULevelSequencePlayer_StartPlayingNextTick_Params
{
};

// Function LevelSequence.LevelSequencePlayer.SetPlayRate
struct ULevelSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.SetPlaybackRange
struct ULevelSequencePlayer_SetPlaybackRange_Params
{
	float                                              NewStartTime;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NewEndTime;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.SetPlaybackPosition
struct ULevelSequencePlayer_SetPlaybackPosition_Params
{
	float                                              NewPlaybackPosition;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.PlayReverse
struct ULevelSequencePlayer_PlayReverse_Params
{
};

// Function LevelSequence.LevelSequencePlayer.PlayLooping
struct ULevelSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.Play
struct ULevelSequencePlayer_Play_Params
{
};

// Function LevelSequence.LevelSequencePlayer.Pause
struct ULevelSequencePlayer_Pause_Params
{
};

// Function LevelSequence.LevelSequencePlayer.IsPlaying
struct ULevelSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlayRate
struct ULevelSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlaybackStart
struct ULevelSequencePlayer_GetPlaybackStart_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlaybackPosition
struct ULevelSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlaybackEnd
struct ULevelSequencePlayer_GetPlaybackEnd_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetLength
struct ULevelSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLevelSequencePlaybackSettings              Settings;                                                 // (CPF_Parm)
	class ULevelSequencePlayer*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.ChangePlaybackDirection
struct ULevelSequencePlayer_ChangePlaybackDirection_Params
{
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.GetSequence
struct ALevelSequenceActor_GetSequence_Params
{
	bool                                               Load;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULevelSequence*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequenceBurnIn_SetSettings_Params
{
	class UObject*                                     InSettings;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
