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

// Function PoisonEffectBase.PoisonEffectBase_C.SetRadius
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APoisonEffectBase_C::SetRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonEffectBase.PoisonEffectBase_C.SetRadius");

	APoisonEffectBase_C_SetRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonEffectBase.PoisonEffectBase_C.SetCenter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 Center                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APoisonEffectBase_C::SetCenter(const class Vector3D& Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonEffectBase.PoisonEffectBase_C.SetCenter");

	APoisonEffectBase_C_SetCenter_Params params;
	params.Center = Center;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonEffectBase.PoisonEffectBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APoisonEffectBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonEffectBase.PoisonEffectBase_C.UserConstructionScript");

	APoisonEffectBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
