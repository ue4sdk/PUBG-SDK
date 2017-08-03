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

// Function Task_GasWarning.Task_GasWarning_C.GetMinSecText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Full_text_for_MIN_SEC          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   formatted_text                 (CPF_Parm, CPF_OutParm)

void UTask_GasWarning_C::GetMinSecText(float Seconds, bool Full_text_for_MIN_SEC, struct FText* formatted_text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasWarning.Task_GasWarning_C.GetMinSecText");

	UTask_GasWarning_C_GetMinSecText_Params params;
	params.Seconds = Seconds;
	params.Full_text_for_MIN_SEC = Full_text_for_MIN_SEC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (formatted_text != nullptr)
		*formatted_text = params.formatted_text;
}


// Function Task_GasWarning.Task_GasWarning_C.PoisionWarningBroadcast
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABattleRoyaleModeController* ModeController                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_GasWarning_C::PoisionWarningBroadcast(class ABattleRoyaleModeController* ModeController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasWarning.Task_GasWarning_C.PoisionWarningBroadcast");

	UTask_GasWarning_C_PoisionWarningBroadcast_Params params;
	params.ModeController = ModeController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasWarning.Task_GasWarning_C.InitPoisonWarningTimeIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABattleRoyaleModeController* ModeController                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_GasWarning_C::InitPoisonWarningTimeIndex(class ABattleRoyaleModeController* ModeController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasWarning.Task_GasWarning_C.InitPoisonWarningTimeIndex");

	UTask_GasWarning_C_InitPoisonWarningTimeIndex_Params params;
	params.ModeController = ModeController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasWarning.Task_GasWarning_C.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_GasWarning_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasWarning.Task_GasWarning_C.ReceiveTick");

	UTask_GasWarning_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasWarning.Task_GasWarning_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_GasWarning_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasWarning.Task_GasWarning_C.ReceiveExecute");

	UTask_GasWarning_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasWarning.Task_GasWarning_C.ExecuteUbergraph_Task_GasWarning
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_GasWarning_C::ExecuteUbergraph_Task_GasWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasWarning.Task_GasWarning_C.ExecuteUbergraph_Task_GasWarning");

	UTask_GasWarning_C_ExecuteUbergraph_Task_GasWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
