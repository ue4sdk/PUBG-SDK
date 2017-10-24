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

// Function PlayerInfoWidget.PlayerInfoWidget_C.SetCameraMode_Free
struct UPlayerInfoWidget_C_SetCameraMode_Free_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.SetCameraMode_Follow
struct UPlayerInfoWidget_C_SetCameraMode_Follow_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.SetCameraMode_Spectator
struct UPlayerInfoWidget_C_SetCameraMode_Spectator_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnKeyDown
struct UPlayerInfoWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnMouseButtonDown_1
struct UPlayerInfoWidget_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_KickButtonLayer_Prepass_1
struct UPlayerInfoWidget_C_On_KickButtonLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnPrepass_1
struct UPlayerInfoWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_PlayerName_Prepass_1
struct UPlayerInfoWidget_C_On_PlayerName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_IconLayer_Prepass_1
struct UPlayerInfoWidget_C_On_IconLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_IconImage_Prepass_1
struct UPlayerInfoWidget_C_On_IconImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_KillCount_Prepass_1
struct UPlayerInfoWidget_C_On_KillCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_BoostGauge_Prepass_1
struct UPlayerInfoWidget_C_On_BoostGauge_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_InfoLayer_Prepass_1
struct UPlayerInfoWidget_C_On_InfoLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.UpdateHealthPrepass
struct UPlayerInfoWidget_C_UpdateHealthPrepass_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UPlayerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.Tick
struct UPlayerInfoWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.Construct
struct UPlayerInfoWidget_C_Construct_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
struct UPlayerInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnMouseEnter
struct UPlayerInfoWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnMouseLeave
struct UPlayerInfoWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.CustomEvent_1
struct UPlayerInfoWidget_C_CustomEvent_1_Params
{
	TEnumAsByte<EPopupButtonID>                        ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.CustomEvent_3
struct UPlayerInfoWidget_C_CustomEvent_3_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.CustomEvent_2
struct UPlayerInfoWidget_C_CustomEvent_2_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.Destruct
struct UPlayerInfoWidget_C_Destruct_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.ExecuteUbergraph_PlayerInfoWidget
struct UPlayerInfoWidget_C_ExecuteUbergraph_PlayerInfoWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
