// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_M9.ABP_Weapon_M9_C.SlideReleaseFunc
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M9_C::SlideReleaseFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M9.ABP_Weapon_M9_C.SlideReleaseFunc");

	UABP_Weapon_M9_C_SlideReleaseFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.Handle_SlideRelease
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M9_C::Handle_SlideRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M9.ABP_Weapon_M9_C.Handle_SlideRelease");

	UABP_Weapon_M9_C_Handle_SlideRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.Handle_Fire
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M9_C::Handle_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M9.ABP_Weapon_M9_C.Handle_Fire");

	UABP_Weapon_M9_C_Handle_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_M9_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M9.ABP_Weapon_M9_C.BlueprintUpdateAnimation");

	UABP_Weapon_M9_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Weapon_M9_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M9.ABP_Weapon_M9_C.BlueprintInitializeAnimation");

	UABP_Weapon_M9_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.WeaponFire_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M9_C::WeaponFire_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M9.ABP_Weapon_M9_C.WeaponFire_Event_1");

	UABP_Weapon_M9_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.Reload2_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_M9_C::Reload2_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M9.ABP_Weapon_M9_C.Reload2_Event_1");

	UABP_Weapon_M9_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.ExecuteUbergraph_ABP_Weapon_M9
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_M9_C::ExecuteUbergraph_ABP_Weapon_M9(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_M9.ABP_Weapon_M9_C.ExecuteUbergraph_ABP_Weapon_M9");

	UABP_Weapon_M9_C_ExecuteUbergraph_ABP_Weapon_M9_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
