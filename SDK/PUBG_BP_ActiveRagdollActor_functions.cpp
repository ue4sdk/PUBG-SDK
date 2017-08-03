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

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ActiveRagdollActor_C::SetServerPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos");

	ABP_ActiveRagdollActor_C_SetServerPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshRef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 InVelocity                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ActiveRagdollActor_C::InitClient(class USkeletalMeshComponent* MeshRef, const class Vector3D& InVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient");

	ABP_ActiveRagdollActor_C_InitClient_Params params;
	params.MeshRef = MeshRef;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 InVelocity                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ActiveRagdollActor_C::InitServer(const class Vector3D& InVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer");

	ABP_ActiveRagdollActor_C_InitServer_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ActiveRagdollActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript");

	ABP_ActiveRagdollActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_ActiveRagdollActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay");

	ABP_ActiveRagdollActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ActiveRagdollActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick");

	ABP_ActiveRagdollActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ActiveRagdollActor_C::ExecuteUbergraph_BP_ActiveRagdollActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor");

	ABP_ActiveRagdollActor_C_ExecuteUbergraph_BP_ActiveRagdollActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
