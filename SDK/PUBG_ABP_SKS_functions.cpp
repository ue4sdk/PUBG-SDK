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

// Function ABP_SKS.ABP_SKS_C.Reload1_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_SKS_C::Reload1_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_SKS.ABP_SKS_C.Reload1_Event_1");

	UABP_SKS_C_Reload1_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_SKS.ABP_SKS_C.Reload2_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_SKS_C::Reload2_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_SKS.ABP_SKS_C.Reload2_Event_1");

	UABP_SKS_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_SKS.ABP_SKS_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_SKS_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_SKS.ABP_SKS_C.BlueprintInitializeAnimation");

	UABP_SKS_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_SKS.ABP_SKS_C.WeaponFire_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_SKS_C::WeaponFire_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_SKS.ABP_SKS_C.WeaponFire_Event_1");

	UABP_SKS_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_SKS.ABP_SKS_C.CancelReload_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_SKS_C::CancelReload_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_SKS.ABP_SKS_C.CancelReload_Event_1");

	UABP_SKS_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_SKS.ABP_SKS_C.ExecuteUbergraph_ABP_SKS
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_SKS_C::ExecuteUbergraph_ABP_SKS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_SKS.ABP_SKS_C.ExecuteUbergraph_ABP_SKS");

	UABP_SKS_C_ExecuteUbergraph_ABP_SKS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
