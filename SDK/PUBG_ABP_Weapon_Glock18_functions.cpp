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

// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.Handle_FireSelector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Glock18_C::Handle_FireSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.Handle_FireSelector");

	UABP_Weapon_Glock18_C_Handle_FireSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.Handle_Fire
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Glock18_C::Handle_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.Handle_Fire");

	UABP_Weapon_Glock18_C_Handle_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_Glock18_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.BlueprintUpdateAnimation");

	UABP_Weapon_Glock18_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.WeaponFire_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Glock18_C::WeaponFire_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.WeaponFire_Event_1");

	UABP_Weapon_Glock18_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.Reload2_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Glock18_C::Reload2_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.Reload2_Event_1");

	UABP_Weapon_Glock18_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Weapon_Glock18_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.BlueprintInitializeAnimation");

	UABP_Weapon_Glock18_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.FireSelect_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Glock18_C::FireSelect_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.FireSelect_Event");

	UABP_Weapon_Glock18_C_FireSelect_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.SlideRelease
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Glock18_C::SlideRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.SlideRelease");

	UABP_Weapon_Glock18_C_SlideRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.ExecuteUbergraph_ABP_Weapon_Glock18
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_Glock18_C::ExecuteUbergraph_ABP_Weapon_Glock18(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.ExecuteUbergraph_ABP_Weapon_Glock18");

	UABP_Weapon_Glock18_C_ExecuteUbergraph_ABP_Weapon_Glock18_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
