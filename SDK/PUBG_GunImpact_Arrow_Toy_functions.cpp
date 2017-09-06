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

// Function GunImpact_Arrow_Toy.GunImpact_Arrow_Toy_C.CheckParentValidity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGunImpact_Arrow_Toy_C::CheckParentValidity()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow_Toy.GunImpact_Arrow_Toy_C.CheckParentValidity");

	AGunImpact_Arrow_Toy_C_CheckParentValidity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Arrow_Toy.GunImpact_Arrow_Toy_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGunImpact_Arrow_Toy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow_Toy.GunImpact_Arrow_Toy_C.UserConstructionScript");

	AGunImpact_Arrow_Toy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Arrow_Toy.GunImpact_Arrow_Toy_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AGunImpact_Arrow_Toy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow_Toy.GunImpact_Arrow_Toy_C.ReceiveBeginPlay");

	AGunImpact_Arrow_Toy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Arrow_Toy.GunImpact_Arrow_Toy_C.ExecuteUbergraph_GunImpact_Arrow_Toy
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGunImpact_Arrow_Toy_C::ExecuteUbergraph_GunImpact_Arrow_Toy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow_Toy.GunImpact_Arrow_Toy_C.ExecuteUbergraph_GunImpact_Arrow_Toy");

	AGunImpact_Arrow_Toy_C_ExecuteUbergraph_GunImpact_Arrow_Toy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
