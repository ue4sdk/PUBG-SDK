#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TeamInfoListWidget.TeamInfoListWidget_C.On_TeamListLayer_Prepass_1
struct UTeamInfoListWidget_C_On_TeamListLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoListWidget.TeamInfoListWidget_C.RefeshList
struct UTeamInfoListWidget_C_RefeshList_Params
{
};

// Function TeamInfoListWidget.TeamInfoListWidget_C.UpdateTeamInfo
struct UTeamInfoListWidget_C_UpdateTeamInfo_Params
{
};

// Function TeamInfoListWidget.TeamInfoListWidget_C.Get_TeamList_Visibility_1
struct UTeamInfoListWidget_C_Get_TeamList_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TeamInfoListWidget.TeamInfoListWidget_C.ExecuteUbergraph_TeamInfoListWidget
struct UTeamInfoListWidget_C_ExecuteUbergraph_TeamInfoListWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
