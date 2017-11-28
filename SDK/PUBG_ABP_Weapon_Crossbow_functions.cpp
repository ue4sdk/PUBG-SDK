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

// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Weapon_Crossbow_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb44c85fc);

	UABP_Weapon_Crossbow_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.Reload2_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Crossbow_C::Reload2_Event_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4dc07f1f);

	UABP_Weapon_Crossbow_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.WeaponFire_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Crossbow_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbab117ae);

	UABP_Weapon_Crossbow_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.CancelReload_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Crossbow_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa31c6a87);

	UABP_Weapon_Crossbow_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.ExecuteUbergraph_ABP_Weapon_Crossbow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_Crossbow_C::ExecuteUbergraph_ABP_Weapon_Crossbow(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9bc5f148);

	UABP_Weapon_Crossbow_C_ExecuteUbergraph_ABP_Weapon_Crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
