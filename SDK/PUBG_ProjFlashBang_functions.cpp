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

// Function ProjFlashBang.ProjFlashBang_C.GetFlashBangDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          FlashBangDistance              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjFlashBang_C::GetFlashBangDistance(float* FlashBangDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.GetFlashBangDistance");

	AProjFlashBang_C_GetFlashBangDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlashBangDistance != nullptr)
		*FlashBangDistance = params.FlashBangDistance;
}


// Function ProjFlashBang.ProjFlashBang_C.GetCameraToFlashBangAngle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Angle                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjFlashBang_C::GetCameraToFlashBangAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.GetCameraToFlashBangAngle");

	AProjFlashBang_C_GetCameraToFlashBangAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function ProjFlashBang.ProjFlashBang_C.GetTinnitusSoundIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjFlashBang_C::GetTinnitusSoundIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.GetTinnitusSoundIndex");

	AProjFlashBang_C_GetTinnitusSoundIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangCaputeEffect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              ShooterCharacter               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjFlashBang_C::SpawnFlashBangCaputeEffect(class ACharacter* ShooterCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangCaputeEffect");

	AProjFlashBang_C_SpawnFlashBangCaputeEffect_Params params;
	params.ShooterCharacter = ShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangEffect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FlashBangDistance              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjFlashBang_C::SpawnFlashBangEffect(float FlashBangDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangEffect");

	AProjFlashBang_C_SpawnFlashBangEffect_Params params;
	params.FlashBangDistance = FlashBangDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.PlayTinnitusSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjFlashBang_C::PlayTinnitusSound(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.PlayTinnitusSound");

	AProjFlashBang_C_PlayTinnitusSound_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AProjFlashBang_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.UserConstructionScript");

	AProjFlashBang_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.OnTakeAnyDamage_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjFlashBang_C::OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.OnTakeAnyDamage_Event");

	AProjFlashBang_C_OnTakeAnyDamage_Event_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.ExplodeBP
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D*                Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class Rotator*                 Rotation                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FHitResult*             Impact                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float*                         Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjFlashBang_C::ExplodeBP(class Vector3D* Location, class Rotator* Rotation, struct FHitResult* Impact, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.ExplodeBP");

	AProjFlashBang_C_ExplodeBP_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Impact = Impact;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.BreakLoop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AProjFlashBang_C::BreakLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.BreakLoop");

	AProjFlashBang_C_BreakLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.ExecuteUbergraph_ProjFlashBang
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjFlashBang_C::ExecuteUbergraph_ProjFlashBang(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlashBang.ProjFlashBang_C.ExecuteUbergraph_ProjFlashBang");

	AProjFlashBang_C_ExecuteUbergraph_ProjFlashBang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
