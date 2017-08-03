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

// Function DummyTransportAircraft.DummyTransportAircraft_C.SetAllCloudParticleActivate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADummyTransportAircraft_C::SetAllCloudParticleActivate(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyTransportAircraft.DummyTransportAircraft_C.SetAllCloudParticleActivate");

	ADummyTransportAircraft_C_SetAllCloudParticleActivate_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADummyTransportAircraft_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyTransportAircraft.DummyTransportAircraft_C.UserConstructionScript");

	ADummyTransportAircraft_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ADummyTransportAircraft_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyTransportAircraft.DummyTransportAircraft_C.ReceiveBeginPlay");

	ADummyTransportAircraft_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADummyTransportAircraft_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyTransportAircraft.DummyTransportAircraft_C.ReceiveTick");

	ADummyTransportAircraft_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerRide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ADummyTransportAircraft_C::OnLocalPlayerRide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerRide");

	ADummyTransportAircraft_C_OnLocalPlayerRide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerLeave
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ADummyTransportAircraft_C::OnLocalPlayerLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerLeave");

	ADummyTransportAircraft_C_OnLocalPlayerLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.ExecuteUbergraph_DummyTransportAircraft
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADummyTransportAircraft_C::ExecuteUbergraph_DummyTransportAircraft(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyTransportAircraft.DummyTransportAircraft_C.ExecuteUbergraph_DummyTransportAircraft");

	ADummyTransportAircraft_C_ExecuteUbergraph_DummyTransportAircraft_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
