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

// Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAircraftCarePackage_Test_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.UserConstructionScript");

	AAircraftCarePackage_Test_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAircraftCarePackage_Test_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.ReceiveBeginPlay");

	AAircraftCarePackage_Test_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAircraftCarePackage_Test_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.ReceiveTick");

	AAircraftCarePackage_Test_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.ExecuteUbergraph_AircraftCarePackage_Test
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAircraftCarePackage_Test_C::ExecuteUbergraph_AircraftCarePackage_Test(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AircraftCarePackage_Test.AircraftCarePackage_Test_C.ExecuteUbergraph_AircraftCarePackage_Test");

	AAircraftCarePackage_Test_C_ExecuteUbergraph_AircraftCarePackage_Test_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
