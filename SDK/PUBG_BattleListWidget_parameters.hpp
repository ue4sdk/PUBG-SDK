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

// Function BattleListWidget.BattleListWidget_C.FindCharacterByPlayerState
struct UBattleListWidget_C_FindCharacterByPlayerState_Params
{
	class APlayerState*                                PlayerState;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BattleListWidget.BattleListWidget_C.UpdateBattleList
struct UBattleListWidget_C_UpdateBattleList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.RefreshPlayerList
struct UBattleListWidget_C_RefreshPlayerList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.Construct
struct UBattleListWidget_C_Construct_Params
{
};

// Function BattleListWidget.BattleListWidget_C.CustomTick
struct UBattleListWidget_C_CustomTick_Params
{
};

// Function BattleListWidget.BattleListWidget_C.TimerCheckUpdateList
struct UBattleListWidget_C_TimerCheckUpdateList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.ExecuteUbergraph_BattleListWidget
struct UBattleListWidget_C_ExecuteUbergraph_BattleListWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
