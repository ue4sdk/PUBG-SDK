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

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.AddChild
struct UCategoryGroupWidget_Gamepad_C_AddChild_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.GetChilderenCount
struct UCategoryGroupWidget_Gamepad_C_GetChilderenCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.Clear
struct UCategoryGroupWidget_Gamepad_C_Clear_Params
{
};

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.OnPrepass_1
struct UCategoryGroupWidget_Gamepad_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.AddItemSlot
struct UCategoryGroupWidget_Gamepad_C_AddItemSlot_Params
{
	class UItemSlotWidget_Gamepad_C*                   ItemSlotWidget;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
