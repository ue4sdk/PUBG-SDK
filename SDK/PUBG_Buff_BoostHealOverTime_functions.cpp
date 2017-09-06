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

// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.SetHealPerTick
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurBoostGauge                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_BoostHealOverTime_C::SetHealPerTick(float CurBoostGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.SetHealPerTick");

	ABuff_BoostHealOverTime_C_SetHealPerTick_Params params;
	params.CurBoostGauge = CurBoostGauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_BoostHealOverTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.UserConstructionScript");

	ABuff_BoostHealOverTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.TickBuff
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_BoostHealOverTime_C::TickBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.TickBuff");

	ABuff_BoostHealOverTime_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StartBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_BoostHealOverTime_C::StartBuffBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StartBuffBlueprint");

	ABuff_BoostHealOverTime_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StopBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_BoostHealOverTime_C::StopBuffBlueprint(bool* bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StopBuffBlueprint");

	ABuff_BoostHealOverTime_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.ExecuteUbergraph_Buff_BoostHealOverTime
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_BoostHealOverTime_C::ExecuteUbergraph_Buff_BoostHealOverTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.ExecuteUbergraph_Buff_BoostHealOverTime");

	ABuff_BoostHealOverTime_C_ExecuteUbergraph_Buff_BoostHealOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
