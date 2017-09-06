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

// Function Powerup_Painkillers.Powerup_Painkillers_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APowerup_Painkillers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Painkillers.Powerup_Painkillers_C.UserConstructionScript");

	APowerup_Painkillers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Painkillers.Powerup_Painkillers_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APowerup_Painkillers_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Painkillers.Powerup_Painkillers_C.ReceiveBeginPlay");

	APowerup_Painkillers_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Painkillers.Powerup_Painkillers_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APowerup_Painkillers_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Painkillers.Powerup_Painkillers_C.CustomEvent_1");

	APowerup_Painkillers_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Painkillers.Powerup_Painkillers_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APowerup_Painkillers_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Painkillers.Powerup_Painkillers_C.ReceiveDestroyed");

	APowerup_Painkillers_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Painkillers.Powerup_Painkillers_C.ExecuteUbergraph_Powerup_Painkillers
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APowerup_Painkillers_C::ExecuteUbergraph_Powerup_Painkillers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Painkillers.Powerup_Painkillers_C.ExecuteUbergraph_Powerup_Painkillers");

	APowerup_Painkillers_C_ExecuteUbergraph_Powerup_Painkillers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
