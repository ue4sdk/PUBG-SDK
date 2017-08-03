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

// Function Buff_SpeedUp2.Buff_SpeedUp2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABuff_SpeedUp2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpeedUp2.Buff_SpeedUp2_C.UserConstructionScript");

	ABuff_SpeedUp2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpeedUp2.Buff_SpeedUp2_C.StartBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABuff_SpeedUp2_C::StartBuffBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpeedUp2.Buff_SpeedUp2_C.StartBuffBlueprint");

	ABuff_SpeedUp2_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpeedUp2.Buff_SpeedUp2_C.StopBuffBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_SpeedUp2_C::StopBuffBlueprint(bool* bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpeedUp2.Buff_SpeedUp2_C.StopBuffBlueprint");

	ABuff_SpeedUp2_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpeedUp2.Buff_SpeedUp2_C.ExecuteUbergraph_Buff_SpeedUp2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABuff_SpeedUp2_C::ExecuteUbergraph_Buff_SpeedUp2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpeedUp2.Buff_SpeedUp2_C.ExecuteUbergraph_Buff_SpeedUp2");

	ABuff_SpeedUp2_C_ExecuteUbergraph_Buff_SpeedUp2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
