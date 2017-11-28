#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetItemDetailedName
struct UItemToolTipWidgetv2_Bp_C_GetItemDetailedName_Params
{
	class UEquipableItem*                              NewParam;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Name;                                                     // (CPF_Parm, CPF_OutParm)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.On_MagazineIcon_Prepass_1
struct UItemToolTipWidgetv2_Bp_C_On_MagazineIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetFiringRate
struct UItemToolTipWidgetv2_Bp_C_GetFiringRate_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AmmoClip;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FullReloadingTime;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FringRate;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetShooterWeapon
struct UItemToolTipWidgetv2_Bp_C_GetShooterWeapon_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslWeapon*                                  ShooterWeapon;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.OnUpdateEquipmentSlotItemToolTip
struct UItemToolTipWidgetv2_Bp_C_OnUpdateEquipmentSlotItemToolTip_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.OnUpdateVicinityOrInventorySlotItemToolTip
struct UItemToolTipWidgetv2_Bp_C_OnUpdateVicinityOrInventorySlotItemToolTip_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEquipableItem*                              EquipmentSlotItem;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.Clear
struct UItemToolTipWidgetv2_Bp_C_Clear_Params
{
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetAttachedAmmo
struct UItemToolTipWidgetv2_Bp_C_GetAttachedAmmo_Params
{
	class UWeaponItem*                                 WeaponItem;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AmmoClip;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetAmmo
struct UItemToolTipWidgetv2_Bp_C_GetAmmo_Params
{
	class UWeaponItem*                                 WeaponItem;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AmmoClip;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetAttachedStability
struct UItemToolTipWidgetv2_Bp_C_GetAttachedStability_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Accuracy;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetStability
struct UItemToolTipWidgetv2_Bp_C_GetStability_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Accuracy;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetWeaponEffectiveRange
struct UItemToolTipWidgetv2_Bp_C_GetWeaponEffectiveRange_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EffectRange;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetWeaponPower
struct UItemToolTipWidgetv2_Bp_C_GetWeaponPower_Params
{
	class ATslWeapon*                                  ShooterWeapon;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.FadeIn
struct UItemToolTipWidgetv2_Bp_C_FadeIn_Params
{
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateDefaultInfo
struct UItemToolTipWidgetv2_Bp_C_UpdateDefaultInfo_Params
{
	TScriptInterface<class USlotInterface>             Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.SetItemByInterface
struct UItemToolTipWidgetv2_Bp_C_SetItemByInterface_Params
{
	TScriptInterface<class USlotInterface>             Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateItemDetailInfo
struct UItemToolTipWidgetv2_Bp_C_UpdateItemDetailInfo_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.Construct
struct UItemToolTipWidgetv2_Bp_C_Construct_Params
{
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateSlotInfo
struct UItemToolTipWidgetv2_Bp_C_UpdateSlotInfo_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateEquipmentSlotItemToolTip
struct UItemToolTipWidgetv2_Bp_C_UpdateEquipmentSlotItemToolTip_Params
{
	class UEquipableItem**                             EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateVicinityOrInventorySlotItemToolTip
struct UItemToolTipWidgetv2_Bp_C_UpdateVicinityOrInventorySlotItemToolTip_Params
{
	class UEquipableItem**                             EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEquipableItem**                             EquipmentSlotItem;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.ExecuteUbergraph_ItemToolTipWidgetv2_Bp
struct UItemToolTipWidgetv2_Bp_C_ExecuteUbergraph_ItemToolTipWidgetv2_Bp_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
