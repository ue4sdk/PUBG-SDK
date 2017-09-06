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

// Function Task_SpawnAircraft.Task_SpawnAircraft_C.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_SpawnAircraft_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SpawnAircraft.Task_SpawnAircraft_C.ReceiveTick");

	UTask_SpawnAircraft_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_SpawnAircraft.Task_SpawnAircraft_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_SpawnAircraft_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SpawnAircraft.Task_SpawnAircraft_C.ReceiveExecute");

	UTask_SpawnAircraft_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_SpawnAircraft.Task_SpawnAircraft_C.ExecuteUbergraph_Task_SpawnAircraft
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_SpawnAircraft_C::ExecuteUbergraph_Task_SpawnAircraft(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SpawnAircraft.Task_SpawnAircraft_C.ExecuteUbergraph_Task_SpawnAircraft");

	UTask_SpawnAircraft_C_ExecuteUbergraph_Task_SpawnAircraft_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
