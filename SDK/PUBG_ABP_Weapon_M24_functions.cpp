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

// Function ABP_Weapon_M24.ABP_Weapon_M24_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_M24_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M24.ABP_Weapon_M24_C.BlueprintUpdateAnimation");

	UABP_Weapon_M24_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M24.ABP_Weapon_M24_C.WeaponFireCycle_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M24_C::WeaponFireCycle_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M24.ABP_Weapon_M24_C.WeaponFireCycle_Event_1");

	UABP_Weapon_M24_C_WeaponFireCycle_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M24.ABP_Weapon_M24_C.Reload2_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M24_C::Reload2_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M24.ABP_Weapon_M24_C.Reload2_Event_1");

	UABP_Weapon_M24_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M24.ABP_Weapon_M24_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Weapon_M24_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M24.ABP_Weapon_M24_C.BlueprintInitializeAnimation");

	UABP_Weapon_M24_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M24.ABP_Weapon_M24_C.AnimNotify_ShellEject
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M24_C::AnimNotify_ShellEject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M24.ABP_Weapon_M24_C.AnimNotify_ShellEject");

	UABP_Weapon_M24_C_AnimNotify_ShellEject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M24.ABP_Weapon_M24_C.Reload1_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M24_C::Reload1_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M24.ABP_Weapon_M24_C.Reload1_Event_1");

	UABP_Weapon_M24_C_Reload1_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M24.ABP_Weapon_M24_C.CancelReload_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M24_C::CancelReload_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M24.ABP_Weapon_M24_C.CancelReload_Event_1");

	UABP_Weapon_M24_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M24.ABP_Weapon_M24_C.ExecuteUbergraph_ABP_Weapon_M24
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_M24_C::ExecuteUbergraph_ABP_Weapon_M24(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M24.ABP_Weapon_M24_C.ExecuteUbergraph_ABP_Weapon_M24");

	UABP_Weapon_M24_C_ExecuteUbergraph_ABP_Weapon_M24_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
