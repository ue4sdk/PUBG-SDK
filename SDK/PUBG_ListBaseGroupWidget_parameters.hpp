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

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.GetChilderenCount
struct UListBaseGroupWidget_C_GetChilderenCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.AddChild
struct UListBaseGroupWidget_C_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.Clear
struct UListBaseGroupWidget_C_Clear_Params
{
};

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.On_List_Prepass_1
struct UListBaseGroupWidget_C_On_List_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.AddCategoryGroup
struct UListBaseGroupWidget_C_AddCategoryGroup_Params
{
	class UCategoryGroupWidget_C*                      CategoryGroup;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
