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

// Function BoostGaugeWidget.BoostGaugeWidget_C.GetSpectatorTslCharacter
struct UBoostGaugeWidget_C_GetSpectatorTslCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.OnPrepass_1
struct UBoostGaugeWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.GetVisibility_1
struct UBoostGaugeWidget_C_GetVisibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.GetBoostGaugeColorandOpacity
struct UBoostGaugeWidget_C_GetBoostGaugeColorandOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.GetAlpha
struct UBoostGaugeWidget_C_GetAlpha_Params
{
	float                                              BoostAlpha;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.UpdageGauge
struct UBoostGaugeWidget_C_UpdageGauge_Params
{
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.GetBoostGaugePercent
struct UBoostGaugeWidget_C_GetBoostGaugePercent_Params
{
	float                                              Percent;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.Construct
struct UBoostGaugeWidget_C_Construct_Params
{
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.Tick
struct UBoostGaugeWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBoostGaugeWidget_C_BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BoostGaugeWidget.BoostGaugeWidget_C.ExecuteUbergraph_BoostGaugeWidget
struct UBoostGaugeWidget_C_ExecuteUbergraph_BoostGaugeWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
