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

// Function ABP_Weapon_1912.ABP_Weapon_1911_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_1911_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_1912.ABP_Weapon_1911_C.BlueprintUpdateAnimation");

	UABP_Weapon_1911_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_1912.ABP_Weapon_1911_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Weapon_1911_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_1912.ABP_Weapon_1911_C.BlueprintInitializeAnimation");

	UABP_Weapon_1911_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_1912.ABP_Weapon_1911_C.WeaponFire_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_1911_C::WeaponFire_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_1912.ABP_Weapon_1911_C.WeaponFire_Event_1");

	UABP_Weapon_1911_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_1912.ABP_Weapon_1911_C.ReleaseCatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_1911_C::ReleaseCatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_1912.ABP_Weapon_1911_C.ReleaseCatch");

	UABP_Weapon_1911_C_ReleaseCatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_1912.ABP_Weapon_1911_C.ExecuteUbergraph_ABP_Weapon_1912
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Weapon_1911_C::ExecuteUbergraph_ABP_Weapon_1912(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_1912.ABP_Weapon_1911_C.ExecuteUbergraph_ABP_Weapon_1912");

	UABP_Weapon_1911_C_ExecuteUbergraph_ABP_Weapon_1912_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
