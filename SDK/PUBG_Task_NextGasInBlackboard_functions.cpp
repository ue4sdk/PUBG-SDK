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

// Function Task_NextGasInBlackboard.Task_NextGasInBlackboard_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_NextGasInBlackboard_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_NextGasInBlackboard.Task_NextGasInBlackboard_C.ReceiveExecute");

	UTask_NextGasInBlackboard_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_NextGasInBlackboard.Task_NextGasInBlackboard_C.ExecuteUbergraph_Task_NextGasInBlackboard
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_NextGasInBlackboard_C::ExecuteUbergraph_Task_NextGasInBlackboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_NextGasInBlackboard.Task_NextGasInBlackboard_C.ExecuteUbergraph_Task_NextGasInBlackboard");

	UTask_NextGasInBlackboard_C_ExecuteUbergraph_Task_NextGasInBlackboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
