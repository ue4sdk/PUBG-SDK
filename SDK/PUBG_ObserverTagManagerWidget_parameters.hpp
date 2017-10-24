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

// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.RemoveReplicateCharacter
struct UObserverTagManagerWidget_C_RemoveReplicateCharacter_Params
{
	TArray<class ATslCharacter*>                       Characters;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.AddReplicateCharacter
struct UObserverTagManagerWidget_C_AddReplicateCharacter_Params
{
	TArray<class ATslCharacter*>                       Characters;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.Tick
struct UObserverTagManagerWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.ExecuteUbergraph_ObserverTagManagerWidget
struct UObserverTagManagerWidget_C_ExecuteUbergraph_ObserverTagManagerWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
