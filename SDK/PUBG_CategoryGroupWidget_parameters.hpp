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

// Function CategoryGroupWidget.CategoryGroupWidget_C.AddChild
struct UCategoryGroupWidget_C_AddChild_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function CategoryGroupWidget.CategoryGroupWidget_C.GetChilderenCount
struct UCategoryGroupWidget_C_GetChilderenCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CategoryGroupWidget.CategoryGroupWidget_C.Clear
struct UCategoryGroupWidget_C_Clear_Params
{
};

// Function CategoryGroupWidget.CategoryGroupWidget_C.OnPrepass_1
struct UCategoryGroupWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CategoryGroupWidget.CategoryGroupWidget_C.AddItemSlot
struct UCategoryGroupWidget_C_AddItemSlot_Params
{
	class UItemSlotWidget_C*                           ItemSlotWidget;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
