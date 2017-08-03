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

// Function Buff_HealOverTime.Buff_HealOverTime_C.GetHealAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          GoalHealth                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_HealOverTime_C::GetHealAmount(float* GoalHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealOverTime.Buff_HealOverTime_C.GetHealAmount");

	ABuff_HealOverTime_C_GetHealAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GoalHealth != nullptr)
		*GoalHealth = params.GoalHealth;
}


// Function Buff_HealOverTime.Buff_HealOverTime_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_HealOverTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealOverTime.Buff_HealOverTime_C.UserConstructionScript");

	ABuff_HealOverTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealOverTime.Buff_HealOverTime_C.TickBuff
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_HealOverTime_C::TickBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealOverTime.Buff_HealOverTime_C.TickBuff");

	ABuff_HealOverTime_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealOverTime.Buff_HealOverTime_C.StopBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_HealOverTime_C::StopBuffBlueprint(bool* bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealOverTime.Buff_HealOverTime_C.StopBuffBlueprint");

	ABuff_HealOverTime_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealOverTime.Buff_HealOverTime_C.StartBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_HealOverTime_C::StartBuffBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealOverTime.Buff_HealOverTime_C.StartBuffBlueprint");

	ABuff_HealOverTime_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealOverTime.Buff_HealOverTime_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_HealOverTime_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealOverTime.Buff_HealOverTime_C.ReceiveTick");

	ABuff_HealOverTime_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealOverTime.Buff_HealOverTime_C.ExecuteUbergraph_Buff_HealOverTime
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_HealOverTime_C::ExecuteUbergraph_Buff_HealOverTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealOverTime.Buff_HealOverTime_C.ExecuteUbergraph_Buff_HealOverTime");

	ABuff_HealOverTime_C_ExecuteUbergraph_Buff_HealOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
