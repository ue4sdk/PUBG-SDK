// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetItemDetailedName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UEquipableItem*          NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Name                           (CPF_Parm, CPF_OutParm)

void UItemToolTipWidget_Bp_C::GetItemDetailedName(class UEquipableItem* NewParam, struct FText* Name)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x63eab33b);

	UItemToolTipWidget_Bp_C_GetItemDetailedName_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.On_MagazineIcon_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::On_MagazineIcon_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa9421abd);

	UItemToolTipWidget_Bp_C_On_MagazineIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetFiringRate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            AmmoClip                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FullReloadingTime              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FringRate                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetFiringRate(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, int AmmoClip, float FullReloadingTime, float* FringRate)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1f79c05c);

	UItemToolTipWidget_Bp_C_GetFiringRate_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;
	params.AmmoClip = AmmoClip;
	params.FullReloadingTime = FullReloadingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FringRate != nullptr)
		*FringRate = params.FringRate;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetShooterWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslWeapon*              ShooterWeapon                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetShooterWeapon(class UEquipableItem* EquipableItem, class ATslWeapon** ShooterWeapon, class ATslWeapon_Trajectory** ShooterWeapon_Trajectory)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x506a1c99);

	UItemToolTipWidget_Bp_C_GetShooterWeapon_Params params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterWeapon != nullptr)
		*ShooterWeapon = params.ShooterWeapon;
	if (ShooterWeapon_Trajectory != nullptr)
		*ShooterWeapon_Trajectory = params.ShooterWeapon_Trajectory;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateEquipmentSlotItemToolTip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::OnUpdateEquipmentSlotItemToolTip(class UEquipableItem* EquipableItem)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf02f2ceb);

	UItemToolTipWidget_Bp_C_OnUpdateEquipmentSlotItemToolTip_Params params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateVicinityOrInventorySlotItemToolTip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEquipableItem*          EquipmentSlotItem              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::OnUpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem* EquipableItem, class UEquipableItem* EquipmentSlotItem)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdfd83389);

	UItemToolTipWidget_Bp_C_OnUpdateVicinityOrInventorySlotItemToolTip_Params params;
	params.EquipableItem = EquipableItem;
	params.EquipmentSlotItem = EquipmentSlotItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Clear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Bp_C::Clear()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5af6fe0);

	UItemToolTipWidget_Bp_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWeaponItem*             WeaponItem                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            AmmoClip                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetAttachedAmmo(class UWeaponItem* WeaponItem, int* AmmoClip)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x28e8cc81);

	UItemToolTipWidget_Bp_C_GetAttachedAmmo_Params params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoClip != nullptr)
		*AmmoClip = params.AmmoClip;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponItem*             WeaponItem                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            AmmoClip                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetAmmo(class UWeaponItem* WeaponItem, int* AmmoClip)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfc7f9f71);

	UItemToolTipWidget_Bp_C_GetAmmo_Params params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoClip != nullptr)
		*AmmoClip = params.AmmoClip;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedStability
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Accuracy                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetAttachedStability(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* Accuracy)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x49ba5fc4);

	UItemToolTipWidget_Bp_C_GetAttachedStability_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetStability
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Accuracy                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetStability(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* Accuracy)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf372a1d4);

	UItemToolTipWidget_Bp_C_GetStability_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponEffectiveRange
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EffectRange                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetWeaponEffectiveRange(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* EffectRange)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcefbaf0d);

	UItemToolTipWidget_Bp_C_GetWeaponEffectiveRange_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectRange != nullptr)
		*EffectRange = params.EffectRange;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponPower
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslWeapon*              ShooterWeapon                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Damage                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetWeaponPower(class ATslWeapon* ShooterWeapon, float* Damage)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x308d41b2);

	UItemToolTipWidget_Bp_C_GetWeaponPower_Params params;
	params.ShooterWeapon = ShooterWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.FadeIn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Bp_C::FadeIn()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdca56656);

	UItemToolTipWidget_Bp_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateDefaultInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateDefaultInfo(const TScriptInterface<class USlotInterface>& Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa9fe25b5);

	UItemToolTipWidget_Bp_C_UpdateDefaultInfo_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.SetItemByInterface
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::SetItemByInterface(const TScriptInterface<class USlotInterface>& Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5fef501a);

	UItemToolTipWidget_Bp_C_SetItemByInterface_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateItemDetailInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateItemDetailInfo(class UItem* Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x801434f0);

	UItemToolTipWidget_Bp_C_UpdateItemDetailInfo_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemToolTipWidget_Bp_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbd2274f8);

	UItemToolTipWidget_Bp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateSlotInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateSlotInfo(TScriptInterface<class USlotInterface>* SlotInterface)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7c7c8e66);

	UItemToolTipWidget_Bp_C_UpdateSlotInfo_Params params;
	params.SlotInterface = SlotInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateEquipmentSlotItemToolTip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem**         EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateEquipmentSlotItemToolTip(class UEquipableItem** EquipableItem)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3c43960c);

	UItemToolTipWidget_Bp_C_UpdateEquipmentSlotItemToolTip_Params params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateVicinityOrInventorySlotItemToolTip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UEquipableItem**         EquipableItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEquipableItem**         EquipmentSlotItem              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem** EquipableItem, class UEquipableItem** EquipmentSlotItem)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x592fa2aa);

	UItemToolTipWidget_Bp_C_UpdateVicinityOrInventorySlotItemToolTip_Params params;
	params.EquipableItem = EquipableItem;
	params.EquipmentSlotItem = EquipmentSlotItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ExecuteUbergraph_ItemToolTipWidget_Bp
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Bp_C::ExecuteUbergraph_ItemToolTipWidget_Bp(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa182b4ce);

	UItemToolTipWidget_Bp_C_ExecuteUbergraph_ItemToolTipWidget_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
