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

// Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AConsoleCommandExecutor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.UserConstructionScript");

	AConsoleCommandExecutor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AConsoleCommandExecutor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.ReceiveBeginPlay");

	AConsoleCommandExecutor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.ExecuteUbergraph_ConsoleCommandExecutor
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AConsoleCommandExecutor_C::ExecuteUbergraph_ConsoleCommandExecutor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.ExecuteUbergraph_ConsoleCommandExecutor");

	AConsoleCommandExecutor_C_ExecuteUbergraph_ConsoleCommandExecutor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
