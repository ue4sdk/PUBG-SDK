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

// Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Delegate
struct UDistanceSliderWidget_C_ChangeDistance_Delegate_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistanceFunc
struct UDistanceSliderWidget_C_SetDistanceFunc_Params
{
};

// Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Slider
struct UDistanceSliderWidget_C_ChangeDistance_Slider_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DistanceSliderWidget.DistanceSliderWidget_C.SetValue
struct UDistanceSliderWidget_C_SetValue_Params
{
	float                                              Pos;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistance
struct UDistanceSliderWidget_C_SetDistance_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DistanceSliderWidget.DistanceSliderWidget_C.GetDistance
struct UDistanceSliderWidget_C_GetDistance_Params
{
	float                                              Distance;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DistanceSliderWidget.DistanceSliderWidget_C.BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature
struct UDistanceSliderWidget_C_BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DistanceSliderWidget.DistanceSliderWidget_C.Construct
struct UDistanceSliderWidget_C_Construct_Params
{
};

// Function DistanceSliderWidget.DistanceSliderWidget_C.ExecuteUbergraph_DistanceSliderWidget
struct UDistanceSliderWidget_C_ExecuteUbergraph_DistanceSliderWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DistanceSliderWidget.DistanceSliderWidget_C.ChagedDistance__DelegateSignature
struct UDistanceSliderWidget_C_ChagedDistance__DelegateSignature_Params
{
	float                                              NewDistance;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
