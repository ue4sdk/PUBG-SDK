// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::AddAlphaWhenADS(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS");

	UPlayerHeadWidget_C_AddAlphaWhenADS_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.On_HeadBorder_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::On_HeadBorder_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.On_HeadBorder_Prepass_1");

	UPlayerHeadWidget_C_On_HeadBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           EmptyPlayerName                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::IsEmptyPlayerName(bool* EmptyPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName");

	UPlayerHeadWidget_C_IsEmptyPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EmptyPlayerName != nullptr)
		*EmptyPlayerName = params.EmptyPlayerName;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.OnPrepass_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::OnPrepass_2(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.OnPrepass_2");

	UPlayerHeadWidget_C_OnPrepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.OnPrepass_1");

	UPlayerHeadWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::UpdateTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor");

	UPlayerHeadWidget_C_UpdateTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.Get_PlayerName_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UPlayerHeadWidget_C::Get_PlayerName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.Get_PlayerName_Text_1");

	UPlayerHeadWidget_C_Get_PlayerName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeaponGun
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Gun*          WeaponGun                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetCurrentWeaponGun(class ATslWeapon_Gun** WeaponGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeaponGun");

	UPlayerHeadWidget_C_GetCurrentWeaponGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponGun != nullptr)
		*WeaponGun = params.WeaponGun;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::On_WeaponHandsOnLoadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1");

	UPlayerHeadWidget_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon*              CurrentWeapon                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetCurrentWeapon(class ATslWeapon** CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeapon");

	UPlayerHeadWidget_C_GetCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWeapon != nullptr)
		*CurrentWeapon = params.CurrentWeapon;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetAmmoWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Ammo                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetAmmoWeapon(int* Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetAmmoWeapon");

	UPlayerHeadWidget_C_GetAmmoWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetWeaponIndex(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponIndex");

	UPlayerHeadWidget_C_GetWeaponIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotIndex != nullptr)
		*SlotIndex = params.SlotIndex;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsCurrentWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCurrentWeapon                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::IsCurrentWeapon(bool* bCurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.IsCurrentWeapon");

	UPlayerHeadWidget_C_IsCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCurrentWeapon != nullptr)
		*bCurrentWeapon = params.bCurrentWeapon;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponProcessor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AWeaponProcessor*        WeaponProcessor                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetWeaponProcessor(class AWeaponProcessor** WeaponProcessor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponProcessor");

	UPlayerHeadWidget_C_GetWeaponProcessor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponProcessor != nullptr)
		*WeaponProcessor = params.WeaponProcessor;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UPlayerHeadWidget_C::GetTslWeaponColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponColor");

	UPlayerHeadWidget_C_GetTslWeaponColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateIcon");

	UPlayerHeadWidget_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.On_weaponImage_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::On_weaponImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.On_weaponImage_Prepass_1");

	UPlayerHeadWidget_C_On_weaponImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.On_WeaponImageSizeBox_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::On_WeaponImageSizeBox_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.On_WeaponImageSizeBox_Prepass_1");

	UPlayerHeadWidget_C_On_WeaponImageSizeBox_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  Visible                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetTslWeaponVisibility(TEnumAsByte<ESlateVisibility>* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponVisibility");

	UPlayerHeadWidget_C_GetTslWeaponVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetBoostGauge
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          BoostGauge                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetBoostGauge(float* BoostGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetBoostGauge");

	UPlayerHeadWidget_C_GetBoostGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoostGauge != nullptr)
		*BoostGauge = params.BoostGauge;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateBoostGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::UpdateBoostGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateBoostGauge");

	UPlayerHeadWidget_C_UpdateBoostGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetBoostGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          BoostGauge                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::SetBoostGauge(float BoostGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetBoostGauge");

	UPlayerHeadWidget_C_SetBoostGauge_Params params;
	params.BoostGauge = BoostGauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.InitBoostGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::InitBoostGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.InitBoostGauge");

	UPlayerHeadWidget_C_InitBoostGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsGroggy                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::IsGroggy(bool* IsGroggy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy");

	UPlayerHeadWidget_C_IsGroggy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGroggy != nullptr)
		*IsGroggy = params.IsGroggy;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Health                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetHealthPercent(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent");

	UPlayerHeadWidget_C_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          GroggyHealth                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetGroggyHealthPercent(float* GroggyHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent");

	UPlayerHeadWidget_C_GetGroggyHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroggyHealth != nullptr)
		*GroggyHealth = params.GroggyHealth;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::UpdateHealthGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge");

	UPlayerHeadWidget_C_UpdateHealthGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.Construct");

	UPlayerHeadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.Tick");

	UPlayerHeadWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D*                Pos_UC                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          IsHidden                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::SetCharacterIconPosition_UC(class Vector2D* Pos_UC, bool* IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC");

	UPlayerHeadWidget_C_SetCharacterIconPosition_UC_Params params;
	params.Pos_UC = Pos_UC;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::ExecuteUbergraph_PlayerHeadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget");

	UPlayerHeadWidget_C_ExecuteUbergraph_PlayerHeadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
