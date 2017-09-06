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

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.DecideAdaptiveCrosshairColor
struct UW_AdaptiveCrosshair_C_DecideAdaptiveCrosshairColor_Params
{
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.On_CanvasBase_Prepass_1
struct UW_AdaptiveCrosshair_C_On_CanvasBase_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetShowCrosshairWidget
struct UW_AdaptiveCrosshair_C_SetShowCrosshairWidget_Params
{
	bool                                               bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairClass
struct UW_AdaptiveCrosshair_C_SetCenterCrosshairClass_Params
{
	TEnumAsByte<EWeaponClass>                          InClass;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHasWeapon;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairVisibility
struct UW_AdaptiveCrosshair_C_SetCenterCrosshairVisibility_Params
{
	bool                                               bVisible;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairDeviation
struct UW_AdaptiveCrosshair_C_SetCenterCrosshairDeviation_Params
{
	float                                              InDeviation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairVisibility
struct UW_AdaptiveCrosshair_C_SetAdaptiveCrosshairVisibility_Params
{
	bool                                               bVisible;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairPosition
struct UW_AdaptiveCrosshair_C_SetAdaptiveCrosshairPosition_Params
{
	class Vector2D                                     ScreenPosition;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
