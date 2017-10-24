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

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.SetSmall
struct UObserverMatchResultNameWidget_C_SetSmall_Params
{
	bool                                               bSmall;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_Kills_Prepass_1
struct UObserverMatchResultNameWidget_C_On_Kills_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.GetPlayerNameFontSize
struct UObserverMatchResultNameWidget_C_GetPlayerNameFontSize_Params
{
	int                                                FontSize;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.GetKillFontSize
struct UObserverMatchResultNameWidget_C_GetKillFontSize_Params
{
	int                                                FontSize;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_Slash_Prepass_1
struct UObserverMatchResultNameWidget_C_On_Slash_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_PlayerName_Prepass_1
struct UObserverMatchResultNameWidget_C_On_PlayerName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_KillCount_Prepass_1
struct UObserverMatchResultNameWidget_C_On_KillCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.OnPrepass_1
struct UObserverMatchResultNameWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
