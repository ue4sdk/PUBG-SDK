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

// Function BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.DecideWidgetColors
struct UBP_TeamMarkWidget_new_2_C_DecideWidgetColors_Params
{
	bool                                               Condition;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.IsFreeCam
struct UBP_TeamMarkWidget_new_2_C_IsFreeCam_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.OnPrepass_1
struct UBP_TeamMarkWidget_new_2_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.Get_PlayerName_Text_1
struct UBP_TeamMarkWidget_new_2_C_Get_PlayerName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
