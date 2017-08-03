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

// Function Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_CarePackageFinishCheck_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.ReceiveTick");

	UTask_CarePackageFinishCheck_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.ExecuteUbergraph_Task_CarePackageFinishCheck
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_CarePackageFinishCheck_C::ExecuteUbergraph_Task_CarePackageFinishCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.ExecuteUbergraph_Task_CarePackageFinishCheck");

	UTask_CarePackageFinishCheck_C_ExecuteUbergraph_Task_CarePackageFinishCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
