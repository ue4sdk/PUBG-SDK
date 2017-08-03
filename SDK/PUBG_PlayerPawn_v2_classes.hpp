#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C
// 0x029C (0x16EC - 0x1450)
class APlayerPawn_v2_C : public ATslCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1450(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UArrowComponent*                             ArrowPelvis;                                              // 0x1458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslCameraComponent*                         ScopingCamera;                                            // 0x1460(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslCharacterSpringArmComponent*             ThirdPersonSpringArm;                                     // 0x1468(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslCameraComponent*                         FirstPersonCamera;                                        // 0x1470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCamera;                                        // 0x1478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                        // 0x1480(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USplineComponent*                            ProjectionSpline;                                         // 0x1488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_Thrown;                                              // 0x1490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_Melee;                                               // 0x1498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_SideArm;                                             // 0x14A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_Secondary;                                           // 0x14A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_Primary;                                             // 0x14B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             WeaponCollisionArrow;                                     // 0x14B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             AudioListener;                                            // 0x14C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            BulletEffect_Sphere;                                      // 0x14C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmComponent*                         ScopingSpringArm;                                         // 0x14D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x14D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x14E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x14E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x14F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmComponent*                         FirstPersonSpringArm;                                     // 0x14F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _____0______0_DEE66D884AF1FD2B9A26539D66F76F92;           // 0x1500(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_DEE66D884AF1FD2B9A26539D66F76F92;       // 0x1504(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          АР„З|·xЗ_1;                                               // 0x1508(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTimerHandle                                TestInspectHandle;                                        // 0x1510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAnimInstance*                               BaseAnimInstance;                                         // 0x1518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      AudioListenerIsSet : 1;                                   // 0x1520(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinVCut;                                                  // 0x1524(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinZVCut;                                                 // 0x1528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DmgFactor;                                                // 0x152C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VDampingZ;                                                // 0x1530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      TestWeaponItemClass;                                      // 0x1538(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      TestAmmoItemClass;                                        // 0x1540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RagdollBone;                                              // 0x1548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RagdollBone_1;                                            // 0x1550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RagdollBone_2;                                            // 0x1558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RagdollBone_3;                                            // 0x1560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RagdollBone_4;                                            // 0x1568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RagdollBone_5;                                            // 0x1570(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RagdollBone_6;                                            // 0x1578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxJumpZVelocity;                                         // 0x1580(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementAfterJumpCounter;                                 // 0x1584(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinJumpZVelocity;                                         // 0x1588(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementAfterJumpCounterDecrease;                         // 0x158C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxMovementAfterJumpCounter;                              // 0x1590(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                Curve_TPP2FPP;                                            // 0x1598(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                Curve_FPP2TPP;                                            // 0x15A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                Curve_TPP2FPP_Pitch;                                      // 0x15A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                Curve_FPP2TPP_Pitch;                                      // 0x15B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsWeaponShoulderAttached : 1;                            // 0x15B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ADS_ReadyAngle;                                           // 0x15BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SocketOffset_YZ;                                          // 0x15C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      DirectionInertia;                                         // 0x15C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bProcessHitReaction : 1;                                  // 0x15D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      HitReaction_Direction;                                    // 0x15D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 HitReaction_Curve;                                        // 0x15E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HitReaction_Time;                                         // 0x15E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bHasVest : 1;                                             // 0x15EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslWeapon_Gun*                              ActiveGunRef;                                             // 0x15F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCameraUnderWater : 1;                                    // 0x15F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MapWaterLevel;                                            // 0x15FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UW_AdaptiveCrosshair_C*                      CrosshairWidget;                                          // 0x1600(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LastTraceCache;                                           // 0x1608(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LastDistanceCache;                                        // 0x1614(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LastDistanceCacheAlpha;                                   // 0x1618(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABP_CameraMan_C*                             CameraManRef;                                             // 0x1620(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              YawTarget;                                                // 0x1628(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              YawStep;                                                  // 0x162C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GameTime;                                                 // 0x1630(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCameraModifier_CameraShake*                 Shake;                                                    // 0x1638(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponCollisionAlpha;                                     // 0x1640(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UW_SprintBar_C*                              SprintBarWidget;                                          // 0x1648(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshArray;                                          // 0x1650(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UStaticMeshComponent*                        ImpactMeshRef;                                            // 0x1660(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bGrenadeProjectionShown : 1;                              // 0x1668(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      HeavyFallStarted : 1;                                     // 0x1669(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      PhysicalAnimationInitialized : 1;                         // 0x166A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsCrosshairObstructed : 1;                               // 0x166B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsInMenu : 1;                                            // 0x166C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATN_AudioTestActor_V2_C*                     AudioActorRef;                                            // 0x1670(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ADSDebuff : 1;                                            // 0x1678(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ADSDebuffValue;                                           // 0x167C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_EjectDamage;                                        // 0x1680(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABP_BulletCamActor_C*                        WeaponBulletCamRef;                                       // 0x1688(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsVaulting : 1;                                          // 0x1690(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultingTimer;                                            // 0x1694(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDrawDebugVault : 1;                                      // 0x1698(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABP_VaultHelperActor_C*                      VaultHelperRef;                                           // 0x16A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EVaultType>                            CurrentVaultType;                                         // 0x16A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultEndVelocity;                                         // 0x16AC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     VaultLastLocation;                                        // 0x16B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsClimbing : 1;                                          // 0x16C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bEndVaultToFall : 1;                                      // 0x16C5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultingDirection;                                        // 0x16C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UW_WeaponMenu_C*                             WeapMenuRef;                                              // 0x16D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABP_ActiveRagdollActor_C*                    RagdollActorRef;                                          // 0x16D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     RagdollActorPos;                                          // 0x16E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C");
		return ptr;
	}


	void Tick_PhysicalAnimation();
	void TEMP_WeapMenu_InitShow(bool ForceClose);
	void FixupThirdPersonCamera(class USceneComponent* AttachComponent);
	void SpawnDBNOEffect(float DBNOHealth);
	void TEMP_HandleVaultActorEnd(const class Vector3D& V_EndVelocity);
	void TEMP_HandleVaultActorStart(const class Vector3D& V_Start, const class Vector3D& V_Apex, const class Vector3D& V_ApexAdditive, const class Vector3D& V_End, bool IsClimbing, TEnumAsByte<EVaultType> InVaultType, bool EndToFall, float Direction);
	void TEMP_TickVaulting();
	void TEMP_HandleVaulting(const class Vector3D& ImpactLocation, const class Vector3D& CapsulePredictedLocation, const class Vector3D& Normal2D, const class Vector3D& DirectionVector, bool* IsPassed, class Vector3D* V_Start, class Vector3D* V_Apex, class Vector3D* V_End, bool* IsClimbing, class Vector3D* V_ApexAdditive, TEnumAsByte<EVaultType>* VaultType, bool* EndToFall, float* Direction);
	void TEMP_StartJump();
	void InitBulletCam();
	void ProcessADSDebuff();
	void ProcessMPC();
	void TestInspectObject();
	void TickSimulatePhysicsForAccessories();
	void LocalMagDrop(const class Vector3D& Velocity);
	void ProcessPhysicalAnimation();
	void ProcessLocalOnlyFunctions();
	void ProcessSplineMeshComponents(bool HasHit, const class Vector3D& LastHit, const class Rotator& LastHitRotation, TArray<class Vector3D>* PointArray);
	void InitializeSplineMeshComponents();
	void TEMPORARY_ProcessGrenadeProjection();
	void TEMPORARY_ProcessSprintBar();
	void InitializePhysicsForAccessories();
	void CheckWeaponCollision();
	void HandleMovementParameters();
	void ProcessAdaptiveCrosshair();
	void AddZeroing(float AddZero);
	void CheckCameraUnderwater();
	void ProcessHitReaction_Init(const class Vector3D& HitLocation);
	void ProcessHitReaction();
	void SetInertia();
	void SetCameraDOF();
	void ScopingSocketOffsetMoving();
	void AdjustCameraSwitching();
	void CheckForScoping();
	void push(const class Vector3D& Delta_Location);
	void UserConstructionScript();
	void АР„З|·xЗ_();
	void InpActEvt_invulnerable_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_decreaseMaxFlyAccerleration_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_IncreaseMaxFlyAccerleration_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_IncreaseZeroing_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_DecreaseZeroing_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_38(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_37(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_36(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_35(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_34(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_33(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_32(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_31(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_30(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_Decimal_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_Divide_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_FreeMoveMode_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Test_SetupWeapon_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Test_InspectObject_K2Node_InputActionEvent_9(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void SetupWeaponBlueprint();
	void ServerSetInvulnerability();
	void ServerFreeMove();
	void SpawnBulletPassByEffect(class Vector3D* Location, float* BulletVelocity);
	void Client_HitReaction(const class Vector3D& HitLocation);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void LocalMagazineDrop(class Vector3D* InitialVelocity);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void NotHaveHealItemNotifyMessage(struct FText* ItemName);
	void NotHaveBoostItemNotifyMessage();
	void ActivateADS_Debuff();
	void HiddenCrosshair();
	void Server_HandleVault(const class Vector3D& VaultStart, const class Vector3D& VaultApex, const class Vector3D& VaultApexAdditive, const class Vector3D& VaultEnd, bool IsClimbing, TEnumAsByte<EVaultType> InVaultType, bool EndToFall, float Direction);
	void HandleVaultEnd(const class Vector3D& InVaultEndVelocity);
	void OnJumped();
	void Local_HandleVault(const class Vector3D& VaultStart, const class Vector3D& VaultApex, const class Vector3D& VaultApexAdditive, const class Vector3D& VaultEnd, bool IsClimbing, TEnumAsByte<EVaultType> InVaultType, bool EndToFall, float Direction);
	void Client_HandleVault(const class Vector3D& VaultStart, const class Vector3D& VaultApex, const class Vector3D& VaultApexAdditive, const class Vector3D& VaultEnd, bool IsClimbing, TEnumAsByte<EVaultType> InVaultType, bool EndToFall, float Direction);
	void HandleVaultEnd_CP(class Vector3D* InVaultEndVelocity);
	void ProcessDBNO(float* GroggyHealthPercent);
	void ProcessRevive(float* RemainGroggyHealthPercent);
	void Cheat_GiveItem(class UClass* ItemRef);
	void Cheat_Server_GiveItem(class UClass* ItemRef);
	void Cheat_Give_Current_Ammo();
	void Cheat_RevivePlayer();
	void NotHaveThrowItemNotifyMessage(struct FText* ItemName);
	void ServerSetupWeapon();
	void Server_SetActiveRagdoll(bool InActivate);
	void SimulateHeadShot(struct FTransform* SpawnTransform, struct FTransform* ImpactTransform);
	void Client_ResetMesh();
	void Server_HandleRagdollActor(bool bSpawn);
	void OnLanded(struct FHitResult* Hit);
	void Server_setRagdollActorPos(const class Vector3D& InPos);
	void ExecuteUbergraph_PlayerPawn_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
