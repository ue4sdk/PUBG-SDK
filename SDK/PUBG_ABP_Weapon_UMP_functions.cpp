// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.FireSelect_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_UMP_C::FireSelect_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.FireSelect_Event");

	UABP_Weapon_UMP_C_FireSelect_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.Reload1_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_UMP_C::Reload1_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.Reload1_Event");

	UABP_Weapon_UMP_C_Reload1_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.WeaponFire_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_UMP_C::WeaponFire_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.WeaponFire_Event");

	UABP_Weapon_UMP_C_WeaponFire_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Weapon_UMP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.BlueprintInitializeAnimation");

	UABP_Weapon_UMP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.Reload2_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_UMP_C::Reload2_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.Reload2_Event");

	UABP_Weapon_UMP_C_Reload2_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.CancelReload_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_UMP_C::CancelReload_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.CancelReload_Event_1");

	UABP_Weapon_UMP_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.ExecuteUbergraph_ABP_Weapon_UMP
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_UMP_C::ExecuteUbergraph_ABP_Weapon_UMP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.ExecuteUbergraph_ABP_Weapon_UMP");

	UABP_Weapon_UMP_C_ExecuteUbergraph_ABP_Weapon_UMP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
