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

// Function PoisonFogPrefab.PoisonFogPrefab_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APoisonFogPrefab_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonFogPrefab.PoisonFogPrefab_C.UserConstructionScript");

	APoisonFogPrefab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.АР„З|·xЗ_
// (FUNC_BlueprintEvent)

void APoisonFogPrefab_C::АР„З|·xЗ_()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonFogPrefab.PoisonFogPrefab_C.АР„З|·xЗ_");

	APoisonFogPrefab_C_АР„З|·xЗ__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APoisonFogPrefab_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveBeginPlay");

	APoisonFogPrefab_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APoisonFogPrefab_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveTick");

	APoisonFogPrefab_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.SetRadius
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float*                         Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APoisonFogPrefab_C::SetRadius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonFogPrefab.PoisonFogPrefab_C.SetRadius");

	APoisonFogPrefab_C_SetRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.SetCenter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D*                Center                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APoisonFogPrefab_C::SetCenter(class Vector3D* Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonFogPrefab.PoisonFogPrefab_C.SetCenter");

	APoisonFogPrefab_C_SetCenter_Params params;
	params.Center = Center;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.ExecuteUbergraph_PoisonFogPrefab
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APoisonFogPrefab_C::ExecuteUbergraph_PoisonFogPrefab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonFogPrefab.PoisonFogPrefab_C.ExecuteUbergraph_PoisonFogPrefab");

	APoisonFogPrefab_C_ExecuteUbergraph_PoisonFogPrefab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
