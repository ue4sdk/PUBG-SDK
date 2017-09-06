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

// Function Powerup_AidKit.Powerup_AidKit_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APowerup_AidKit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_AidKit.Powerup_AidKit_C.UserConstructionScript");

	APowerup_AidKit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AidKit.Powerup_AidKit_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APowerup_AidKit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_AidKit.Powerup_AidKit_C.ReceiveBeginPlay");

	APowerup_AidKit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AidKit.Powerup_AidKit_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APowerup_AidKit_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_AidKit.Powerup_AidKit_C.ReceiveDestroyed");

	APowerup_AidKit_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AidKit.Powerup_AidKit_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APowerup_AidKit_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_AidKit.Powerup_AidKit_C.CustomEvent_1");

	APowerup_AidKit_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AidKit.Powerup_AidKit_C.ExecuteUbergraph_Powerup_AidKit
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APowerup_AidKit_C::ExecuteUbergraph_Powerup_AidKit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_AidKit.Powerup_AidKit_C.ExecuteUbergraph_Powerup_AidKit");

	APowerup_AidKit_C_ExecuteUbergraph_Powerup_AidKit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
