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

// Function Powerup_Base.Powerup_Base_C.CleanupTimers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APowerup_Base_C::CleanupTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Base.Powerup_Base_C.CleanupTimers");

	APowerup_Base_C_CleanupTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Base.Powerup_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APowerup_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Base.Powerup_Base_C.UserConstructionScript");

	APowerup_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APowerup_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay");

	APowerup_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Base.Powerup_Base_C.Drop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APowerup_Base_C::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Base.Powerup_Base_C.Drop");

	APowerup_Base_C_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Base.Powerup_Base_C.PlayAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Char_Ref                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APowerup_Base_C::PlayAnim(class ATslCharacter* Char_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Base.Powerup_Base_C.PlayAnim");

	APowerup_Base_C_PlayAnim_Params params;
	params.Char_Ref = Char_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APowerup_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed");

	APowerup_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APowerup_Base_C::ExecuteUbergraph_Powerup_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base");

	APowerup_Base_C_ExecuteUbergraph_Powerup_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
