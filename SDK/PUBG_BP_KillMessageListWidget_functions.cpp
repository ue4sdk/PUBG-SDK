// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_KillMessageListWidget.BP_KillMessageListWidget_C.AddKillMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathMessage           Input                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_KillMessageListWidget_C::AddKillMessage(struct FDeathMessage* Input)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x32457fd9);

	UBP_KillMessageListWidget_C_AddKillMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function BP_KillMessageListWidget.BP_KillMessageListWidget_C.UpdateMessageListWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_KillMessageListWidget_C::UpdateMessageListWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x69339091);

	UBP_KillMessageListWidget_C_UpdateMessageListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillMessageListWidget.BP_KillMessageListWidget_C.ExecuteUbergraph_BP_KillMessageListWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_KillMessageListWidget_C::ExecuteUbergraph_BP_KillMessageListWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x30a609c5);

	UBP_KillMessageListWidget_C_ExecuteUbergraph_BP_KillMessageListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
