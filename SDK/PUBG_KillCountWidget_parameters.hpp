#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KillCountWidget.KillCountWidget_C.OnPrepress_KillCountVisibility
struct UKillCountWidget_C_OnPrepress_KillCountVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillCountWidget.KillCountWidget_C.Get_AdditionalInfo_Text_1
struct UKillCountWidget_C_Get_AdditionalInfo_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KillCountWidget.KillCountWidget_C.Get_KillCount_Text_1
struct UKillCountWidget_C_Get_KillCount_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KillCountWidget.KillCountWidget_C.Construct
struct UKillCountWidget_C_Construct_Params
{
};

// Function KillCountWidget.KillCountWidget_C.Tick
struct UKillCountWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillCountWidget.KillCountWidget_C.BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UKillCountWidget_C_BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function KillCountWidget.KillCountWidget_C.BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UKillCountWidget_C_BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function KillCountWidget.KillCountWidget_C.KillCountHide
struct UKillCountWidget_C_KillCountHide_Params
{
};

// Function KillCountWidget.KillCountWidget_C.UpdateKillCount
struct UKillCountWidget_C_UpdateKillCount_Params
{
	int                                                KillCount;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KillCountWidget.KillCountWidget_C.ExecuteUbergraph_KillCountWidget
struct UKillCountWidget_C_ExecuteUbergraph_KillCountWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
