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

// Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Weapon_Saiga_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.BlueprintInitializeAnimation");

	UABP_Weapon_Saiga_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.WeaponFire_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Saiga_C::WeaponFire_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.WeaponFire_Event_1");

	UABP_Weapon_Saiga_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.Reload1_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Saiga_C::Reload1_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.Reload1_Event_1");

	UABP_Weapon_Saiga_C_Reload1_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.Reload2_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Saiga_C::Reload2_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.Reload2_Event_1");

	UABP_Weapon_Saiga_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.CancelReload_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Saiga_C::CancelReload_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.CancelReload_Event_1");

	UABP_Weapon_Saiga_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.ExecuteUbergraph_ABP_Weapon_Saiga
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_Saiga_C::ExecuteUbergraph_ABP_Weapon_Saiga(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.ExecuteUbergraph_ABP_Weapon_Saiga");

	UABP_Weapon_Saiga_C_ExecuteUbergraph_ABP_Weapon_Saiga_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
