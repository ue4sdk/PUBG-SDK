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

// Function BP_BulletCamActor.BP_BulletCamActor_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslWeapon_Trajectory*   NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_BulletCamActor_C::Init(class ATslWeapon_Trajectory* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BulletCamActor.BP_BulletCamActor_C.Init");

	ABP_BulletCamActor_C_Init_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BulletCamActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript");

	ABP_BulletCamActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_BulletCamActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick");

	ABP_BulletCamActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_BulletCamActor_C::ExecuteUbergraph_BP_BulletCamActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor");

	ABP_BulletCamActor_C_ExecuteUbergraph_BP_BulletCamActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
