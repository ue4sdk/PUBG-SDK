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

// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.RemoveReplicateCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class ATslCharacter*>   Characters                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UObserverTagManagerWidget_C::RemoveReplicateCharacter(TArray<class ATslCharacter*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.RemoveReplicateCharacter");

	UObserverTagManagerWidget_C_RemoveReplicateCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.AddReplicateCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class ATslCharacter*>   Characters                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UObserverTagManagerWidget_C::AddReplicateCharacter(TArray<class ATslCharacter*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.AddReplicateCharacter");

	UObserverTagManagerWidget_C_AddReplicateCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTagManagerWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.Tick");

	UObserverTagManagerWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.ExecuteUbergraph_ObserverTagManagerWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTagManagerWidget_C::ExecuteUbergraph_ObserverTagManagerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.ExecuteUbergraph_ObserverTagManagerWidget");

	UObserverTagManagerWidget_C_ExecuteUbergraph_ObserverTagManagerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
