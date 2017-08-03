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

// Function FogEffectController.FogEffectController_C.DestroyEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFogEffectController_C::DestroyEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function FogEffectController.FogEffectController_C.DestroyEffect");

	AFogEffectController_C_DestroyEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FogEffectController.FogEffectController_C.CreateEffect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFogEffectController_C::CreateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function FogEffectController.FogEffectController_C.CreateEffect");

	AFogEffectController_C_CreateEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FogEffectController.FogEffectController_C.UpdateEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFogEffectController_C::UpdateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function FogEffectController.FogEffectController_C.UpdateEffect");

	AFogEffectController_C_UpdateEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FogEffectController.FogEffectController_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFogEffectController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FogEffectController.FogEffectController_C.UserConstructionScript");

	AFogEffectController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FogEffectController.FogEffectController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AFogEffectController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FogEffectController.FogEffectController_C.ReceiveBeginPlay");

	AFogEffectController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FogEffectController.FogEffectController_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AFogEffectController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FogEffectController.FogEffectController_C.ReceiveTick");

	AFogEffectController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FogEffectController.FogEffectController_C.ExecuteUbergraph_FogEffectController
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AFogEffectController_C::ExecuteUbergraph_FogEffectController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FogEffectController.FogEffectController_C.ExecuteUbergraph_FogEffectController");

	AFogEffectController_C_ExecuteUbergraph_FogEffectController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
