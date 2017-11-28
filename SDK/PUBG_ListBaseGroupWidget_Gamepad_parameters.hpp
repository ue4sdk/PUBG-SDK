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

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.GetChilderenCount
struct UListBaseGroupWidget_Gamepad_C_GetChilderenCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddChild
struct UListBaseGroupWidget_Gamepad_C_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.Clear
struct UListBaseGroupWidget_Gamepad_C_Clear_Params
{
};

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.On_List_Prepass_1
struct UListBaseGroupWidget_Gamepad_C_On_List_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddCategoryGroup
struct UListBaseGroupWidget_Gamepad_C_AddCategoryGroup_Params
{
	class UCategoryGroupWidget_Gamepad_C*              CategoryGroup;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
