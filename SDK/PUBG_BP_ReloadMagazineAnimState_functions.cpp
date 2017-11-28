// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.DropMag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ReloadMagazineAnimState_C::DropMag(class USkeletalMeshComponent* MeshComp)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa14b3719);

	UBP_ReloadMagazineAnimState_C_DropMag_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.AttachMag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Attach                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ReloadMagazineAnimState_C::AttachMag(class USkeletalMeshComponent* MeshComp, bool Attach)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x218ec021);

	UBP_ReloadMagazineAnimState_C_AttachMag_Params params;
	params.MeshComp = MeshComp;
	params.Attach = Attach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ShowMag
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ReloadMagazineAnimState_C::ShowMag(class USkeletalMeshComponent* MeshComp, bool show)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5feb2589);

	UBP_ReloadMagazineAnimState_C_ShowMag_Params params;
	params.MeshComp = MeshComp;
	params.show = show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyEnd
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBP_ReloadMagazineAnimState_C::Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc13c852d);

	UBP_ReloadMagazineAnimState_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyBegin
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float*                         TotalDuration                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBP_ReloadMagazineAnimState_C::Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9fb3a3f5);

	UBP_ReloadMagazineAnimState_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
