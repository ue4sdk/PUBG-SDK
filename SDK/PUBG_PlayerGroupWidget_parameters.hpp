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

// Function PlayerGroupWidget.PlayerGroupWidget_C.On_PlayerListBG_Prepass_1
struct UPlayerGroupWidget_C_On_PlayerListBG_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.On_PlayerListBorder_Prepass_1
struct UPlayerGroupWidget_C_On_PlayerListBorder_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.Clear
struct UPlayerGroupWidget_C_Clear_Params
{
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.AddPlayerWidget
struct UPlayerGroupWidget_C_AddPlayerWidget_Params
{
	class UPlayerInfoWidget_C*                         PlayerInfo;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.Construct
struct UPlayerGroupWidget_C_Construct_Params
{
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.ExecuteUbergraph_PlayerGroupWidget
struct UPlayerGroupWidget_C_ExecuteUbergraph_PlayerGroupWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
