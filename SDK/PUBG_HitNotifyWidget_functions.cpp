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

// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          DamagedPercent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Damage                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::DamagedPercentToDamage(float DamagedPercent, float* Damage)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xafb2382b);

	UHitNotifyWidget_C_DamagedPercentToDamage_Params params;
	params.DamagedPercent = DamagedPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          HealthPercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::GetPlayerHealthPercent(float* HealthPercent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9f25b58b);

	UHitNotifyWidget_C_GetPlayerHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::PostAkEvent(class UAkAudioEvent* AkEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5c3a0d6f);

	UHitNotifyWidget_C_PostAkEvent_Params params;
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 RTPC                           (CPF_Parm, CPF_ZeroConstructor)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::SetRTPCValue(const struct FString& RTPC, float Value)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdca06f73);

	UHitNotifyWidget_C_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          DamagedPercent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamagePercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::DamagedPercentToDamagePercent(float DamagedPercent, float* DamagePercent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa817e5a2);

	UHitNotifyWidget_C_DamagedPercentToDamagePercent_Params params;
	params.DamagedPercent = DamagedPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamagePercent != nullptr)
		*DamagePercent = params.DamagePercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitNotifyWidget_C::PlayHitNotifySound()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x96af3c88);

	UHitNotifyWidget_C_PlayHitNotifySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               Scale                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::GetRandomScale(struct FVector2D* Scale)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6c18213a);

	UHitNotifyWidget_C_GetRandomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               Translation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::GetRandomTranslation(struct FVector2D* Translation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x74b3011d);

	UHitNotifyWidget_C_GetRandomTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Translation != nullptr)
		*Translation = params.Translation;
}


// Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DamagePercent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EDamageTypeCategory> DamageTypeCategory             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::OnHitNotify(float DamagePercent, TEnumAsByte<EDamageTypeCategory> DamageTypeCategory)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb0b21a18);

	UHitNotifyWidget_C_OnHitNotify_Params params;
	params.DamagePercent = DamagePercent;
	params.DamageTypeCategory = DamageTypeCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
