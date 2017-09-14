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

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.GetGameStateBP
struct UAlivePlayerInfoWidget_C_GetGameStateBP_Params
{
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_ColorAndOpacity_1
struct UAlivePlayerInfoWidget_C_Get_SurvivorCount_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_AdditionalInfo_Text_1
struct UAlivePlayerInfoWidget_C_Get_AdditionalInfo_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.OnPrepass_AlivePlayerInfoVisibility
struct UAlivePlayerInfoWidget_C_OnPrepass_AlivePlayerInfoVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_SurvivorCount_Text_1
struct UAlivePlayerInfoWidget_C_Get_SurvivorCount_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Get_PlayerCount
struct UAlivePlayerInfoWidget_C_Get_PlayerCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.GetText_1
struct UAlivePlayerInfoWidget_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UAlivePlayerInfoWidget_C_BndEvt__Decreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Tick
struct UAlivePlayerInfoWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UAlivePlayerInfoWidget_C_BndEvt__Increasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.Construct
struct UAlivePlayerInfoWidget_C_Construct_Params
{
};

// Function AlivePlayerInfoWidget.AlivePlayerInfoWidget_C.ExecuteUbergraph_AlivePlayerInfoWidget
struct UAlivePlayerInfoWidget_C_ExecuteUbergraph_AlivePlayerInfoWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
