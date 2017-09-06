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

// Function Buff_FireDOT.Buff_FireDOT_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_FireDOT_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireDOT.Buff_FireDOT_C.UserConstructionScript");

	ABuff_FireDOT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireDOT.Buff_FireDOT_C.TickBuff
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_FireDOT_C::TickBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireDOT.Buff_FireDOT_C.TickBuff");

	ABuff_FireDOT_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireDOT.Buff_FireDOT_C.ExecuteUbergraph_Buff_FireDOT
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_FireDOT_C::ExecuteUbergraph_Buff_FireDOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireDOT.Buff_FireDOT_C.ExecuteUbergraph_Buff_FireDOT");

	ABuff_FireDOT_C_ExecuteUbergraph_Buff_FireDOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
