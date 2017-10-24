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

// Function TSLGameState.TSLGameState_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATSLGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TSLGameState.TSLGameState_C.UserConstructionScript");

	ATSLGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSLGameState.TSLGameState_C.UpdateWorldTimeSecondsDelta
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATSLGameState_C::UpdateWorldTimeSecondsDelta(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSLGameState.TSLGameState_C.UpdateWorldTimeSecondsDelta");

	ATSLGameState_C_UpdateWorldTimeSecondsDelta_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSLGameState.TSLGameState_C.ExecuteUbergraph_TSLGameState
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATSLGameState_C::ExecuteUbergraph_TSLGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSLGameState.TSLGameState_C.ExecuteUbergraph_TSLGameState");

	ATSLGameState_C_ExecuteUbergraph_TSLGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
