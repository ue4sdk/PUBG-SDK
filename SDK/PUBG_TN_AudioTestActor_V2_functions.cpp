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

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintDistance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DistanceInMeters               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATN_AudioTestActor_V2_C::PrintDistance(float DistanceInMeters)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintDistance");

	ATN_AudioTestActor_V2_C_PrintDistance_Params params;
	params.DistanceInMeters = DistanceInMeters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudioRetrigger
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATN_AudioTestActor_V2_C::PlayAudioRetrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudioRetrigger");

	ATN_AudioTestActor_V2_C_PlayAudioRetrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Retrigger
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATN_AudioTestActor_V2_C::Retrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Retrigger");

	ATN_AudioTestActor_V2_C_Retrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InText                         (CPF_Parm, CPF_ZeroConstructor)

void ATN_AudioTestActor_V2_C::PrintText(const struct FString& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintText");

	ATN_AudioTestActor_V2_C_PrintText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetSwitch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Group                          (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Param                          (CPF_Parm, CPF_ZeroConstructor)

void ATN_AudioTestActor_V2_C::SetSwitch(const struct FString& Group, const struct FString& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetSwitch");

	ATN_AudioTestActor_V2_C_SetSwitch_Params params;
	params.Group = Group;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetNextSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bForward                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATN_AudioTestActor_V2_C::SetNextSound(bool bForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetNextSound");

	ATN_AudioTestActor_V2_C_SetNextSound_Params params;
	params.bForward = bForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Destroy
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATN_AudioTestActor_V2_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Destroy");

	ATN_AudioTestActor_V2_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATN_AudioTestActor_V2_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudio");

	ATN_AudioTestActor_V2_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerPawn_v2_C*        Parent                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATN_AudioTestActor_V2_C::Initialize(class APlayerPawn_v2_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Initialize");

	ATN_AudioTestActor_V2_C_Initialize_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATN_AudioTestActor_V2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.UserConstructionScript");

	ATN_AudioTestActor_V2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATN_AudioTestActor_V2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ReceiveTick");

	ATN_AudioTestActor_V2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ExecuteUbergraph_TN_AudioTestActor_V2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATN_AudioTestActor_V2_C::ExecuteUbergraph_TN_AudioTestActor_V2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ExecuteUbergraph_TN_AudioTestActor_V2");

	ATN_AudioTestActor_V2_C_ExecuteUbergraph_TN_AudioTestActor_V2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
