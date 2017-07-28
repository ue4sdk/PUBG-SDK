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

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetTslCharacter
struct UWeaponSlotWidget_C_GetTslCharacter_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.CheckChangeAndUpdateTslWeaponInstance
struct UWeaponSlotWidget_C_CheckChangeAndUpdateTslWeaponInstance_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.UpdateIcon
struct UWeaponSlotWidget_C_UpdateIcon_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponIndex
struct UWeaponSlotWidget_C_GetWeaponIndex_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponImageSizeBox_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponImageSizeBox_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_ZeroingDistanceBlock_Prepass_1
struct UWeaponSlotWidget_C_On_ZeroingDistanceBlock_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCountBlock_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponHandsOnLoadedAmmoCountBlock_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIconBlock_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponHandsOnAmmoIconBlock_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCountBlock_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponHandsOnUnloadedAmmoCountBlock_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCountBlock_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponListLoadedAmmoCountBlock_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringModeBlock_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponFiringModeBlock_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIcon_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponHandsOnAmmoIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_weaponImage_Prepass_1
struct UWeaponSlotWidget_C_On_weaponImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCount_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponListLoadedAmmoCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringMode_Prepass_1
struct UWeaponSlotWidget_C_On_WeaponFiringMode_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.On_Zeroingdistance_Prepass_1
struct UWeaponSlotWidget_C_On_Zeroingdistance_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.OnPrepass_WeaponSlotVisiblity_BP
struct UWeaponSlotWidget_C_OnPrepass_WeaponSlotVisiblity_BP_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetZeroingDistanceVisibility
struct UWeaponSlotWidget_C_GetZeroingDistanceVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoCountColor
struct UWeaponSlotWidget_C_GetWeaponAmmoCountColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoVisiblity_SelectSlot
struct UWeaponSlotWidget_C_GetWeaponAmmoVisiblity_SelectSlot_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleDownAnimation
struct UWeaponSlotWidget_C_PlayScaleDownAnimation_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleUpAnimation
struct UWeaponSlotWidget_C_PlayScaleUpAnimation_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetAmmoImage
struct UWeaponSlotWidget_C_GetAmmoImage_Params
{
	class UTexture*                                    AmmoTexture;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmmoIconRatio;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCurrentWeaponAmmoVisibility_ListIn
struct UWeaponSlotWidget_C_GetCurrentWeaponAmmoVisibility_ListIn_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedThrowableWeapon
struct UWeaponSlotWidget_C_GetCastedThrowableWeapon_Params
{
	class ATslWeapon_Throwable*                        NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedMeleeWeapon
struct UWeaponSlotWidget_C_GetCastedMeleeWeapon_Params
{
	class ATslWeapon_Melee*                            ShooterMeleeWeapon;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedGunWeapon
struct UWeaponSlotWidget_C_GetCastedGunWeapon_Params
{
	class ATslWeapon_Gun*                              GunWeapon;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.IsCurrentWeapon
struct UWeaponSlotWidget_C_IsCurrentWeapon_Params
{
	bool                                               bCurrentWeapon;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmo
struct UWeaponSlotWidget_C_GetWeaponAmmo_Params
{
	int                                                Ammo;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmo
struct UWeaponSlotWidget_C_GetInventoryInAmmo_Params
{
	int                                                Ammo;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoVisibility
struct UWeaponSlotWidget_C_GetInventoryInAmmoVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetSlotSize
struct UWeaponSlotWidget_C_GetSlotSize_Params
{
	float                                              Ratio;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.SetSlotSize
struct UWeaponSlotWidget_C_SetSlotSize_Params
{
	float                                              Ratio;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoText
struct UWeaponSlotWidget_C_GetWeaponAmmoText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoText
struct UWeaponSlotWidget_C_GetInventoryInAmmoText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetAutoVisibility
struct UWeaponSlotWidget_C_GetAutoVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayHiddenAnimaton
struct UWeaponSlotWidget_C_PlayHiddenAnimaton_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayShowAnimation
struct UWeaponSlotWidget_C_PlayShowAnimation_Params
{
	bool                                               bIsWantoToNextHidden;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.Get_Zeroing_Text
struct UWeaponSlotWidget_C_Get_Zeroing_Text_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetFireModeText
struct UWeaponSlotWidget_C_GetFireModeText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.IsNoAmmo
struct UWeaponSlotWidget_C_IsNoAmmo_Params
{
	bool                                               bNoAmmo;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponVisibility
struct UWeaponSlotWidget_C_GetWeaponVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponColor
struct UWeaponSlotWidget_C_GetWeaponColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetIcon
struct UWeaponSlotWidget_C_GetIcon_Params
{
	class UTexture*                                    Tex;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationStart
struct UWeaponSlotWidget_C_ShowAnimationStart_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationFinish
struct UWeaponSlotWidget_C_ShowAnimationFinish_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_1
struct UWeaponSlotWidget_C_CustomEvent_1_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_2
struct UWeaponSlotWidget_C_CustomEvent_2_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.Construct
struct UWeaponSlotWidget_C_Construct_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoDecreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UWeaponSlotWidget_C_BndEvt__AmmoDecreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoIncreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UWeaponSlotWidget_C_BndEvt__AmmoIncreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoIncreasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UWeaponSlotWidget_C_BndEvt__UnloadedAmmoIncreasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoDecreasing_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UWeaponSlotWidget_C_BndEvt__UnloadedAmmoDecreasing_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistIncreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UWeaponSlotWidget_C_BndEvt__ZeroDistIncreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistDecreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UWeaponSlotWidget_C_BndEvt__ZeroDistDecreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.ExecuteUbergraph_WeaponSlotWidget
struct UWeaponSlotWidget_C_ExecuteUbergraph_WeaponSlotWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenEnd__DelegateSignature
struct UWeaponSlotWidget_C_HIddenEnd__DelegateSignature_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenStart__DelegateSignature
struct UWeaponSlotWidget_C_HIddenStart__DelegateSignature_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowEnd__DelegateSignature
struct UWeaponSlotWidget_C_ShowEnd__DelegateSignature_Params
{
};

// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowStart__DelegateSignature
struct UWeaponSlotWidget_C_ShowStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
