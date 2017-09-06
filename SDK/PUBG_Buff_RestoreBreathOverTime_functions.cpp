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

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABuff_RestoreBreathOverTime_C::CanApplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff");

	ABuff_RestoreBreathOverTime_C_CanApplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_RestoreBreathOverTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript");

	ABuff_RestoreBreathOverTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_RestoreBreathOverTime_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveTick");

	ABuff_RestoreBreathOverTime_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_RestoreBreathOverTime_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay");

	ABuff_RestoreBreathOverTime_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_RestoreBreathOverTime_C::TickBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff");

	ABuff_RestoreBreathOverTime_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_RestoreBreathOverTime_C::ExecuteUbergraph_Buff_RestoreBreathOverTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime");

	ABuff_RestoreBreathOverTime_C_ExecuteUbergraph_Buff_RestoreBreathOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
