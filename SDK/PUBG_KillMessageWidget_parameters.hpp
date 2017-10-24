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

// Function KillMessageWidget.KillMessageWidget_C.SetKillMessageFont
struct UKillMessageWidget_C_SetKillMessageFont_Params
{
};

// Function KillMessageWidget.KillMessageWidget_C.OnPrepass_1
struct UKillMessageWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.SetKillMessageText
struct UKillMessageWidget_C_SetKillMessageText_Params
{
};

// Function KillMessageWidget.KillMessageWidget_C.GetNumStartTeam
struct UKillMessageWidget_C_GetNumStartTeam_Params
{
	int                                                NumStartTeam;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.On_AlivePlayer_Prepass_1
struct UKillMessageWidget_C_On_AlivePlayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.On_MyKills_Prepass_1
struct UKillMessageWidget_C_On_MyKills_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetBrushColor_1
struct UKillMessageWidget_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetTeamAlive
struct UKillMessageWidget_C_GetTeamAlive_Params
{
	int                                                Alive;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Get_AlivePlayer_Text_1
struct UKillMessageWidget_C_Get_AlivePlayer_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KillMessageWidget.KillMessageWidget_C.GetAlivePlayerNum
struct UKillMessageWidget_C_GetAlivePlayerNum_Params
{
	int                                                AlivePlayer;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetKillNum
struct UKillMessageWidget_C_GetKillNum_Params
{
	int                                                KillNum;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Get_Killer_Visibility_1
struct UKillMessageWidget_C_Get_Killer_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Get_Insert2_Visibility_1
struct UKillMessageWidget_C_Get_Insert2_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Get_Insert_Visibility_1
struct UKillMessageWidget_C_Get_Insert_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetFadeInAnimation
struct UKillMessageWidget_C_GetFadeInAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetFadeOutAnimation
struct UKillMessageWidget_C_GetFadeOutAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.InitializeKillMessageText
struct UKillMessageWidget_C_InitializeKillMessageText_Params
{
};

// Function KillMessageWidget.KillMessageWidget_C.IsVictimTeam
struct UKillMessageWidget_C_IsVictimTeam_Params
{
	bool                                               IsTeam;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.IsKillerTeam
struct UKillMessageWidget_C_IsKillerTeam_Params
{
	bool                                               IsTeam;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Construct
struct UKillMessageWidget_C_Construct_Params
{
};

// Function KillMessageWidget.KillMessageWidget_C.ExecuteUbergraph_KillMessageWidget
struct UKillMessageWidget_C_ExecuteUbergraph_KillMessageWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
