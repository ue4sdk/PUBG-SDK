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

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_ADSHoldingBreathCooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.UserConstructionScript");

	ABuff_ADSHoldingBreathCooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StopBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_ADSHoldingBreathCooldown_C::StopBuffBlueprint(bool* bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StopBuffBlueprint");

	ABuff_ADSHoldingBreathCooldown_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StartBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_ADSHoldingBreathCooldown_C::StartBuffBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StartBuffBlueprint");

	ABuff_ADSHoldingBreathCooldown_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.TickBuff
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_ADSHoldingBreathCooldown_C::TickBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.TickBuff");

	ABuff_ADSHoldingBreathCooldown_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_ADSHoldingBreathCooldown_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ReceiveTick");

	ABuff_ADSHoldingBreathCooldown_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ExecuteUbergraph_Buff_ADSHoldingBreathCooldown
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_ADSHoldingBreathCooldown_C::ExecuteUbergraph_Buff_ADSHoldingBreathCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ExecuteUbergraph_Buff_ADSHoldingBreathCooldown");

	ABuff_ADSHoldingBreathCooldown_C_ExecuteUbergraph_Buff_ADSHoldingBreathCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
