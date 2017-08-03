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

// Function Task_FinishRedZone.Task_FinishRedZone_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_FinishRedZone_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FinishRedZone.Task_FinishRedZone_C.ReceiveExecute");

	UTask_FinishRedZone_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FinishRedZone.Task_FinishRedZone_C.ExecuteUbergraph_Task_FinishRedZone
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_FinishRedZone_C::ExecuteUbergraph_Task_FinishRedZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FinishRedZone.Task_FinishRedZone_C.ExecuteUbergraph_Task_FinishRedZone");

	UTask_FinishRedZone_C_ExecuteUbergraph_Task_FinishRedZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
