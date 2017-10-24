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

// Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS
struct UPlayerHeadWidget_C_AddAlphaWhenADS_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.On_HeadBorder_Prepass_1
struct UPlayerHeadWidget_C_On_HeadBorder_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName
struct UPlayerHeadWidget_C_IsEmptyPlayerName_Params
{
	bool                                               EmptyPlayerName;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.OnPrepass_2
struct UPlayerHeadWidget_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.OnPrepass_1
struct UPlayerHeadWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor
struct UPlayerHeadWidget_C_UpdateTextColor_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.Get_PlayerName_Text_1
struct UPlayerHeadWidget_C_Get_PlayerName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeaponGun
struct UPlayerHeadWidget_C_GetCurrentWeaponGun_Params
{
	class ATslWeapon_Gun*                              WeaponGun;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
struct UPlayerHeadWidget_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeapon
struct UPlayerHeadWidget_C_GetCurrentWeapon_Params
{
	class ATslWeapon*                                  CurrentWeapon;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetAmmoWeapon
struct UPlayerHeadWidget_C_GetAmmoWeapon_Params
{
	int                                                Ammo;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponIndex
struct UPlayerHeadWidget_C_GetWeaponIndex_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsCurrentWeapon
struct UPlayerHeadWidget_C_IsCurrentWeapon_Params
{
	bool                                               bCurrentWeapon;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponProcessor
struct UPlayerHeadWidget_C_GetWeaponProcessor_Params
{
	class AWeaponProcessor*                            WeaponProcessor;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponColor
struct UPlayerHeadWidget_C_GetTslWeaponColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateIcon
struct UPlayerHeadWidget_C_UpdateIcon_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.On_weaponImage_Prepass_1
struct UPlayerHeadWidget_C_On_weaponImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.On_WeaponImageSizeBox_Prepass_1
struct UPlayerHeadWidget_C_On_WeaponImageSizeBox_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponVisibility
struct UPlayerHeadWidget_C_GetTslWeaponVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      Visible;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetBoostGauge
struct UPlayerHeadWidget_C_GetBoostGauge_Params
{
	float                                              BoostGauge;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateBoostGauge
struct UPlayerHeadWidget_C_UpdateBoostGauge_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetBoostGauge
struct UPlayerHeadWidget_C_SetBoostGauge_Params
{
	float                                              BoostGauge;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.InitBoostGauge
struct UPlayerHeadWidget_C_InitBoostGauge_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy
struct UPlayerHeadWidget_C_IsGroggy_Params
{
	bool                                               IsGroggy;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent
struct UPlayerHeadWidget_C_GetHealthPercent_Params
{
	float                                              Health;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent
struct UPlayerHeadWidget_C_GetGroggyHealthPercent_Params
{
	float                                              GroggyHealth;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge
struct UPlayerHeadWidget_C_UpdateHealthGauge_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.Construct
struct UPlayerHeadWidget_C_Construct_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.Tick
struct UPlayerHeadWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC
struct UPlayerHeadWidget_C_SetCharacterIconPosition_UC_Params
{
	class Vector2D*                                    Pos_UC;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              IsHidden;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget
struct UPlayerHeadWidget_C_ExecuteUbergraph_PlayerHeadWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
