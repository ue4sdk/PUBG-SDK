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

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 V_Start                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_Apex                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_ApexAdditive                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_End                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           CharRef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsClimbing                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EVaultType>        InVaultType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEndToFall                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_VaultHelperActor_C::Init(const class Vector3D& V_Start, const class Vector3D& V_Apex, const class Vector3D& V_ApexAdditive, const class Vector3D& V_End, class ATslCharacter* CharRef, bool IsClimbing, TEnumAsByte<EVaultType> InVaultType, bool bEndToFall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaultHelperActor.BP_VaultHelperActor_C.Init");

	ABP_VaultHelperActor_C_Init_Params params;
	params.V_Start = V_Start;
	params.V_Apex = V_Apex;
	params.V_ApexAdditive = V_ApexAdditive;
	params.V_End = V_End;
	params.CharRef = CharRef;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.bEndToFall = bEndToFall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaultHelperActor.BP_VaultHelperActor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_VaultHelperActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaultHelperActor.BP_VaultHelperActor_C.UserConstructionScript");

	ABP_VaultHelperActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaultHelperActor.BP_VaultHelperActor_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_VaultHelperActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaultHelperActor.BP_VaultHelperActor_C.ReceiveTick");

	ABP_VaultHelperActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaultHelperActor.BP_VaultHelperActor_C.ExecuteUbergraph_BP_VaultHelperActor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_VaultHelperActor_C::ExecuteUbergraph_BP_VaultHelperActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaultHelperActor.BP_VaultHelperActor_C.ExecuteUbergraph_BP_VaultHelperActor");

	ABP_VaultHelperActor_C_ExecuteUbergraph_BP_VaultHelperActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
