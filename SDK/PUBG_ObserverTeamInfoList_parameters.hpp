#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.OnPrepass_2
struct UObserverTeamInfoList_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.OnPrepass_1
struct UObserverTeamInfoList_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_1
struct UObserverTeamInfoList_C_On_TeamList_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.IsSameTeam
struct UObserverTeamInfoList_C_IsSameTeam_Params
{
	class ATslCharacter*                               Character1;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslCharacter*                               Character2;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               retVal;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.FindSpectateOrFollowCharacter
struct UObserverTeamInfoList_C_FindSpectateOrFollowCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.UpdateTeamList
struct UObserverTeamInfoList_C_UpdateTeamList_Params
{
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Tick
struct UObserverTeamInfoList_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.ExecuteUbergraph_ObserverTeamInfoList
struct UObserverTeamInfoList_C_ExecuteUbergraph_ObserverTeamInfoList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
