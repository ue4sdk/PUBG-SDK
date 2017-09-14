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

// Function InteractionWidget.InteractionWidget_C.On_InteractionInputMethodSwitcher_Prepass_1
struct UInteractionWidget_C_On_InteractionInputMethodSwitcher_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetInteractionComponent
struct UInteractionWidget_C_GetInteractionComponent_Params
{
	TScriptInterface<class UInteractionInterface>      InteractionComponent;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.On_InteractionText_Prepass_1
struct UInteractionWidget_C_On_InteractionText_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.On_AdditionalMessageLayer_Prepass_1
struct UInteractionWidget_C_On_AdditionalMessageLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.OnPrepass_SuitableWeaponImageVisibility
struct UInteractionWidget_C_OnPrepass_SuitableWeaponImageVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetInteractionText
struct UInteractionWidget_C_GetInteractionText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function InteractionWidget.InteractionWidget_C.OnPrepass_GetInteractionInfoVisibility
struct UInteractionWidget_C_OnPrepass_GetInteractionInfoVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.SetVehicleInteractionCondition
struct UInteractionWidget_C_SetVehicleInteractionCondition_Params
{
	class AActor*                                      Vehicle;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetInteractionInfoShadowOpacity
struct UInteractionWidget_C_GetInteractionInfoShadowOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetInteractInfoOpacityText
struct UInteractionWidget_C_GetInteractInfoOpacityText_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetInteractInfoOpacityKey
struct UInteractionWidget_C_GetInteractInfoOpacityKey_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetAdditionalMessage
struct UInteractionWidget_C_GetAdditionalMessage_Params
{
	struct FText                                       MessageText;                                              // (CPF_Parm, CPF_OutParm)
};

// Function InteractionWidget.InteractionWidget_C.GetAmmoWeaponItem
struct UInteractionWidget_C_GetAmmoWeaponItem_Params
{
	class UWeaponItem*                                 WeaponItem;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetWeaponIconVisible
struct UInteractionWidget_C_GetWeaponIconVisible_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetAttachableWeaponItem
struct UInteractionWidget_C_GetAttachableWeaponItem_Params
{
	class UWeaponItem*                                 WeaponItem;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetProperWeaponIcon
struct UInteractionWidget_C_GetProperWeaponIcon_Params
{
};

// Function InteractionWidget.InteractionWidget_C.IsInteractionItemAttachToCurrentWeapon
struct UInteractionWidget_C_IsInteractionItemAttachToCurrentWeapon_Params
{
	bool                                               Attachable;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.GetObjectNameText
struct UInteractionWidget_C_GetObjectNameText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function InteractionWidget.InteractionWidget_C.GetVerbText
struct UInteractionWidget_C_GetVerbText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function InteractionWidget.InteractionWidget_C.GetKeyNameText
struct UInteractionWidget_C_GetKeyNameText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function InteractionWidget.InteractionWidget_C.Tick
struct UInteractionWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionWidget.InteractionWidget_C.Construct
struct UInteractionWidget_C_Construct_Params
{
};

// Function InteractionWidget.InteractionWidget_C.BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UInteractionWidget_C_BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function InteractionWidget.InteractionWidget_C.ExecuteUbergraph_InteractionWidget
struct UInteractionWidget_C_ExecuteUbergraph_InteractionWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
