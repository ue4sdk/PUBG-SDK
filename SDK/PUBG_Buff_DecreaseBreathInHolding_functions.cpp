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

// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_DecreaseBreathInHolding_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.UserConstructionScript");

	ABuff_DecreaseBreathInHolding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_DecreaseBreathInHolding_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.ReceiveTick");

	ABuff_DecreaseBreathInHolding_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.TickBuff
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_DecreaseBreathInHolding_C::TickBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.TickBuff");

	ABuff_DecreaseBreathInHolding_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.ExecuteUbergraph_Buff_DecreaseBreathInHolding
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_DecreaseBreathInHolding_C::ExecuteUbergraph_Buff_DecreaseBreathInHolding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.ExecuteUbergraph_Buff_DecreaseBreathInHolding");

	ABuff_DecreaseBreathInHolding_C_ExecuteUbergraph_Buff_DecreaseBreathInHolding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
