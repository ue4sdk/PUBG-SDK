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

// Function TeamCountWidget.TeamCountWidget_C.OnPrepass_1
struct UTeamCountWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamCountWidget.TeamCountWidget_C.On_KillCount_Prepass_1
struct UTeamCountWidget_C_On_KillCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamCountWidget.TeamCountWidget_C.Construct
struct UTeamCountWidget_C_Construct_Params
{
};

// Function TeamCountWidget.TeamCountWidget_C.ExecuteUbergraph_TeamCountWidget
struct UTeamCountWidget_C_ExecuteUbergraph_TeamCountWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
