#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation
struct APlayerPawn_v2_C_Tick_PhysicalAnimation_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow
struct APlayerPawn_v2_C_TEMP_WeapMenu_InitShow_Params
{
	bool                                               ForceClose;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera
struct APlayerPawn_v2_C_FixupThirdPersonCamera_Params
{
	class USceneComponent*                             AttachComponent;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnDBNOEffect
struct APlayerPawn_v2_C_SpawnDBNOEffect_Params
{
	float                                              DBNOHealth;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorEnd
struct APlayerPawn_v2_C_TEMP_HandleVaultActorEnd_Params
{
	class Vector3D                                     V_EndVelocity;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorStart
struct APlayerPawn_v2_C_TEMP_HandleVaultActorStart_Params
{
	class Vector3D                                     V_Start;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_Apex;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_ApexAdditive;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_End;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsClimbing;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVaultType>                            InVaultType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EndToFall;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_TickVaulting
struct APlayerPawn_v2_C_TEMP_TickVaulting_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaulting
struct APlayerPawn_v2_C_TEMP_HandleVaulting_Params
{
	class Vector3D                                     ImpactLocation;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CapsulePredictedLocation;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Normal2D;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     DirectionVector;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsPassed;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_Start;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_Apex;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_End;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsClimbing;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     V_ApexAdditive;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVaultType>                            VaultType;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EndToFall;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Direction;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_StartJump
struct APlayerPawn_v2_C_TEMP_StartJump_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam
struct APlayerPawn_v2_C_InitBulletCam_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessADSDebuff
struct APlayerPawn_v2_C_ProcessADSDebuff_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC
struct APlayerPawn_v2_C_ProcessMPC_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject
struct APlayerPawn_v2_C_TestInspectObject_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories
struct APlayerPawn_v2_C_TickSimulatePhysicsForAccessories_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.LocalMagDrop
struct APlayerPawn_v2_C_LocalMagDrop_Params
{
	class Vector3D                                     Velocity;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation
struct APlayerPawn_v2_C_ProcessPhysicalAnimation_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions
struct APlayerPawn_v2_C_ProcessLocalOnlyFunctions_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessSplineMeshComponents
struct APlayerPawn_v2_C_ProcessSplineMeshComponents_Params
{
	TArray<class Vector3D>                             PointArray;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	bool                                               HasHit;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LastHit;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      LastHitRotation;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InitializeSplineMeshComponents
struct APlayerPawn_v2_C_InitializeSplineMeshComponents_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessGrenadeProjection
struct APlayerPawn_v2_C_TEMPORARY_ProcessGrenadeProjection_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar
struct APlayerPawn_v2_C_TEMPORARY_ProcessSprintBar_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories
struct APlayerPawn_v2_C_InitializePhysicsForAccessories_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision
struct APlayerPawn_v2_C_CheckWeaponCollision_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters
struct APlayerPawn_v2_C_HandleMovementParameters_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessAdaptiveCrosshair
struct APlayerPawn_v2_C_ProcessAdaptiveCrosshair_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.AddZeroing
struct APlayerPawn_v2_C_AddZeroing_Params
{
	float                                              AddZero;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater
struct APlayerPawn_v2_C_CheckCameraUnderwater_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction_Init
struct APlayerPawn_v2_C_ProcessHitReaction_Init_Params
{
	class Vector3D                                     HitLocation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction
struct APlayerPawn_v2_C_ProcessHitReaction_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia
struct APlayerPawn_v2_C_SetInertia_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SetCameraDOF
struct APlayerPawn_v2_C_SetCameraDOF_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving
struct APlayerPawn_v2_C_ScopingSocketOffsetMoving_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching
struct APlayerPawn_v2_C_AdjustCameraSwitching_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping
struct APlayerPawn_v2_C_CheckForScoping_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.push
struct APlayerPawn_v2_C_push_Params
{
	class Vector3D                                     Delta_Location;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript
struct APlayerPawn_v2_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.АР„З|·xЗ_
struct APlayerPawn_v2_C_АР„З|·xЗ__Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_invulnerable_K2Node_InputActionEvent_16
struct APlayerPawn_v2_C_InpActEvt_invulnerable_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_decreaseMaxFlyAccerleration_K2Node_InputActionEvent_15
struct APlayerPawn_v2_C_InpActEvt_decreaseMaxFlyAccerleration_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_IncreaseMaxFlyAccerleration_K2Node_InputActionEvent_14
struct APlayerPawn_v2_C_InpActEvt_IncreaseMaxFlyAccerleration_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_IncreaseZeroing_K2Node_InputActionEvent_13
struct APlayerPawn_v2_C_InpActEvt_IncreaseZeroing_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_DecreaseZeroing_K2Node_InputActionEvent_12
struct APlayerPawn_v2_C_InpActEvt_DecreaseZeroing_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_38
struct APlayerPawn_v2_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_38_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_K2Node_InputKeyEvent_37
struct APlayerPawn_v2_C_InpActEvt_Multiply_K2Node_InputKeyEvent_37_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_36
struct APlayerPawn_v2_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_36_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_35
struct APlayerPawn_v2_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_35_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_34
struct APlayerPawn_v2_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_34_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_33
struct APlayerPawn_v2_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_33_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_32
struct APlayerPawn_v2_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_32_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_K2Node_InputKeyEvent_31
struct APlayerPawn_v2_C_InpActEvt_Add_K2Node_InputKeyEvent_31_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_K2Node_InputKeyEvent_30
struct APlayerPawn_v2_C_InpActEvt_Subtract_K2Node_InputKeyEvent_30_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_29
struct APlayerPawn_v2_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_29_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28
struct APlayerPawn_v2_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_27
struct APlayerPawn_v2_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_27_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_26
struct APlayerPawn_v2_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_26_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25
struct APlayerPawn_v2_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_24
struct APlayerPawn_v2_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_24_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_K2Node_InputKeyEvent_23
struct APlayerPawn_v2_C_InpActEvt_Decimal_K2Node_InputKeyEvent_23_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_K2Node_InputKeyEvent_22
struct APlayerPawn_v2_C_InpActEvt_Divide_K2Node_InputKeyEvent_22_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_21
struct APlayerPawn_v2_C_InpActEvt_LeftBracket_K2Node_InputKeyEvent_21_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_20
struct APlayerPawn_v2_C_InpActEvt_RightBracket_K2Node_InputKeyEvent_20_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_FreeMoveMode_K2Node_InputActionEvent_11
struct APlayerPawn_v2_C_InpActEvt_FreeMoveMode_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Test_SetupWeapon_K2Node_InputActionEvent_10
struct APlayerPawn_v2_C_InpActEvt_Test_SetupWeapon_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Test_InspectObject_K2Node_InputActionEvent_9
struct APlayerPawn_v2_C_InpActEvt_Test_InspectObject_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay
struct APlayerPawn_v2_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick
struct APlayerPawn_v2_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint
struct APlayerPawn_v2_C_SetupWeaponBlueprint_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability
struct APlayerPawn_v2_C_ServerSetInvulnerability_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove
struct APlayerPawn_v2_C_ServerFreeMove_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect
struct APlayerPawn_v2_C_SpawnBulletPassByEffect_Params
{
	class Vector3D*                                    Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             BulletVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HitReaction
struct APlayerPawn_v2_C_Client_HitReaction_Params
{
	class Vector3D                                     HitLocation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveAnyDamage
struct APlayerPawn_v2_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.LocalMagazineDrop
struct APlayerPawn_v2_C_LocalMagazineDrop_Params
{
	class Vector3D*                                    InitialVelocity;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct APlayerPawn_v2_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     NormalImpulse;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage
struct APlayerPawn_v2_C_NotHaveHealItemNotifyMessage_Params
{
	struct FText*                                      ItemName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage
struct APlayerPawn_v2_C_NotHaveBoostItemNotifyMessage_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff
struct APlayerPawn_v2_C_ActivateADS_Debuff_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HiddenCrosshair
struct APlayerPawn_v2_C_HiddenCrosshair_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleVault
struct APlayerPawn_v2_C_Server_HandleVault_Params
{
	class Vector3D                                     VaultStart;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultApex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultApexAdditive;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultEnd;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsClimbing;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVaultType>                            InVaultType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EndToFall;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd
struct APlayerPawn_v2_C_HandleVaultEnd_Params
{
	class Vector3D                                     InVaultEndVelocity;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnJumped
struct APlayerPawn_v2_C_OnJumped_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Local_HandleVault
struct APlayerPawn_v2_C_Local_HandleVault_Params
{
	class Vector3D                                     VaultStart;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultApex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultApexAdditive;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultEnd;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsClimbing;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVaultType>                            InVaultType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EndToFall;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HandleVault
struct APlayerPawn_v2_C_Client_HandleVault_Params
{
	class Vector3D                                     VaultStart;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultApex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultApexAdditive;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VaultEnd;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsClimbing;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVaultType>                            InVaultType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EndToFall;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd_CP
struct APlayerPawn_v2_C_HandleVaultEnd_CP_Params
{
	class Vector3D*                                    InVaultEndVelocity;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessDBNO
struct APlayerPawn_v2_C_ProcessDBNO_Params
{
	float*                                             GroggyHealthPercent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessRevive
struct APlayerPawn_v2_C_ProcessRevive_Params
{
	float*                                             RemainGroggyHealthPercent;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem
struct APlayerPawn_v2_C_Cheat_GiveItem_Params
{
	class UClass*                                      ItemRef;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem
struct APlayerPawn_v2_C_Cheat_Server_GiveItem_Params
{
	class UClass*                                      ItemRef;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo
struct APlayerPawn_v2_C_Cheat_Give_Current_Ammo_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer
struct APlayerPawn_v2_C_Cheat_RevivePlayer_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage
struct APlayerPawn_v2_C_NotHaveThrowItemNotifyMessage_Params
{
	struct FText*                                      ItemName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon
struct APlayerPawn_v2_C_ServerSetupWeapon_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll
struct APlayerPawn_v2_C_Server_SetActiveRagdoll_Params
{
	bool                                               InActivate;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot
struct APlayerPawn_v2_C_SimulateHeadShot_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FTransform*                                 ImpactTransform;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh
struct APlayerPawn_v2_C_Client_ResetMesh_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor
struct APlayerPawn_v2_C_Server_HandleRagdollActor_Params
{
	bool                                               bSpawn;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded
struct APlayerPawn_v2_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos
struct APlayerPawn_v2_C_Server_setRagdollActorPos_Params
{
	class Vector3D                                     InPos;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2
struct APlayerPawn_v2_C_ExecuteUbergraph_PlayerPawn_v2_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
