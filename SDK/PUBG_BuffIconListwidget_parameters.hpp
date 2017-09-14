#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BuffIconListwidget.BuffIconListWidget_C.UpdateRunBuffIcon
struct UBuffIconListWidget_C_UpdateRunBuffIcon_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.UpdateHealBuffIcon
struct UBuffIconListWidget_C_UpdateHealBuffIcon_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.HealBuffIconVisibilityUpdate
struct UBuffIconListWidget_C_HealBuffIconVisibilityUpdate_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.RunBuffIconVisibilityUpdate
struct UBuffIconListWidget_C_RunBuffIconVisibilityUpdate_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.GetRunBuffVisibility
struct UBuffIconListWidget_C_GetRunBuffVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.GeHealBufftVisibility
struct UBuffIconListWidget_C_GeHealBufftVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.GetBoostPercent
struct UBuffIconListWidget_C_GetBoostPercent_Params
{
	float                                              NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.GetRunBuffIconOpacity
struct UBuffIconListWidget_C_GetRunBuffIconOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.GetHealBuffIconOpacity
struct UBuffIconListWidget_C_GetHealBuffIconOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.Construct
struct UBuffIconListWidget_C_Construct_Params
{
};

// Function BuffIconListwidget.BuffIconListWidget_C.OnStartBuff
struct UBuffIconListWidget_C_OnStartBuff_Params
{
	struct FName                                       BuffName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStart;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BuffIconListwidget.BuffIconListWidget_C.ExecuteUbergraph_BuffIconListWidget
struct UBuffIconListWidget_C_ExecuteUbergraph_BuffIconListWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
