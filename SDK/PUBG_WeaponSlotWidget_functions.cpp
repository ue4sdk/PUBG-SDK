// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSlotWidget.WeaponSlotWidget_C.GetTslCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetTslCharacter(class ATslCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetTslCharacter");

	UWeaponSlotWidget_C_GetTslCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.CheckChangeAndUpdateTslWeaponInstance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::CheckChangeAndUpdateTslWeaponInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.CheckChangeAndUpdateTslWeaponInstance");

	UWeaponSlotWidget_C_CheckChangeAndUpdateTslWeaponInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.UpdateIcon");

	UWeaponSlotWidget_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetWeaponIndex(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponIndex");

	UWeaponSlotWidget_C_GetWeaponIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotIndex != nullptr)
		*SlotIndex = params.SlotIndex;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponImageSizeBox_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponImageSizeBox_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponImageSizeBox_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponImageSizeBox_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_ZeroingDistanceBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_ZeroingDistanceBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_ZeroingDistanceBlock_Prepass_1");

	UWeaponSlotWidget_C_On_ZeroingDistanceBlock_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCountBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnLoadedAmmoCountBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCountBlock_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponHandsOnLoadedAmmoCountBlock_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIconBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnAmmoIconBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIconBlock_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponHandsOnAmmoIconBlock_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCountBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnUnloadedAmmoCountBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCountBlock_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponHandsOnUnloadedAmmoCountBlock_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCountBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponListLoadedAmmoCountBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCountBlock_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponListLoadedAmmoCountBlock_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringModeBlock_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponFiringModeBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringModeBlock_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponFiringModeBlock_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnUnloadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnLoadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIcon_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponHandsOnAmmoIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponHandsOnAmmoIcon_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponHandsOnAmmoIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_weaponImage_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_weaponImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_weaponImage_Prepass_1");

	UWeaponSlotWidget_C_On_weaponImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponListLoadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponListLoadedAmmoCount_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponListLoadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringMode_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_WeaponFiringMode_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_WeaponFiringMode_Prepass_1");

	UWeaponSlotWidget_C_On_WeaponFiringMode_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.On_Zeroingdistance_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::On_Zeroingdistance_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.On_Zeroingdistance_Prepass_1");

	UWeaponSlotWidget_C_On_Zeroingdistance_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.OnPrepass_WeaponSlotVisiblity_BP
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::OnPrepass_WeaponSlotVisiblity_BP(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.OnPrepass_WeaponSlotVisiblity_BP");

	UWeaponSlotWidget_C_OnPrepass_WeaponSlotVisiblity_BP_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetZeroingDistanceVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UWeaponSlotWidget_C::GetZeroingDistanceVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetZeroingDistanceVisibility");

	UWeaponSlotWidget_C_GetZeroingDistanceVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoCountColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UWeaponSlotWidget_C::GetWeaponAmmoCountColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoCountColor");

	UWeaponSlotWidget_C_GetWeaponAmmoCountColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoVisiblity_SelectSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UWeaponSlotWidget_C::GetWeaponAmmoVisiblity_SelectSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoVisiblity_SelectSlot");

	UWeaponSlotWidget_C_GetWeaponAmmoVisiblity_SelectSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleDownAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::PlayScaleDownAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleDownAnimation");

	UWeaponSlotWidget_C_PlayScaleDownAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleUpAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::PlayScaleUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.PlayScaleUpAnimation");

	UWeaponSlotWidget_C_PlayScaleUpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetAmmoImage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture*                AmmoTexture                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AmmoIconRatio                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetAmmoImage(class UTexture** AmmoTexture, float* AmmoIconRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetAmmoImage");

	UWeaponSlotWidget_C_GetAmmoImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoTexture != nullptr)
		*AmmoTexture = params.AmmoTexture;
	if (AmmoIconRatio != nullptr)
		*AmmoIconRatio = params.AmmoIconRatio;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCurrentWeaponAmmoVisibility_ListIn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UWeaponSlotWidget_C::GetCurrentWeaponAmmoVisibility_ListIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetCurrentWeaponAmmoVisibility_ListIn");

	UWeaponSlotWidget_C_GetCurrentWeaponAmmoVisibility_ListIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedThrowableWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Throwable*    NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetCastedThrowableWeapon(class ATslWeapon_Throwable** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedThrowableWeapon");

	UWeaponSlotWidget_C_GetCastedThrowableWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedMeleeWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Melee*        ShooterMeleeWeapon             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetCastedMeleeWeapon(class ATslWeapon_Melee** ShooterMeleeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedMeleeWeapon");

	UWeaponSlotWidget_C_GetCastedMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterMeleeWeapon != nullptr)
		*ShooterMeleeWeapon = params.ShooterMeleeWeapon;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedGunWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Gun*          GunWeapon                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetCastedGunWeapon(class ATslWeapon_Gun** GunWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetCastedGunWeapon");

	UWeaponSlotWidget_C_GetCastedGunWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GunWeapon != nullptr)
		*GunWeapon = params.GunWeapon;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.IsCurrentWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCurrentWeapon                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::IsCurrentWeapon(bool* bCurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.IsCurrentWeapon");

	UWeaponSlotWidget_C_IsCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCurrentWeapon != nullptr)
		*bCurrentWeapon = params.bCurrentWeapon;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Ammo                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetWeaponAmmo(int* Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmo");

	UWeaponSlotWidget_C_GetWeaponAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Ammo                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetInventoryInAmmo(int* Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmo");

	UWeaponSlotWidget_C_GetInventoryInAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UWeaponSlotWidget_C::GetInventoryInAmmoVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoVisibility");

	UWeaponSlotWidget_C_GetInventoryInAmmoVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetSlotSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Ratio                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetSlotSize(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetSlotSize");

	UWeaponSlotWidget_C_GetSlotSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.SetSlotSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Ratio                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::SetSlotSize(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.SetSlotSize");

	UWeaponSlotWidget_C_SetSlotSize_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponSlotWidget_C::GetWeaponAmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponAmmoText");

	UWeaponSlotWidget_C_GetWeaponAmmoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponSlotWidget_C::GetInventoryInAmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetInventoryInAmmoText");

	UWeaponSlotWidget_C_GetInventoryInAmmoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetAutoVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UWeaponSlotWidget_C::GetAutoVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetAutoVisibility");

	UWeaponSlotWidget_C_GetAutoVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayHiddenAnimaton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::PlayHiddenAnimaton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.PlayHiddenAnimaton");

	UWeaponSlotWidget_C_PlayHiddenAnimaton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.PlayShowAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsWantoToNextHidden           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::PlayShowAnimation(bool bIsWantoToNextHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.PlayShowAnimation");

	UWeaponSlotWidget_C_PlayShowAnimation_Params params;
	params.bIsWantoToNextHidden = bIsWantoToNextHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.Get_Zeroing_Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponSlotWidget_C::Get_Zeroing_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.Get_Zeroing_Text");

	UWeaponSlotWidget_C_Get_Zeroing_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetFireModeText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponSlotWidget_C::GetFireModeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetFireModeText");

	UWeaponSlotWidget_C_GetFireModeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.IsNoAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bNoAmmo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::IsNoAmmo(bool* bNoAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.IsNoAmmo");

	UWeaponSlotWidget_C_IsNoAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNoAmmo != nullptr)
		*bNoAmmo = params.bNoAmmo;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UWeaponSlotWidget_C::GetWeaponVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponVisibility");

	UWeaponSlotWidget_C_GetWeaponVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UWeaponSlotWidget_C::GetWeaponColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetWeaponColor");

	UWeaponSlotWidget_C_GetWeaponColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.GetIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture*                Tex                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::GetIcon(class UTexture** Tex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.GetIcon");

	UWeaponSlotWidget_C_GetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tex != nullptr)
		*Tex = params.Tex;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::ShowAnimationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationStart");

	UWeaponSlotWidget_C_ShowAnimationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationFinish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::ShowAnimationFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ShowAnimationFinish");

	UWeaponSlotWidget_C_ShowAnimationFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_1");

	UWeaponSlotWidget_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.CustomEvent_2");

	UWeaponSlotWidget_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.Construct");

	UWeaponSlotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoDecreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__AmmoDecreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoDecreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UWeaponSlotWidget_C_BndEvt__AmmoDecreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoIncreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__AmmoIncreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__AmmoIncreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UWeaponSlotWidget_C_BndEvt__AmmoIncreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoIncreasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__UnloadedAmmoIncreasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoIncreasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UWeaponSlotWidget_C_BndEvt__UnloadedAmmoIncreasing_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoDecreasing_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__UnloadedAmmoDecreasing_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__UnloadedAmmoDecreasing_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UWeaponSlotWidget_C_BndEvt__UnloadedAmmoDecreasing_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistIncreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__ZeroDistIncreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistIncreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UWeaponSlotWidget_C_BndEvt__ZeroDistIncreasing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistDecreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::BndEvt__ZeroDistDecreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.BndEvt__ZeroDistDecreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UWeaponSlotWidget_C_BndEvt__ZeroDistDecreasing_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ExecuteUbergraph_WeaponSlotWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponSlotWidget_C::ExecuteUbergraph_WeaponSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ExecuteUbergraph_WeaponSlotWidget");

	UWeaponSlotWidget_C_ExecuteUbergraph_WeaponSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenEnd__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::HIddenEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenEnd__DelegateSignature");

	UWeaponSlotWidget_C_HIddenEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::HIddenStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.HIddenStart__DelegateSignature");

	UWeaponSlotWidget_C_HIddenStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowEnd__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::ShowEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ShowEnd__DelegateSignature");

	UWeaponSlotWidget_C_ShowEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotWidget.WeaponSlotWidget_C.ShowStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSlotWidget_C::ShowStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotWidget.WeaponSlotWidget_C.ShowStart__DelegateSignature");

	UWeaponSlotWidget_C_ShowStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
