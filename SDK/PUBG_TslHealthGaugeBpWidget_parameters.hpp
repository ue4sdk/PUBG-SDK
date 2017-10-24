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

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.On_Background_Prepass_1
struct UTslHealthGaugeBpWidget_C_On_Background_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_ColorAndOpacity_1
struct UTslHealthGaugeBpWidget_C_Get_Background_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_Visibility_1
struct UTslHealthGaugeBpWidget_C_Get_Background_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateWaning
struct UTslHealthGaugeBpWidget_C_UpdateWaning_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateColorGauge
struct UTslHealthGaugeBpWidget_C_UpdateColorGauge_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetMoveCurve
struct UTslHealthGaugeBpWidget_C_GetMoveCurve_Params
{
	class UCurveFloat*                                 NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.SetHealth
struct UTslHealthGaugeBpWidget_C_SetHealth_Params
{
	float                                              NewDestination;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bGroggy;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.MoveTick
struct UTslHealthGaugeBpWidget_C_MoveTick_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetHealthGaugeColorOpacity
struct UTslHealthGaugeBpWidget_C_GetHealthGaugeColorOpacity_Params
{
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Construct
struct UTslHealthGaugeBpWidget_C_Construct_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Tick
struct UTslHealthGaugeBpWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.StartMove
struct UTslHealthGaugeBpWidget_C_StartMove_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.ExecuteUbergraph_TslHealthGaugeBpWidget
struct UTslHealthGaugeBpWidget_C_ExecuteUbergraph_TslHealthGaugeBpWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
