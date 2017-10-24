// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_BreakSunkenVehicle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.UserConstructionScript");

	ABuff_BreakSunkenVehicle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.TickBuff
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_BreakSunkenVehicle_C::TickBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.TickBuff");

	ABuff_BreakSunkenVehicle_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.StopBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_BreakSunkenVehicle_C::StopBuffBlueprint(bool* bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.StopBuffBlueprint");

	ABuff_BreakSunkenVehicle_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.ExecuteUbergraph_Buff_BreakSunkenVehicle
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_BreakSunkenVehicle_C::ExecuteUbergraph_Buff_BreakSunkenVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.ExecuteUbergraph_Buff_BreakSunkenVehicle");

	ABuff_BreakSunkenVehicle_C_ExecuteUbergraph_Buff_BreakSunkenVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
