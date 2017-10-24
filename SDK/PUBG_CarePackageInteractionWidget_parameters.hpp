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

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.ShowCarePackageInteractionWidget
struct UCarePackageInteractionWidget_C_ShowCarePackageInteractionWidget_Params
{
	bool                                               IsShow;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.Tick
struct UCarePackageInteractionWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.Construct
struct UCarePackageInteractionWidget_C_Construct_Params
{
};

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UCarePackageInteractionWidget_C_BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.CustomTick
struct UCarePackageInteractionWidget_C_CustomTick_Params
{
};

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.TimerCheckCarePackage
struct UCarePackageInteractionWidget_C_TimerCheckCarePackage_Params
{
};

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.ExecuteUbergraph_CarePackageInteractionWidget
struct UCarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
