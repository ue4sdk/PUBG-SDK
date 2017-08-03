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

// Function Buff_DamageOverTime.Buff_DamageOverTime_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_DamageOverTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DamageOverTime.Buff_DamageOverTime_C.UserConstructionScript");

	ABuff_DamageOverTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DamageOverTime.Buff_DamageOverTime_C.TickBuff
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_DamageOverTime_C::TickBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DamageOverTime.Buff_DamageOverTime_C.TickBuff");

	ABuff_DamageOverTime_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DamageOverTime.Buff_DamageOverTime_C.ExecuteUbergraph_Buff_DamageOverTime
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_DamageOverTime_C::ExecuteUbergraph_Buff_DamageOverTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DamageOverTime.Buff_DamageOverTime_C.ExecuteUbergraph_Buff_DamageOverTime");

	ABuff_DamageOverTime_C_ExecuteUbergraph_Buff_DamageOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
