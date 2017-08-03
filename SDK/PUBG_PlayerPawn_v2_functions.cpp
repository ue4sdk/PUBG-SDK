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

// Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::Tick_PhysicalAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation");

	APlayerPawn_v2_C_Tick_PhysicalAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceClose                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::TEMP_WeapMenu_InitShow(bool ForceClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow");

	APlayerPawn_v2_C_TEMP_WeapMenu_InitShow_Params params;
	params.ForceClose = ForceClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         AttachComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::FixupThirdPersonCamera(class USceneComponent* AttachComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera");

	APlayerPawn_v2_C_FixupThirdPersonCamera_Params params;
	params.AttachComponent = AttachComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnDBNOEffect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DBNOHealth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::SpawnDBNOEffect(float DBNOHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnDBNOEffect");

	APlayerPawn_v2_C_SpawnDBNOEffect_Params params;
	params.DBNOHealth = DBNOHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 V_EndVelocity                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::TEMP_HandleVaultActorEnd(const class Vector3D& V_EndVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorEnd");

	APlayerPawn_v2_C_TEMP_HandleVaultActorEnd_Params params;
	params.V_EndVelocity = V_EndVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorStart
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 V_Start                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_Apex                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_ApexAdditive                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_End                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsClimbing                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EVaultType>        InVaultType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           EndToFall                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::TEMP_HandleVaultActorStart(const class Vector3D& V_Start, const class Vector3D& V_Apex, const class Vector3D& V_ApexAdditive, const class Vector3D& V_End, bool IsClimbing, TEnumAsByte<EVaultType> InVaultType, bool EndToFall, float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorStart");

	APlayerPawn_v2_C_TEMP_HandleVaultActorStart_Params params;
	params.V_Start = V_Start;
	params.V_Apex = V_Apex;
	params.V_ApexAdditive = V_ApexAdditive;
	params.V_End = V_End;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.EndToFall = EndToFall;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_TickVaulting
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::TEMP_TickVaulting()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_TickVaulting");

	APlayerPawn_v2_C_TEMP_TickVaulting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaulting
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 ImpactLocation                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 CapsulePredictedLocation       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 Normal2D                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 DirectionVector                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsPassed                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_Start                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_Apex                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_End                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsClimbing                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 V_ApexAdditive                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EVaultType>        VaultType                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           EndToFall                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::TEMP_HandleVaulting(const class Vector3D& ImpactLocation, const class Vector3D& CapsulePredictedLocation, const class Vector3D& Normal2D, const class Vector3D& DirectionVector, bool* IsPassed, class Vector3D* V_Start, class Vector3D* V_Apex, class Vector3D* V_End, bool* IsClimbing, class Vector3D* V_ApexAdditive, TEnumAsByte<EVaultType>* VaultType, bool* EndToFall, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaulting");

	APlayerPawn_v2_C_TEMP_HandleVaulting_Params params;
	params.ImpactLocation = ImpactLocation;
	params.CapsulePredictedLocation = CapsulePredictedLocation;
	params.Normal2D = Normal2D;
	params.DirectionVector = DirectionVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPassed != nullptr)
		*IsPassed = params.IsPassed;
	if (V_Start != nullptr)
		*V_Start = params.V_Start;
	if (V_Apex != nullptr)
		*V_Apex = params.V_Apex;
	if (V_End != nullptr)
		*V_End = params.V_End;
	if (IsClimbing != nullptr)
		*IsClimbing = params.IsClimbing;
	if (V_ApexAdditive != nullptr)
		*V_ApexAdditive = params.V_ApexAdditive;
	if (VaultType != nullptr)
		*VaultType = params.VaultType;
	if (EndToFall != nullptr)
		*EndToFall = params.EndToFall;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_StartJump
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::TEMP_StartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_StartJump");

	APlayerPawn_v2_C_TEMP_StartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::InitBulletCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam");

	APlayerPawn_v2_C_InitBulletCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessADSDebuff
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ProcessADSDebuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessADSDebuff");

	APlayerPawn_v2_C_ProcessADSDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ProcessMPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC");

	APlayerPawn_v2_C_ProcessMPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::TestInspectObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject");

	APlayerPawn_v2_C_TestInspectObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::TickSimulatePhysicsForAccessories()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories");

	APlayerPawn_v2_C_TickSimulatePhysicsForAccessories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.LocalMagDrop
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 Velocity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::LocalMagDrop(const class Vector3D& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.LocalMagDrop");

	APlayerPawn_v2_C_LocalMagDrop_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ProcessPhysicalAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation");

	APlayerPawn_v2_C_ProcessPhysicalAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ProcessLocalOnlyFunctions()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions");

	APlayerPawn_v2_C_ProcessLocalOnlyFunctions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessSplineMeshComponents
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class Vector3D>         PointArray                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           HasHit                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 LastHit                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  LastHitRotation                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::ProcessSplineMeshComponents(bool HasHit, const class Vector3D& LastHit, const class Rotator& LastHitRotation, TArray<class Vector3D>* PointArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessSplineMeshComponents");

	APlayerPawn_v2_C_ProcessSplineMeshComponents_Params params;
	params.HasHit = HasHit;
	params.LastHit = LastHit;
	params.LastHitRotation = LastHitRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointArray != nullptr)
		*PointArray = params.PointArray;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InitializeSplineMeshComponents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::InitializeSplineMeshComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InitializeSplineMeshComponents");

	APlayerPawn_v2_C_InitializeSplineMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessGrenadeProjection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::TEMPORARY_ProcessGrenadeProjection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessGrenadeProjection");

	APlayerPawn_v2_C_TEMPORARY_ProcessGrenadeProjection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::TEMPORARY_ProcessSprintBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar");

	APlayerPawn_v2_C_TEMPORARY_ProcessSprintBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::InitializePhysicsForAccessories()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories");

	APlayerPawn_v2_C_InitializePhysicsForAccessories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::CheckWeaponCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision");

	APlayerPawn_v2_C_CheckWeaponCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::HandleMovementParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters");

	APlayerPawn_v2_C_HandleMovementParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessAdaptiveCrosshair
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ProcessAdaptiveCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessAdaptiveCrosshair");

	APlayerPawn_v2_C_ProcessAdaptiveCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.AddZeroing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AddZero                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::AddZeroing(float AddZero)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.AddZeroing");

	APlayerPawn_v2_C_AddZeroing_Params params;
	params.AddZero = AddZero;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::CheckCameraUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater");

	APlayerPawn_v2_C_CheckCameraUnderwater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction_Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 HitLocation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::ProcessHitReaction_Init(const class Vector3D& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction_Init");

	APlayerPawn_v2_C_ProcessHitReaction_Init_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ProcessHitReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction");

	APlayerPawn_v2_C_ProcessHitReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::SetInertia()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia");

	APlayerPawn_v2_C_SetInertia_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SetCameraDOF
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::SetCameraDOF()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.SetCameraDOF");

	APlayerPawn_v2_C_SetCameraDOF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ScopingSocketOffsetMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving");

	APlayerPawn_v2_C_ScopingSocketOffsetMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::AdjustCameraSwitching()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching");

	APlayerPawn_v2_C_AdjustCameraSwitching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::CheckForScoping()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping");

	APlayerPawn_v2_C_CheckForScoping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.push
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 Delta_Location                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::push(const class Vector3D& Delta_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.push");

	APlayerPawn_v2_C_push_Params params;
	params.Delta_Location = Delta_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript");

	APlayerPawn_v2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.АР„З|·xЗ_
// (FUNC_BlueprintEvent)

void APlayerPawn_v2_C::АР„З|·xЗ_()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.АР„З|·xЗ_");

	APlayerPawn_v2_C_АР„З|·xЗ__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_invulnerable_K2Node_InputActionEvent_16
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_invulnerable_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_invulnerable_K2Node_InputActionEvent_16");

	APlayerPawn_v2_C_InpActEvt_invulnerable_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_decreaseMaxFlyAccerleration_K2Node_InputActionEvent_15
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_decreaseMaxFlyAccerleration_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_decreaseMaxFlyAccerleration_K2Node_InputActionEvent_15");

	APlayerPawn_v2_C_InpActEvt_decreaseMaxFlyAccerleration_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_IncreaseMaxFlyAccerleration_K2Node_InputActionEvent_14
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_IncreaseMaxFlyAccerleration_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_IncreaseMaxFlyAccerleration_K2Node_InputActionEvent_14");

	APlayerPawn_v2_C_InpActEvt_IncreaseMaxFlyAccerleration_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_IncreaseZeroing_K2Node_InputActionEvent_13
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_IncreaseZeroing_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_IncreaseZeroing_K2Node_InputActionEvent_13");

	APlayerPawn_v2_C_InpActEvt_IncreaseZeroing_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_DecreaseZeroing_K2Node_InputActionEvent_12
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_DecreaseZeroing_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_DecreaseZeroing_K2Node_InputActionEvent_12");

	APlayerPawn_v2_C_InpActEvt_DecreaseZeroing_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_38
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_38(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_38");

	APlayerPawn_v2_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_38_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_K2Node_InputKeyEvent_37
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_Multiply_K2Node_InputKeyEvent_37(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_K2Node_InputKeyEvent_37");

	APlayerPawn_v2_C_InpActEvt_Multiply_K2Node_InputKeyEvent_37_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_36
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_36(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_36");

	APlayerPawn_v2_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_36_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_35
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_35(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_35");

	APlayerPawn_v2_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_35_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_34
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_34(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_34");

	APlayerPawn_v2_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_34_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_33
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_33(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_33");

	APlayerPawn_v2_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_33_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_32
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_32(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_32");

	APlayerPawn_v2_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_32_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_K2Node_InputKeyEvent_31
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_Add_K2Node_InputKeyEvent_31(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_K2Node_InputKeyEvent_31");

	APlayerPawn_v2_C_InpActEvt_Add_K2Node_InputKeyEvent_31_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_K2Node_InputKeyEvent_30
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_Subtract_K2Node_InputKeyEvent_30(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_K2Node_InputKeyEvent_30");

	APlayerPawn_v2_C_InpActEvt_Subtract_K2Node_InputKeyEvent_30_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_29
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_29(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_29");

	APlayerPawn_v2_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_29_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28");

	APlayerPawn_v2_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_27
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_27");

	APlayerPawn_v2_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_26
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_26");

	APlayerPawn_v2_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25");

	APlayerPawn_v2_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_24
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_24");

	APlayerPawn_v2_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_K2Node_InputKeyEvent_23
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_Decimal_K2Node_InputKeyEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_K2Node_InputKeyEvent_23");

	APlayerPawn_v2_C_InpActEvt_Decimal_K2Node_InputKeyEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_K2Node_InputKeyEvent_22
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_Divide_K2Node_InputKeyEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_K2Node_InputKeyEvent_22");

	APlayerPawn_v2_C_InpActEvt_Divide_K2Node_InputKeyEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_21
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_LeftBracket_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_21");

	APlayerPawn_v2_C_InpActEvt_LeftBracket_K2Node_InputKeyEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_20
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_RightBracket_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_20");

	APlayerPawn_v2_C_InpActEvt_RightBracket_K2Node_InputKeyEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_FreeMoveMode_K2Node_InputActionEvent_11
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_FreeMoveMode_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_FreeMoveMode_K2Node_InputActionEvent_11");

	APlayerPawn_v2_C_InpActEvt_FreeMoveMode_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Test_SetupWeapon_K2Node_InputActionEvent_10
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_Test_SetupWeapon_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Test_SetupWeapon_K2Node_InputActionEvent_10");

	APlayerPawn_v2_C_InpActEvt_Test_SetupWeapon_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Test_InspectObject_K2Node_InputActionEvent_9
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void APlayerPawn_v2_C::InpActEvt_Test_InspectObject_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Test_InspectObject_K2Node_InputActionEvent_9");

	APlayerPawn_v2_C_InpActEvt_Test_InspectObject_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay");

	APlayerPawn_v2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick");

	APlayerPawn_v2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::SetupWeaponBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint");

	APlayerPawn_v2_C_SetupWeaponBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ServerSetInvulnerability()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability");

	APlayerPawn_v2_C_ServerSetInvulnerability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ServerFreeMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove");

	APlayerPawn_v2_C_ServerFreeMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D*                Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float*                         BulletVelocity                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::SpawnBulletPassByEffect(class Vector3D* Location, float* BulletVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect");

	APlayerPawn_v2_C_SpawnBulletPassByEffect_Params params;
	params.Location = Location;
	params.BulletVelocity = BulletVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HitReaction
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 HitLocation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::Client_HitReaction(const class Vector3D& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HitReaction");

	APlayerPawn_v2_C_Client_HitReaction_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveAnyDamage
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType**            DamageType                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController**            InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveAnyDamage");

	APlayerPawn_v2_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.LocalMagazineDrop
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D*                InitialVelocity                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::LocalMagazineDrop(class Vector3D* InitialVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.LocalMagazineDrop");

	APlayerPawn_v2_C_LocalMagazineDrop_Params params;
	params.InitialVelocity = InitialVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APlayerPawn_v2_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const class Vector3D& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	APlayerPawn_v2_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  ItemName                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APlayerPawn_v2_C::NotHaveHealItemNotifyMessage(struct FText* ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage");

	APlayerPawn_v2_C_NotHaveHealItemNotifyMessage_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::NotHaveBoostItemNotifyMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage");

	APlayerPawn_v2_C_NotHaveBoostItemNotifyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ActivateADS_Debuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff");

	APlayerPawn_v2_C_ActivateADS_Debuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.HiddenCrosshair
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::HiddenCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.HiddenCrosshair");

	APlayerPawn_v2_C_HiddenCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleVault
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 VaultStart                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 VaultApex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 VaultApexAdditive              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 VaultEnd                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsClimbing                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EVaultType>        InVaultType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           EndToFall                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::Server_HandleVault(const class Vector3D& VaultStart, const class Vector3D& VaultApex, const class Vector3D& VaultApexAdditive, const class Vector3D& VaultEnd, bool IsClimbing, TEnumAsByte<EVaultType> InVaultType, bool EndToFall, float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleVault");

	APlayerPawn_v2_C_Server_HandleVault_Params params;
	params.VaultStart = VaultStart;
	params.VaultApex = VaultApex;
	params.VaultApexAdditive = VaultApexAdditive;
	params.VaultEnd = VaultEnd;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.EndToFall = EndToFall;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 InVaultEndVelocity             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::HandleVaultEnd(const class Vector3D& InVaultEndVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd");

	APlayerPawn_v2_C_HandleVaultEnd_Params params;
	params.InVaultEndVelocity = InVaultEndVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnJumped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.OnJumped");

	APlayerPawn_v2_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Local_HandleVault
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 VaultStart                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 VaultApex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 VaultApexAdditive              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 VaultEnd                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsClimbing                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EVaultType>        InVaultType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           EndToFall                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::Local_HandleVault(const class Vector3D& VaultStart, const class Vector3D& VaultApex, const class Vector3D& VaultApexAdditive, const class Vector3D& VaultEnd, bool IsClimbing, TEnumAsByte<EVaultType> InVaultType, bool EndToFall, float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Local_HandleVault");

	APlayerPawn_v2_C_Local_HandleVault_Params params;
	params.VaultStart = VaultStart;
	params.VaultApex = VaultApex;
	params.VaultApexAdditive = VaultApexAdditive;
	params.VaultEnd = VaultEnd;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.EndToFall = EndToFall;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HandleVault
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 VaultStart                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 VaultApex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 VaultApexAdditive              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 VaultEnd                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsClimbing                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EVaultType>        InVaultType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           EndToFall                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::Client_HandleVault(const class Vector3D& VaultStart, const class Vector3D& VaultApex, const class Vector3D& VaultApexAdditive, const class Vector3D& VaultEnd, bool IsClimbing, TEnumAsByte<EVaultType> InVaultType, bool EndToFall, float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HandleVault");

	APlayerPawn_v2_C_Client_HandleVault_Params params;
	params.VaultStart = VaultStart;
	params.VaultApex = VaultApex;
	params.VaultApexAdditive = VaultApexAdditive;
	params.VaultEnd = VaultEnd;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.EndToFall = EndToFall;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd_CP
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D*                InVaultEndVelocity             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::HandleVaultEnd_CP(class Vector3D* InVaultEndVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd_CP");

	APlayerPawn_v2_C_HandleVaultEnd_CP_Params params;
	params.InVaultEndVelocity = InVaultEndVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessDBNO
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         GroggyHealthPercent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::ProcessDBNO(float* GroggyHealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessDBNO");

	APlayerPawn_v2_C_ProcessDBNO_Params params;
	params.GroggyHealthPercent = GroggyHealthPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessRevive
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         RemainGroggyHealthPercent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::ProcessRevive(float* RemainGroggyHealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessRevive");

	APlayerPawn_v2_C_ProcessRevive_Params params;
	params.RemainGroggyHealthPercent = RemainGroggyHealthPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  ItemRef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::Cheat_GiveItem(class UClass* ItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem");

	APlayerPawn_v2_C_Cheat_GiveItem_Params params;
	params.ItemRef = ItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  ItemRef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::Cheat_Server_GiveItem(class UClass* ItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem");

	APlayerPawn_v2_C_Cheat_Server_GiveItem_Params params;
	params.ItemRef = ItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::Cheat_Give_Current_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo");

	APlayerPawn_v2_C_Cheat_Give_Current_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::Cheat_RevivePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer");

	APlayerPawn_v2_C_Cheat_RevivePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  ItemName                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APlayerPawn_v2_C::NotHaveThrowItemNotifyMessage(struct FText* ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage");

	APlayerPawn_v2_C_NotHaveThrowItemNotifyMessage_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::ServerSetupWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon");

	APlayerPawn_v2_C_ServerSetupWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InActivate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::Server_SetActiveRagdoll(bool InActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll");

	APlayerPawn_v2_C_Server_SetActiveRagdoll_Params params;
	params.InActivate = InActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform*             SpawnTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FTransform*             ImpactTransform                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APlayerPawn_v2_C::SimulateHeadShot(struct FTransform* SpawnTransform, struct FTransform* ImpactTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot");

	APlayerPawn_v2_C_SimulateHeadShot_Params params;
	params.SpawnTransform = SpawnTransform;
	params.ImpactTransform = ImpactTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_v2_C::Client_ResetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh");

	APlayerPawn_v2_C_Client_ResetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSpawn                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::Server_HandleRagdollActor(bool bSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor");

	APlayerPawn_v2_C_Server_HandleRagdollActor_Params params;
	params.bSpawn = bSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APlayerPawn_v2_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded");

	APlayerPawn_v2_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector3D                 InPos                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::Server_setRagdollActorPos(const class Vector3D& InPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos");

	APlayerPawn_v2_C_Server_setRagdollActorPos_Params params;
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_v2_C::ExecuteUbergraph_PlayerPawn_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2");

	APlayerPawn_v2_C_ExecuteUbergraph_PlayerPawn_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
