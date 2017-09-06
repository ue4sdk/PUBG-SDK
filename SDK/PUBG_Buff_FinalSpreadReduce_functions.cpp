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

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_FinalSpreadReduce_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.UserConstructionScript");

	ABuff_FinalSpreadReduce_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StartBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_FinalSpreadReduce_C::StartBuffBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StartBuffBlueprint");

	ABuff_FinalSpreadReduce_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StopBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_FinalSpreadReduce_C::StopBuffBlueprint(bool* bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StopBuffBlueprint");

	ABuff_FinalSpreadReduce_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.ExecuteUbergraph_Buff_FinalSpreadReduce
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_FinalSpreadReduce_C::ExecuteUbergraph_Buff_FinalSpreadReduce(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.ExecuteUbergraph_Buff_FinalSpreadReduce");

	ABuff_FinalSpreadReduce_C_ExecuteUbergraph_Buff_FinalSpreadReduce_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
