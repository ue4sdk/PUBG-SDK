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

// Function BoatBase.BoatBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABoatBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoatBase.BoatBase_C.UserConstructionScript");

	ABoatBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoatBase.BoatBase_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABoatBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoatBase.BoatBase_C.ReceiveBeginPlay");

	ABoatBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoatBase.BoatBase_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABoatBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoatBase.BoatBase_C.ReceiveTick");

	ABoatBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoatBase.BoatBase_C.EventFuelConsumption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABoatBase_C::EventFuelConsumption()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoatBase.BoatBase_C.EventFuelConsumption");

	ABoatBase_C_EventFuelConsumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoatBase.BoatBase_C.ExecuteUbergraph_BoatBase
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABoatBase_C::ExecuteUbergraph_BoatBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoatBase.BoatBase_C.ExecuteUbergraph_BoatBase");

	ABoatBase_C_ExecuteUbergraph_BoatBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
