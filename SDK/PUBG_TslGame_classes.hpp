#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TslGame.TslPopupInterface
// 0x0000 (0x0028 - 0x0028)
class UTslPopupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPopupInterface");
		return ptr;
	}


	void SetPopup(TEnumAsByte<EPopupStyle> PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate);
};


// Class TslGame.ActionInputEventHolder
// 0x0028 (0x0050 - 0x0028)
class UActionInputEventHolder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ActionInputEventHolder");
		return ptr;
	}

};


// Class TslGame.TslBaseHUD
// 0x0088 (0x0500 - 0x0478)
class ATslBaseHUD : public AHUD
{
public:
	class UClass*                                      MainUMGHudClass;                                          // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0480(0x0008) MISSED OFFSET
	TArray<class UActionInputEventHolder*>             ActionInputEventHolderArray;                              // 0x0488(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TMap<struct FString, struct FTslWidgetState>       WidgetStateMap;                                           // 0x0498(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FString>                             UseMouseWidgetStack;                                      // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UUserWidget*                                 MainUMGHud;                                               // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBaseHUD");
		return ptr;
	}


	void WidgetToggle(const struct FString& WidgetName);
	void WidgetShow(const struct FString& WidgetName, TEnumAsByte<EWidgetShowType> ShowType, class UObject* OptionalParam);
	void WidgetCreate(const struct FString& WidgetName, const struct FTslWidgetConfig& Config);
	void UnbindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<EInputEvent> InputEvent);
	void ShowPopupDialog(const struct FString& PopupWidgetName, TEnumAsByte<EPopupStyle> PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate);
	bool IsWidgetShow(const struct FString& WidgetName);
	bool HideWidgetByEscape();
	void HidePopupDialog(const struct FString& PopupWidgetName);
	class UUserWidget* GetWidget(const struct FString& WidgetName);
	class UUserWidget* GetMainUMGHud();
	void BindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<EInputEvent> InputEvent, const struct FScriptDelegate& ActionKeyDelegate);
};


// Class TslGame.AirborneEjectionArea
// 0x0010 (0x03A0 - 0x0390)
class AAirborneEjectionArea : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                          // 0x0390(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AirborneEjectionArea");
		return ptr;
	}

};


// Class TslGame.AnimDB
// 0x0100 (0x0128 - 0x0028)
class UAnimDB : public UDataAsset
{
public:
	struct FAnimInfo                                   Stand_Info;                                               // 0x0028(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimInfo                                   Crouch_Info;                                              // 0x0078(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimInfo                                   Prone_Info;                                               // 0x00C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendSpaceSpeed_Walk;                                     // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendSpaceSpeed_Run;                                      // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendSpaceSpeed_Sprint;                                   // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimDB");
		return ptr;
	}


	class UBlendSpace* GetBlendSpace(TEnumAsByte<EAnimStanceType> AnimStance);
	float GetAnimSpeed(TEnumAsByte<EAnimStanceType> AnimStance, float Direction, float InSpeed, float* PlayRate, float* SprintAlpha);
};


// Class TslGame.AnimNotify_CharacterAnimationNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_CharacterAnimationNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_CharacterAnimationNotify");
		return ptr;
	}

};


// Class TslGame.AnimNotify_UnarmedAttack
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_UnarmedAttack : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_UnarmedAttack");
		return ptr;
	}

};


// Class TslGame.AnimNotify_WeaponAnimationNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_WeaponAnimationNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_WeaponAnimationNotify");
		return ptr;
	}

};


// Class TslGame.AsyncStaticMeshComponent
// 0x0070 (0x0870 - 0x0800)
class UAsyncStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0800(0x0008) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       StaticMeshAsset;                                          // 0x0808(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0828(0x0008) MISSED OFFSET
	class UStaticMesh*                                 ErrorStaticMesh;                                          // 0x0830(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ClientCollisionProfileNameOverride;                       // 0x0838(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       PendingStaticMeshAsset;                                   // 0x0840(0x0020) (CPF_Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0860(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AsyncStaticMeshComponent");
		return ptr;
	}


	void SetStaticMeshAsset(TAssetPtr<class UStaticMesh> Asset);
	bool IsSameMesh(TAssetPtr<class UStaticMesh> Asset);
	TAssetPtr<class UStaticMesh> GetStaticMeshAsset();
	void ClearStaticMeshAsset();
};


// Class TslGame.BTDecorator_HasLoSTo
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_HasLoSTo : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      EnemyKey;                                                 // 0x0068(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BTDecorator_HasLoSTo");
		return ptr;
	}

};


// Class TslGame.BTTask_FindPointNearEnemy
// 0x0000 (0x0098 - 0x0098)
class UBTTask_FindPointNearEnemy : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BTTask_FindPointNearEnemy");
		return ptr;
	}

};


// Class TslGame.TslBuff
// 0x0060 (0x03F0 - 0x0390)
class ATslBuff : public AActor
{
public:
	struct FName                                       OverlapId;                                                // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EBuffOverlapSolveMethod>               OverlapSolveMethod;                                       // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	float                                              BuffTickInterval;                                         // 0x039C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BuffTickFirstDelay;                                       // 0x03A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BuffDuration;                                             // 0x03A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Infinite : 1;                                             // 0x03A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      AttachServerPaticleClass;                                 // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsDebuff : 1;                                             // 0x03C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UBuffComponet*                               OwnerBuffComponent;                                       // 0x03C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	class ATslServerParticle*                          AttachedServerPaticle;                                    // 0x03E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBuff");
		return ptr;
	}


	void TickBuff();
	void StopBuffBlueprint(bool bCanceled);
	void StartBuffBlueprint();
	class APawn* GetOwnerPawn();
	struct FAttackId GetAttackId();
	bool CanApplyBuff();
};


// Class TslGame.BuffComponet
// 0x0010 (0x0100 - 0x00F0)
class UBuffComponet : public UActorComponent
{
public:
	TArray<class ATslBuff*>                            Buffs;                                                    // 0x00F0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BuffComponet");
		return ptr;
	}


	void RemoveBuff(const struct FName& OverlapId);
	class ATslBuff* FindBuffWithOverlapId(const struct FName& BuffOverlapId);
	class ATslBuff* AddBuff(class UClass* TslBuffClass);
};


// Class TslGame.CameraSettings
// 0x0068 (0x0090 - 0x0028)
class UCameraSettings : public UObject
{
public:
	float                                              CameraPitchMinStand;                                      // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMaxStand;                                      // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMinStand;                                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMaxStand;                                        // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMinProne;                                      // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMaxProne;                                      // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMinProne;                                        // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMaxProne;                                        // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMinInVehicle;                                  // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMaxInVehicle;                                  // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMinInVehicle;                                    // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMaxInVehicle;                                    // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FName                                       HeadBoneName;                                             // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FString>                             HideMaterialsWhenCameraIsInHead;                          // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             HideMaterialsOnScopeMode;                                 // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             HideMaterialsOnHighScopeMode;                             // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CameraSettings");
		return ptr;
	}

};


// Class TslGame.CastableInterface
// 0x0000 (0x0028 - 0x0028)
class UCastableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CastableInterface");
		return ptr;
	}


	bool IsCastable(class ATslCharacter* Character);
	struct FText GetCastFailMessage(class ATslCharacter* Character);
	struct FCastConfig GetCastConfig();
};


// Class TslGame.CastComponent
// 0x0028 (0x0118 - 0x00F0)
class UCastComponent : public UActorComponent
{
public:
	struct FScriptDelegate                             OnFinishCast;                                             // 0x00F0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnCancelCast;                                             // 0x0100(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CastComponent");
		return ptr;
	}


	bool StartCast(const TScriptInterface<class UCastableInterface>& CastableInterface);
	float GetTotalCastTime();
	float GetElapsedCastTime();
	TEnumAsByte<ECastPriority> GetCastPriority();
	class UObject* GetCastObject();
	struct FText GetCastName();
	TEnumAsByte<ECastLevel> GetCastLevel();
	bool CancelCast();
};


// Class TslGame.CharacterBreathComponent
// 0x0090 (0x0180 - 0x00F0)
class UCharacterBreathComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	float                                              Breath;                                                   // 0x0100(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              BreathMax;                                                // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     BreathPointOffsetAtStand;                                 // 0x0108(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     BreathPointOffsetAtCrouch;                                // 0x0114(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     BreathPointOffsetAtProne;                                 // 0x0120(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UClass*                                      RestorationBuff;                                          // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ApneaDebuff;                                              // 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      HoldBreathDebuff;                                         // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumBreathStartHoldingBreath;                          // 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	class UClass*                                      SprintDebuff;                                             // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumBreathStartSprinting;                              // 0x0158(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x24];                                      // 0x015C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterBreathComponent");
		return ptr;
	}


	void OnRep_Breath(float LastBreath);
	bool IsInApnea();
	bool IsConsuming();
	float GetBreathRatio();
	float GetBreathMax();
	float GetBreath();
	bool CanStartSprinting();
	bool CanStartHoldingBreath();
	void AddBreath(float Value);
};


// Class TslGame.CharacterStudio
// 0x0080 (0x0410 - 0x0390)
class ACharacterStudio : public AActor
{
public:
	class USpringArmComponent*                         SpringArmComponent;                                       // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                          // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      TextureTarget;                                            // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewDistance;                                          // 0x03B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class UClass*                                      MaleCharacterProxyClass;                                  // 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FemaleCharacterProxyClass;                                // 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FTransform                                  CharacterInitialTransform;                                // 0x03D0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacterProxy*                          CharacterProxy;                                           // 0x0400(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class USceneComponent*                             CharacterRotationPivot;                                   // 0x0408(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterStudio");
		return ptr;
	}


	void Update();
	void SetCharacter(class ATslCharacter* Character);
	bool IsCharacterValid();
	void AddYaw(float Yaw);
};


// Class TslGame.CoherentCommonBinder
// 0x0078 (0x00A0 - 0x0028)
class UCoherentCommonBinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	struct FString                                     DefaultLobbyUrl;                                          // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CoherentCommonBinder");
		return ptr;
	}


	void BindUI();
};


// Class TslGame.CoherentWidgetBinder
// 0x0000 (0x00A0 - 0x00A0)
class UCoherentWidgetBinder : public UCoherentCommonBinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CoherentWidgetBinder");
		return ptr;
	}

};


// Class TslGame.LobbyCoherentWidgetBinder
// 0x0000 (0x00A0 - 0x00A0)
class ULobbyCoherentWidgetBinder : public UCoherentWidgetBinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyCoherentWidgetBinder");
		return ptr;
	}

};


// Class TslGame.TslBasePlayerController
// 0x0000 (0x06C0 - 0x06C0)
class ATslBasePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBasePlayerController");
		return ptr;
	}

};


// Class TslGame.TslPlayerController
// 0x0298 (0x0958 - 0x06C0)
class ATslPlayerController : public ATslBasePlayerController
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x06C0(0x0028) MISSED OFFSET
	unsigned char                                      bIsSpectated : 1;                                         // 0x06E8(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	class Vector3D                                     CameraPeekLeftMove;                                       // 0x06EC(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     CameraPeekRightMove;                                      // 0x06F8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0704(0x0010) MISSED OFFSET
	TEnumAsByte<ECameraViewBehaviour>                  CameraViewBehaviour;                                      // 0x0714(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x23];                                      // 0x0715(0x0023) MISSED OFFSET
	class Vector3D                                     SpectatorAccumViewRotation;                               // 0x0738(0x000C) (CPF_Net, CPF_Transient)
	TEnumAsByte<EObserverAuthorityType>                ObserverAuthorityType;                                    // 0x0744(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x13];                                      // 0x0745(0x0013) MISSED OFFSET
	class UActorComponent*                             InteractionTargetComponent;                               // 0x0758(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslCharacter*                               SpectatorViewCharacter;                                   // 0x0760(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0768(0x0010) MISSED OFFSET
	class UMeshComponent*                              SpectatorScopeMesh;                                       // 0x0778(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x48];                                      // 0x0780(0x0048) MISSED OFFSET
	TArray<struct FNearClippingLevelOverZ>             NearClippingLevelsOverZ;                                  // 0x07C8(0x0010) (CPF_ZeroConstructor, CPF_Config)
	float                                              MaxValidPing;                                             // 0x07D8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	class UVivoxComponent*                             VivoxComponent;                                           // 0x07E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class ATeam*>                               Teams;                                                    // 0x07E8(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<TWeakObjectPtr<class ATslCharacter>>        ReplicateTeamMembers;                                     // 0x07F8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData08[0x50];                                      // 0x0808(0x0050) MISSED OFFSET
	TArray<TWeakObjectPtr<class ATslCharacter>>        ReplicateCharacter;                                       // 0x0858(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData09[0x28];                                      // 0x0868(0x0028) MISSED OFFSET
	float                                              DeathResultDelaySeconds;                                  // 0x0890(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x80];                                      // 0x0894(0x0080) MISSED OFFSET
	struct FPingPongSummary                            PingPongSummary;                                          // 0x0914(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData11[0x38];                                      // 0x0920(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerController");
		return ptr;
	}


	void UnreliablePong(int SeqID, int64_t DateTimeTickFromServer);
	void UnreliablePing(int SeqID, int64_t DateTimeTick);
	void ToggleInventory();
	void Suicide();
	void SimulateInputKey(const struct FKey& Key, bool bPressed);
	void ShowTslDebugInfomation();
	void ShowTeamDeathPopup();
	void ShowPlayerControllerBindActions_Admin();
	void ShowMatchResult();
	void ShowInGameMenu();
	void ShowGotoLobbyPopUp(TEnumAsByte<EPopupButtonID> ButtonID);
	void SetCustomDepth(bool bOn);
	void ServerViewTargetReplicateUpdate();
	void ServerTryInteractByComponent(class UActorComponent* TargetComponent);
	void ServerTryInteract(class AActor* TargetObject);
	void ServerSuicide();
	void ServerStartInteractionByComponent(class UActorComponent* InteractionComponent);
	void ServerStartInteraction(class UInteractionComponent* InteractionComponent);
	void ServerSpawnVehicle();
	void ServerSetViewTarget(class AActor* NewViewTarget);
	void ServerSetThirdPerson(bool bNewThirdPerson);
	void ServerSetIsReviving(bool InbIsReviving);
	void ServerSetAccumViewRotation(const class Vector3D& InAccumViewRotation);
	void ServerSendPacketUnreliable(TArray<unsigned char> Packet);
	void ServerSendPacketReliable(TArray<unsigned char> Packet);
	void ServerSay(const struct FString& Msg);
	void ServerNotifyHitToGlassWindowInst(class UTslInstancedGlassWindowComponent* GlassWindowInstComponent, const struct FHitResult& Hit);
	void ServerNotifyHitToGlassWindow(class UTslGlassWindowComponent* GlassWindowComponent, const struct FHitResult& Hit);
	void ServerNextSetViewTarget(bool bIsPrev);
	void ServerMoveToVehicleSeat(int SeatIndex);
	void ServerMapLoadFinishedOnClient();
	void ServerKickCharacter(class ATslCharacter* TslCharacter, const struct FText& Reason);
	void ServerHoldRotation(bool bEnable);
	void ServerCheat(const struct FString& Msg);
	void ServerCancelInteraction(class UActorComponent* InteractionComponent);
	void ServerBroadCastUsedUpdateCameraMode(const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void ServerBroadCastCastingBar(float CastTime, const struct FText& CastName, bool OnOff);
	void ServerBEServerCommand(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2);
	void ServerAdmin(const struct FString& AdminCommand);
	void SendSystemMessage(TEnumAsByte<ESystemMessageType> MessageType, const struct FText& Message, float MessageDuration);
	void Say(const struct FString& Msg);
	void ReliablePong(int SeqID, int64_t DateTimeTickFromServer);
	void ReliablePing(int SeqID, int64_t DateTimeTick);
	void OnUpdateSpectatorCameraMode(class ATslCharacter* TslCharacter, const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void OnShowCastingBarWidget(float CastTime, const struct FText& CastName, bool OnOff);
	void OnRep_Team();
	void OnRep_CameraViewBehaviour();
	void OnMoveToVehicleSeat(unsigned char idx);
	void OnItemStackCountHandlingMode();
	void OnFinishInteractionCast(class UObject* CastObject);
	void OnCancelInteractionCast(class UObject* CastObject);
	void OffItemStackCountHandlingMode();
	void ObserverTeleportTo(const class Vector3D& Location);
	void NextSetViewTarget();
	void KickCharacter(class ATslCharacter* TslCharacter, const struct FText& Reason);
	bool IsSpectatorState();
	bool IsSpectating();
	bool IsSameObservingCameraMode(TEnumAsByte<EObserverCameraMode> CameraType);
	bool IsReplaying();
	bool IsObserving();
	bool IsItemStackCountHandlingMode();
	bool IsHighPing();
	bool IsGroggying();
	bool IsGameInputAllowed();
	void HideTslDebugInfomation();
	void HideMatchResult();
	class UVivoxComponent* GetVivoxComponent();
	class ATslCharacter* GetViewTargetTslCharacter();
	class ATeam* GetViewTargetTeam();
	TArray<struct FTslPlayerMatchResultInfo> GetTslPlayerMatchResultInfos();
	class ATslCharacter* GetTslCharacter();
	int GetTeamMemberCount();
	class Rotator GetTargetViewRotation();
	TArray<class ATslCharacter*> GetReplicateTeamMembers();
	TArray<class ATslCharacter*> GetReplicateCharacters();
	float GetOtherElapsedCastTime();
	float GetOtherCastTime();
	struct FText GetOtherCastingName();
	TEnumAsByte<EObserverCameraMode> GetObserverCameraMode();
	TEnumAsByte<EObserverAuthorityType> GetObserverAuthorityType();
	struct FText GetHudDebugText();
	TArray<class ATeam*> GetClientTeam(bool IncludeSelf);
	bool GetCanAllSpectate();
	int GetAliveTeamMemberCount();
	void DumpActorDetailByRaycast();
	void DropItem(const struct FString& ItemTypeName);
	void ClientUpdateSpectatorCameraMode(const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void ClientStartOnlineGame();
	void ClientShowMatchResult();
	void ClientShowCastingBar(float CastTime, const struct FText& CastName, bool OnOff);
	void ClientSetTslPlayerMatchResultInfos(TArray<struct FTslPlayerMatchResultInfo> InTslPlayerMatchResultInfos);
	void ClientSetSpectatorCamera(const class Vector3D& CameraLocation, const class Rotator& CameraRotation);
	void ClientSetCanAllSpectate(bool InbCanSpectate);
	void ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds);
	void ClientSendPacketUnreliable(TArray<unsigned char> Packet);
	void ClientSendPacketReliable(TArray<unsigned char> Packet);
	void ClientOnCharacterRestart();
	void ClientOnCharacterDeath(bool bIsTeamMatch, bool bHasAliveTeamMember);
	void ClientNotifyStartBuff(const struct FName& BuffName, bool bStart);
	void ClientNotifySpeedBoost(float Boost);
	void ClientNotifyRestrictingPlayArea();
	void ClientNotifyNextGasIn(const class Vector3D& PoisonGasWarningPosition, float PoisonGasWarningRadius);
	void ClientNotifyHealAmount_Unreliable(float Heal);
	void ClientNotifyHealAmount_Reliable(float Heal);
	void ClientNotifyHealAmount(float Heal);
	void ClientNotifyHeal_Unreliable(float HealthStart, float Health, float MaxHealth);
	void ClientNotifyHeal_Reliable(float HealthStart, float Health, float MaxHealth);
	void ClientNotifyHeal(float HealthStart, float Health, float MaxHealth);
	void ClientInteractByComponent(class UActorComponent* TargetComponent);
	void ClientInteract(class AActor* TargetObject);
	void ClientGameStarted();
	void ClientEndOnlineGame();
	void ClientAdminCopyString(const struct FString& inString);
	void BEServer(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2);
	void BEClient(const struct FString& Command);
	void Admin(const struct FString& ServerAdminCommand);
};


// Class TslGame.ConnectionHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UConnectionHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ConnectionHandlerInterface");
		return ptr;
	}

};


// Class TslGame.DeployedItem
// 0x0018 (0x03A8 - 0x0390)
class ADeployedItem : public AActor
{
public:
	class UClass*                                      ItemType;                                                 // 0x0390(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x03A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DeployedItem");
		return ptr;
	}

};


// Class TslGame.SubActor
// 0x0008 (0x0398 - 0x0390)
class ASubActor : public AActor
{
public:
	class ATslCharacter*                               NetOwnerCharacter;                                        // 0x0390(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SubActor");
		return ptr;
	}

};


// Class TslGame.SlotInterface
// 0x0000 (0x0028 - 0x0028)
class USlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SlotInterface");
		return ptr;
	}


	bool IsWeapon();
	bool IsStackable();
	bool IsPackageItem();
	bool IsEquipable();
	bool IsCastableItem();
	bool IsAttachment();
	float GetUnitSpace();
	class UTexture* GetToolTipIconTexture();
	float GetToolTipIconSizeRatio();
	int GetStackCountMax();
	int GetStackCount();
	float GetSpace();
	int GetSortPriority();
	struct FText GetSlotName();
	struct FText GetSlotDetailedName();
	struct FText GetSlotDescription();
	struct FText GetSlotCategory();
	class UTexture* GetIconTexture();
	float GetIconSizeRatio();
	class UAkAudioEvent* GetDropSound();
};


// Class TslGame.SlotContainerInterface
// 0x0000 (0x0028 - 0x0028)
class USlotContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SlotContainerInterface");
		return ptr;
	}


	void ShowSlotContextMenu(const TScriptInterface<class USlotInterface>& Slot);
	bool IsEnableAction(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void HideSlotContextMenu();
	TScriptInterface<class USlotInterface> GetSlotContext();
	class AActor* GetSlotContainerOwner();
	struct FName GetSlotContainerName();
	struct FName GetDefaultActionName(const TScriptInterface<class USlotInterface>& Slot);
	TArray<struct FName> GetAvailableSlotActions(const TScriptInterface<class USlotInterface>& Slot);
	TArray<TScriptInterface<class USlotInterface>> GetAllSlots();
	struct FName GetActionName(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void DropSlotOnOtherContainer(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void DoSlotActionDefault(const TScriptInterface<class USlotInterface>& Slot);
	void DoSlotAction(const struct FName& ActionName, const struct FString& Options);
	void DoActionWithSlot(const TScriptInterface<class USlotInterface>& Slot, const struct FName& ActionName, const struct FString& Options);
};


// Class TslGame.ItemSlotContainer
// 0x0030 (0x03C8 - 0x0398)
class AItemSlotContainer : public ASubActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnCreateAndShowContextMenuWidget;                         // 0x03A0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnDestroyContextMenuWidget;                               // 0x03B0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSlotContainer");
		return ptr;
	}

};


// Class TslGame.ItemExplorerInterface
// 0x0000 (0x0028 - 0x0028)
class UItemExplorerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemExplorerInterface");
		return ptr;
	}


	void UpdateItemList();
	TArray<TScriptInterface<class USlotInterface>> GetExplorableItemSlotList();
};


// Class TslGame.ItemExplorer
// 0x0030 (0x03F8 - 0x03C8)
class AItemExplorer : public AItemSlotContainer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnUpdateItemList;                                         // 0x03D0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnClearItemList;                                          // 0x03E0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemExplorer");
		return ptr;
	}

};


// Class TslGame.ExplorableItemInterface
// 0x0000 (0x0028 - 0x0028)
class UExplorableItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ExplorableItemInterface");
		return ptr;
	}


	bool IsValidExplorableItem();
	struct FName GetInteractiveActionName();
	float GetExplorationDistance();
};


// Class TslGame.Item
// 0x0160 (0x0188 - 0x0028)
class UItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	unsigned char                                      bStackable : 1;                                           // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bUsable : 1;                                              // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bDisableSpawnInGame : 1;                                  // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                StackCount;                                               // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ItemName;                                                 // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ItemCategory;                                             // 0x0058(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ItemDetailedName;                                         // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ItemDescription;                                          // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              ItemMaxInteractableDistance;                              // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackCountMax;                                            // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpacePerItem;                                             // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       DroppedMesh;                                              // 0x00B0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              DroppedMeshScale;                                         // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TAssetPtr<class UTexture>                          Icon;                                                     // 0x00D8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UTexture>                          ToolTipIcon;                                              // 0x00F8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              IconSizeRatio;                                            // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ToolTipIconSizeRatio;                                     // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DropSoundAk;                                              // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               PickUpSoundAk;                                            // 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               InventoryPutSoundAk;                                      // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SortPriority;                                             // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                LobbyItemID;                                              // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLobbyItemDesc                              LobbyItemDesc;                                            // 0x0140(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TEnumAsByte<EItemCategory>                         Category;                                                 // 0x0170(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	struct FName                                       SubCategory;                                              // 0x0178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsToy : 1;                                               // 0x0180(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Item");
		return ptr;
	}


	bool UseBy(class ATslCharacter* Character);
	bool PickUpBy(class ATslCharacter* Character, const struct FName& TargetContainer, const struct FString& Options);
	bool IsWeapon();
	bool IsToy();
	bool IsPackageItem();
	bool IsEquipable();
	bool IsCastableItem();
	bool IsAttachment();
	class UTexture* GetIconTexture();
};


// Class TslGame.ItemPackage
// 0x00F8 (0x04F0 - 0x03F8)
class AItemPackage : public AItemExplorer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F8(0x0010) MISSED OFFSET
	struct FText                                       PackageName;                                              // 0x0408(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       PackageCategory;                                          // 0x0420(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       PackageDetailedName;                                      // 0x0438(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       PackageDescription;                                       // 0x0450(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	class UTexture*                                    PackageIcon;                                              // 0x0468(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PackageIconSizeRatio;                                     // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class UTexture*                                    PackageToolTipIcon;                                       // 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PackageToolTipIconSizeRatio;                              // 0x0480(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       PackageMesh;                                              // 0x0488(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	class UBoxComponent*                               BoxComponent;                                             // 0x04A8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UOnceInteractionComponent*                   InteractionComponent;                                     // 0x04B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      DestroyByEmptyItem : 1;                                   // 0x04B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	TArray<class UItem*>                               Items;                                                    // 0x04C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst)
	struct FString                                     CreatorName;                                              // 0x04D0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor)
	int                                                SortPriority;                                             // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemPackage");
		return ptr;
	}


	void Items_RepNotify();
	bool IsOpenedBy(class ATslCharacter* Character);
	void ClientOnInteractBy(class ATslCharacter* OtherCharacter);
	bool AllowInteract(class ATslCharacter* OtherCharacter);
};


// Class TslGame.DeployedItemPackage
// 0x0018 (0x03A8 - 0x0390)
class ADeployedItemPackage : public AActor
{
public:
	class UClass*                                      ItemPackageType;                                          // 0x0390(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPackagedItemInfo>                   ItemInfos;                                                // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DeployedItemPackage");
		return ptr;
	}

};


// Class TslGame.DoorDataAsset
// 0x0038 (0x0060 - 0x0028)
class UDoorDataAsset : public UDataAsset
{
public:
	float                                              OpenAngle;                                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 OpenCurve;                                                // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OpenCurveDuration;                                        // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CloseCurve;                                               // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseCurveDuration;                                       // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OpenSound;                                                // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CloseSound;                                               // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DoorDataAsset");
		return ptr;
	}

};


// Class TslGame.TslReactionDoorData
// 0x0040 (0x0068 - 0x0028)
class UTslReactionDoorData : public UDataAsset
{
public:
	float                                              PointDamageImpulse;                                       // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageRadius;                                        // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingRadius;                                           // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingImpulse;                                          // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingMinDamage;                                        // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ZombieDamageAccumulateTimeout;                            // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       TopImpactSoketName;                                       // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CenterImpactSoketName;                                    // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BottomImpactSoketName;                                    // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DestructibleSoundAk;                                      // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionDoorData");
		return ptr;
	}

};


// Class TslGame.DoorFrameComponent
// 0x0070 (0x0870 - 0x0800)
class UDoorFrameComponent : public UStaticMeshComponent
{
public:
	struct FTransform                                  DoorTransform;                                            // 0x0800(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     SoundOffsetFromDoor;                                      // 0x0830(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 DoorStaticMesh;                                           // 0x0840(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           DoorDestructibleMesh;                                     // 0x0848(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDoorDataAsset*                              DoorDataAsset;                                            // 0x0850(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslReactionDoorData*                        ReactionDoorData;                                         // 0x0858(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0860(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DoorFrameComponent");
		return ptr;
	}


	class UStaticMesh* GetDoorStaticMesh();
};


// Class TslGame.DroppedItem
// 0x0008 (0x0398 - 0x0390)
class ADroppedItem : public AActor
{
public:
	class UItem*                                       Item;                                                     // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItem");
		return ptr;
	}


	void Item_RepNotify();
};


// Class TslGame.DroppedItemGridManager
// 0x00B0 (0x0440 - 0x0390)
class ADroppedItemGridManager : public AInfo
{
public:
	float                                              MaxGridSize;                                              // 0x0390(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxGridLayerNum;                                          // 0x0394(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxItemNumPerGroup;                                       // 0x0398(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x039C(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemGridManager");
		return ptr;
	}

};


// Class TslGame.DroppedItemGroup
// 0x0008 (0x0398 - 0x0390)
class ADroppedItemGroup : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemGroup");
		return ptr;
	}


	void OnItemEndPlay();
	void OnItemBeginPlay();
	bool AddItem(class UItem* NewItem, const class Vector3D& NewWorldLocation, const class Rotator& NewWorldRotation);
};


// Class TslGame.DroppedItemInterface
// 0x0000 (0x0028 - 0x0028)
class UDroppedItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemInterface");
		return ptr;
	}


	class UItem* GetDroppedItem();
};


// Class TslGame.ExportableDataAsset
// 0x0020 (0x0048 - 0x0028)
class UExportableDataAsset : public UDataAsset
{
public:
	struct FDirectoryPath                              JsonSaveDirectory;                                        // 0x0028(0x0010) (CPF_Edit)
	struct FString                                     JsonSaveFileName;                                         // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ExportableDataAsset");
		return ptr;
	}

};


// Class TslGame.LobbyCustomizableData
// 0x0020 (0x0068 - 0x0048)
class ULobbyCustomizableData : public UExportableDataAsset
{
public:
	TArray<struct FLobbyFaceElement>                   Faces;                                                    // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FLobbyHairElement>                   Hairs;                                                    // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyCustomizableData");
		return ptr;
	}

};


// Class TslGame.LobbyItemExporter
// 0x0000 (0x0048 - 0x0048)
class ULobbyItemExporter : public UExportableDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyItemExporter");
		return ptr;
	}

};


// Class TslGame.FlashBangCaptureActor
// 0x0030 (0x03C0 - 0x0390)
class AFlashBangCaptureActor : public AActor
{
public:
	class USceneComponent*                             SceneRootComponent;                                       // 0x0390(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCapture;                                             // 0x0398(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class APawn*                                       PlayerPawnReference;                                      // 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      CaptureTexture;                                           // 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FlashBangCaptureActor");
		return ptr;
	}


	void CaptureScreen();
	void CaptureINIT(bool bDoDelay, float CaptureDelay, class APawn* PlayerRef, class UTextureRenderTarget2D* RenderTexture, const struct FPostProcessSettings& PP_Settings, bool bHidePawn);
};


// Class TslGame.GameStateListenerComponent
// 0x0020 (0x0110 - 0x00F0)
class UGameStateListenerComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnMatchStateChange;                                       // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameModeEvent;                                          // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.GameStateListenerComponent");
		return ptr;
	}

};


// Class TslGame.GeneralItemSpawner
// 0x0000 (0x0028 - 0x0028)
class UGeneralItemSpawner : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.GeneralItemSpawner");
		return ptr;
	}


	TArray<class UItem*> CreateItems();
	TArray<struct FItemInitiator> CreateItemInitiators();
};


// Class TslGame.TableGeneralItemSpawner
// 0x00C0 (0x00E8 - 0x0028)
class UTableGeneralItemSpawner : public UGeneralItemSpawner
{
public:
	class UDataTable*                                  RawItemSpawnDataTable;                                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FGeneralItemSpawnProb>               SpawnProbArray;                                           // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0048(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TableGeneralItemSpawner");
		return ptr;
	}

};


// Class TslGame.HackReporterComponent
// 0x0018 (0x0108 - 0x00F0)
class UHackReporterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.HackReporterComponent");
		return ptr;
	}

};


// Class TslGame.InteractionInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractionInterface");
		return ptr;
	}


	struct FText GetInteractiveObjectName();
	struct FText GetInteractionVerb();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.InteractionComponent
// 0x0180 (0x0270 - 0x00F0)
class UInteractionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	float                                              MaxInteractableDistance;                                  // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FText                                       InteractionVerb;                                          // 0x0108(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       InteractiveObjectName;                                    // 0x0120(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FCastConfig                                 CastConfig;                                               // 0x0138(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bUseTraceCheck : 1;                                       // 0x0168(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInteractBy;                                             // 0x0170(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnInteractBy;                                       // 0x0180(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData03[0xE0];                                      // 0x0190(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractionComponent");
		return ptr;
	}


	struct FText GetInteractiveObjectName();
	struct FText GetInteractionVerb();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.DoublePhaseInteractionComponent
// 0x00D0 (0x0340 - 0x0270)
class UDoublePhaseInteractionComponent : public UInteractionComponent
{
public:
	struct FText                                       FirstInteractionVerb;                                     // 0x0270(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       FirstInteractiveObjectName;                               // 0x0288(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       SecondInteractionVerb;                                    // 0x02A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       SecondInteractiveObjectName;                              // 0x02B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSecondInteractBy;                                       // 0x02D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnSecondInteractBy;                                 // 0x02E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x02F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DoublePhaseInteractionComponent");
		return ptr;
	}

};


// Class TslGame.DroppedItemActorComponent
// 0x0020 (0x0290 - 0x0270)
class UDroppedItemActorComponent : public UInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0270(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemActorComponent");
		return ptr;
	}


	void OnInteractDelegate(class ATslCharacter* OtherCharacter);
	bool AllowInteractDelegate(class ATslCharacter* OtherCharacter);
};


// Class TslGame.OnceInteractionComponent
// 0x0010 (0x0280 - 0x0270)
class UOnceInteractionComponent : public UInteractionComponent
{
public:
	TArray<struct FName>                               CharacterHistory;                                         // 0x0270(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.OnceInteractionComponent");
		return ptr;
	}

};


// Class TslGame.InteractorComponent
// 0x0000 (0x00F0 - 0x00F0)
class UInteractorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractorComponent");
		return ptr;
	}

};


// Class TslGame.AmmoItem
// 0x0010 (0x0198 - 0x0188)
class UAmmoItem : public UItem
{
public:
	class UTexture*                                    AmmoIcon;                                                 // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AmmoIconRatio;                                            // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AmmoItem");
		return ptr;
	}

};


// Class TslGame.AttachableItem
// 0x00D8 (0x0260 - 0x0188)
class UAttachableItem : public UItem
{
public:
	struct FWeaponAttachmentData                       AttachmentData;                                           // 0x0188(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                                      // 0x0220(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FWeaponAttachmentWeaponTagData>      AttachmentWeaponTagData;                                  // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      EquipOnPickUp : 1;                                        // 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               AttachedSoundAk;                                          // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AttachableItem");
		return ptr;
	}


	TEnumAsByte<EWeaponAttachmentSlotID> GetAttachmentSlotID(const struct FName& WeaponTag);
	struct FWeaponAttachmentData GetAttachmentData(const struct FName& WeaponTag);
};


// Class TslGame.CastableItem
// 0x0038 (0x01C0 - 0x0188)
class UCastableItem : public UItem
{
public:
	struct FCastConfig                                 CastConfig;                                               // 0x0188(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanUseInWater : 1;                                       // 0x01B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CastableItem");
		return ptr;
	}

};


// Class TslGame.EquipableItem
// 0x0090 (0x0218 - 0x0188)
class UEquipableItem : public UItem
{
public:
	TEnumAsByte<EEquipSlotID>                          EquipSlotID;                                              // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              SpaceExtension;                                           // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageReductionRate;                                      // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DurabilityMax;                                            // 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DestroyByDurability : 1;                                  // 0x0198(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	float                                              Durability;                                               // 0x019C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EDurabilityConsumeType>                DurabilityConsumeType;                                    // 0x01A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForMale;                      // 0x01A8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForFemale;                    // 0x01D8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               EquipedSoundAk;                                           // 0x0208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EEquipableItemSoundGroup>              SoundGroup;                                               // 0x0210(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EEquipableItemSoundType>               SoundType;                                                // 0x0211(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanZombieEquip : 1;                                      // 0x0212(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsUnequipable : 1;                                       // 0x0213(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.EquipableItem");
		return ptr;
	}


	void UnequipBy(class ATslCharacter* Character);
	bool EquipBy(class ATslCharacter* Character, const struct FEquipPosition& Position);
	bool CanEquipTo(class ATslCharacter* Character);
};


// Class TslGame.CustomEquipableItem
// 0x00F8 (0x0310 - 0x0218)
class UCustomEquipableItem : public UEquipableItem
{
public:
	int                                                ItemLevel;                                                // 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	struct FTransform                                  SlotOffset_Primary;                                       // 0x0220(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Secondary;                                     // 0x0250(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_SideArm;                                       // 0x0280(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Melee;                                         // 0x02B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Thrown;                                        // 0x02E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CustomEquipableItem");
		return ptr;
	}


	struct FTransform GetOffset_Thrown();
	struct FTransform GetOffset_SideArm();
	struct FTransform GetOffset_Secondary();
	struct FTransform GetOffset_Primary();
	struct FTransform GetOffset_Melee();
	int GetItemLevel();
};


// Class TslGame.ParachuteItem
// 0x0008 (0x0220 - 0x0218)
class UParachuteItem : public UEquipableItem
{
public:
	class UClass*                                      ParachuteType;                                            // 0x0218(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteItem");
		return ptr;
	}

};


// Class TslGame.ThrowableItem
// 0x0018 (0x0230 - 0x0218)
class UThrowableItem : public UEquipableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UClass*                                      WeaponType;                                               // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslWeapon*                                  EquippedWeapon;                                           // 0x0228(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThrowableItem");
		return ptr;
	}


	class ATslWeapon* GetEquippedWeapon();
	class ATslWeapon* GetDefaultWeaponObject();
};


// Class TslGame.TslWeapon
// 0x03E8 (0x0778 - 0x0390)
class ATslWeapon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	class UTexture*                                    WeaponIcon;                                               // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponIconRatio;                                          // 0x03A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	struct FCanvasIcon                                 PrimaryIcon;                                              // 0x03A8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 SecondaryIcon;                                            // 0x03C0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 PrimaryClipIcon;                                          // 0x03D8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 SecondaryClipIcon;                                        // 0x03F0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              AmmoIconsCount;                                           // 0x0408(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PrimaryClipIconOffset;                                    // 0x040C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SecondaryClipIconOffset;                                  // 0x0410(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	struct FCanvasIcon                                 Crosshair[0x5];                                           // 0x0418(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 AimingCrosshair[0x5];                                     // 0x0490(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UseLaserDot : 1;                                          // 0x0508(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UseCustomCrosshair : 1;                                   // 0x0509(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UseCustomAimingCrosshair : 1;                             // 0x050A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bHideCrosshairWhileNotAiming : 1;                         // 0x050B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUpdatedAttachment;                                      // 0x0510(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class ATslCharacter*                               MyPawn;                                                   // 0x0520(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FWeaponData                                 WeaponConfig;                                             // 0x0528(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<EWeaponHand>                           WeaponHand;                                               // 0x05B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh3P;                                                   // 0x05C0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             RootScene;                                                // 0x05C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             HandIK_Left;                                              // 0x05D0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             HandIK_Right;                                             // 0x05D8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x05E0(0x0001) MISSED OFFSET
	TEnumAsByte<EAttachmentCalculateType>              AttachmentAniRateCalculateType;                           // 0x05E1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EAttachmentCalculateType>              AttachmentRecoilPatternScaleCalculateType;                // 0x05E2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x05E3(0x0005) MISSED OFFSET
	TArray<struct FWeaponAttachmentPositionData>       AttachmentPositionData;                                   // 0x05E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FWeaponAttachmentAssetData>          DefaultAttachedItemAssets;                                // 0x05F8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              AttachedItemClasses;                                      // 0x0608(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	struct FName                                       WeaponTag;                                                // 0x0618(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0620(0x0018) MISSED OFFSET
	TMap<TEnumAsByte<EWeaponAttachmentSlotID>, class UAsyncStaticMeshComponent*> AttachedStaticComponentMap;                               // 0x0638(0x0050) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	class UAkComponent*                                AkComponent;                                              // 0x0688(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       MuzzleAttachPoint;                                        // 0x0690(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       FiringAttachPoint;                                        // 0x0698(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ScopingAttachPoint;                                       // 0x06A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             MuzzleFx;                                                 // 0x06A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ShellFxAttachPoint;                                       // 0x06B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShellFxClass;                                             // 0x06B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    MuzzlePSC;                                                // 0x06C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    MuzzlePSCSecondary;                                       // 0x06C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      FireCameraShake;                                          // 0x06D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        FireForceFeedback;                                        // 0x06D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FireSoundAk;                                              // 0x06E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FireLoopSoundAk;                                          // 0x06E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FireFinishSoundAk;                                        // 0x06F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OutOfAmmoSoundAk;                                         // 0x06F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ReloadSoundAk;                                            // 0x0700(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EquipSoundAk;                                             // 0x0708(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EAnimWeaponType>                       AnimWeaponType;                                           // 0x0710(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	struct FWeaponBasicAnim                            WeaponAnim;                                               // 0x0718(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponRollAnim                             ProneRollAnim;                                            // 0x0730(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HipDuration;                                              // 0x0740(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLoopedMuzzleFX : 1;                                      // 0x0744(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bLoopedFireSound : 1;                                     // 0x0744(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData09[0x33];                                      // 0x0745(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon");
		return ptr;
	}


	void Weapon_AttachShoulder();
	void Weapon_AttachHand();
	void SimulatePhysicalBodyHit(const struct FHitResult& Impact, const class Vector3D& ShotDirection);
	void SetCurrentWeaponZero(float newZero);
	void ServerLogFireWeapon(const struct FAttackId& AttackId);
	void OnRep_MyPawn();
	void OnRep_AttachedItemClasses();
	void OnAnimationNotify(const struct FName& NotifyName);
	bool IsWeaponAttachedToShoulder();
	bool IsCustomSightAttached(TEnumAsByte<EWeaponAttachmentSlotID> SlotID);
	float GetWeaponReadyDuration();
	class USkeletalMeshComponent* GetWeaponMesh();
	TEnumAsByte<EWeaponGripLeftHand> GetWeaponGripTypeLeft();
	float GetWeaponEquipDuration();
	float GetWeaponDamage();
	struct FWeaponData GetWeaponConfig();
	TEnumAsByte<EWeaponClass> GetWeaponClassEnum();
	struct FName GetWeaponAttachmentPoint(TEnumAsByte<EWeaponAttachmentSlotID> SlotID, const struct FName& Tag);
	struct FWeaponAttachmentData GetWeaponAttachmentData(TEnumAsByte<EWeaponAttachmentSlotID> SlotID);
	struct FWeaponAttachmentAssetData GetWeaponAttachmentAsset(TEnumAsByte<EWeaponAttachmentSlotID> SlotID);
	float GetWeaponAnimationKick();
	TEnumAsByte<EThrownWeaponType> GetThrownType();
	class Vector3D GetSwayModifier();
	float GetStanceSwayModifier(TEnumAsByte<EAnimStance> Stance);
	class UAnimMontage* GetRecoilMontage();
	class ATslCharacter* GetPawnOwner();
	class Vector3D GetLowerRailOffset();
	struct FText GetItemName();
	class USceneComponent* GetHandIK_Right();
	class USceneComponent* GetHandIK_Left();
	bool GetDoGripPose();
	float GetCurrentWeaponZero();
	TArray<class UAsyncStaticMeshComponent*> GetAttachedMesh();
	TEnumAsByte<EAnimWeaponType> GetAnimWeaponType();
	TArray<struct FWeaponAttachmentData> GetAllWeaponAttachmentData();
	TArray<struct FWeaponAttachmentAssetData> GetAllWeaponAttachmentAssets();
	void ClientOnUnArmed();
	void ClientInitByReconnection(bool bIsArmed);
	void AttachWeaponToSlot(int SlotIndex);
	void AttachWeaponToMesh();
};


// Class TslGame.WeaponItem
// 0x0048 (0x0260 - 0x0218)
class UWeaponItem : public UEquipableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UClass*                                      WeaponType;                                               // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoCount;                                                // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FWeaponAttachmentTagData>            AttachmentTagData;                                        // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       WeaponTag;                                                // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UAttachableItem*>                     AttachedItems;                                            // 0x0248(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	class ATslWeapon*                                  EquippedWeapon;                                           // 0x0258(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponItem");
		return ptr;
	}


	bool IsAttachable(class UAttachableItem* Item);
	bool HasAttachmentSlot(TEnumAsByte<EWeaponAttachmentSlotID> SlotID);
	class ATslWeapon* GetEquippedWeapon();
	class ATslWeapon* GetDefaultWeaponObject();
	class UAttachableItem* GetAttachedItem(TEnumAsByte<EWeaponAttachmentSlotID> SlotID);
	int GetAttachableItemCount();
	TArray<class UAttachableItem*> GetAllAttachedItems();
	class UAttachableItem* DetachItem(TEnumAsByte<EWeaponAttachmentSlotID> SlotID);
	bool AttachItem(class UAttachableItem* Item);
};


// Class TslGame.RandomlyGeneratableItem
// 0x0050 (0x01D8 - 0x0188)
class URandomlyGeneratableItem : public UItem
{
public:
	struct FString                                     RandomExpression;                                         // 0x0188(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bOpenByKey : 1;                                           // 0x0198(0x0001) (CPF_Edit)
	unsigned char                                      bOpenByPoint : 1;                                         // 0x0198(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            OpenKeyItem;                                              // 0x01A0(0x0020) (CPF_Edit)
	int                                                OpenKeyItemCount;                                         // 0x01C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PointOpenPrice;                                           // 0x01C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<TAssetPtr<class UClass>>                    ReferenceItems;                                           // 0x01C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RandomlyGeneratableItem");
		return ptr;
	}

};


// Class TslGame.UseByPickupItem
// 0x0000 (0x0188 - 0x0188)
class UUseByPickupItem : public UItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.UseByPickupItem");
		return ptr;
	}

};


// Class TslGame.ItemSpawnProcessor
// 0x0010 (0x0038 - 0x0028)
class UItemSpawnProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpawnProcessor");
		return ptr;
	}


	void ProcessSpawnItem(class UItemSpotGroupComponent* Spawner);
	void ProcessGroup(class UItemSpotGroupComponent* SpotGroup, TArray<class UItemSpotComponent*> Spots);
	bool CheckItemGroup(class UItemSpotGroupComponent* SpotGroup);
};


// Class TslGame.SpawnTableItemSpawnProcessor
// 0x0F38 (0x0F70 - 0x0038)
class USpawnTableItemSpawnProcessor : public UItemSpawnProcessor
{
public:
	TArray<struct FItemSpotGroupTypeProperty>          RawSpotGroupProperties;                                   // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UDataTable*                                  RawItemSpawnDataTable;                                    // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                            // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RandomSpawnRadius;                                        // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xEBC];                                     // 0x005C(0x0EBC) MISSED OFFSET
	unsigned char                                      bUseActorSpawn : 1;                                       // 0x0F18(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0F19(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SpawnTableItemSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.ItemSpot
// 0x0008 (0x0398 - 0x0390)
class AItemSpot : public AActor
{
public:
	class UItemSpotGroupComponent*                     SpotGroupComponent;                                       // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpot");
		return ptr;
	}

};


// Class TslGame.ItemSpotComponent
// 0x0010 (0x0310 - 0x0300)
class UItemSpotComponent : public USceneComponent
{
public:
	TEnumAsByte<EItemSpotType>                         ItemSpotType;                                             // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0301(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpotComponent");
		return ptr;
	}

};


// Class TslGame.ItemSpotGroupComponent
// 0x0010 (0x0310 - 0x0300)
class UItemSpotGroupComponent : public USceneComponent
{
public:
	TEnumAsByte<EItemSpotGroupType>                    SpotGroupType;                                            // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0301(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpotGroupComponent");
		return ptr;
	}

};


// Class TslGame.ItemStudio
// 0x0060 (0x03F0 - 0x0390)
class AItemStudio : public AActor
{
public:
	struct FName                                       CameraSocketName;                                         // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      TextureTarget;                                            // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewDistance;                                          // 0x03A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	class UCameraComponent*                            CameraComponent;                                          // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultCameraSocketTransform;                             // 0x03C0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemStudio");
		return ptr;
	}


	void UpdateComponentToWorld(class UMeshComponent* Mesh);
	void SetTextureRenderTarget(class UTextureRenderTarget2D* NewTextureTarget);
	void SetItem(class UItem* Item);
	void AddYaw(float Value);
};


// Class TslGame.ItemToolTipWidget
// 0x0000 (0x0240 - 0x0240)
class UItemToolTipWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemToolTipWidget");
		return ptr;
	}


	void UpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem* EquipableItem, class UEquipableItem* EquipmentSlotItem);
	void UpdateToolTipBySlotInterface(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& Container);
	void UpdateSlotInfo(const TScriptInterface<class USlotInterface>& SlotInterface);
	void UpdateEquipmentSlotItemToolTip(class UEquipableItem* EquipableItem);
};


// Class TslGame.LevelAttribute
// 0x0018 (0x03A8 - 0x0390)
class ALevelAttribute : public AInfo
{
public:
	int                                                NumMapBlock;                                              // 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox2D                                      MapRect2D;                                                // 0x0394(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LevelAttribute");
		return ptr;
	}

};


// Class TslGame.LobbyLink
// 0x00A8 (0x00D0 - 0x0028)
class ULobbyLink : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyLink");
		return ptr;
	}

};


// Class TslGame.LobbyWidget
// 0x0000 (0x0240 - 0x0240)
class ULobbyWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyWidget");
		return ptr;
	}


	void GameStateChanging(const struct FName& NewState, const struct FName& OldState);
};


// Class TslGame.MatchPreparer
// 0x0030 (0x0058 - 0x0028)
class UMatchPreparer : public UObject
{
public:
	int                                                WarmupTime;                                               // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                WarmupTimeInPIE;                                          // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MatchPreparer");
		return ptr;
	}


	void TimerGameStartCountDown();
};


// Class TslGame.AirborneMatchPreparer
// 0x0048 (0x00A0 - 0x0058)
class UAirborneMatchPreparer : public UMatchPreparer
{
public:
	class UClass*                                      AircraftClass;                                            // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class ATransportAircraftVehicle*>           Aircrafts;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                AircraftCount;                                            // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AircraftCapacityOverride;                                 // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              AircraftAltitude;                                         // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              EndThetaDegree;                                           // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AircraftIntervalDistance;                                 // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0084(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AirborneMatchPreparer");
		return ptr;
	}


	void AllowDealDamage();
};


// Class TslGame.NormalMatchPreparer
// 0x0018 (0x0070 - 0x0058)
class UNormalMatchPreparer : public UMatchPreparer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
	int                                                AvailablePlayerStartCount;                                // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.NormalMatchPreparer");
		return ptr;
	}

};


// Class TslGame.ModeController
// 0x0000 (0x0488 - 0x0488)
class AModeController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ModeController");
		return ptr;
	}


	void SendSystemMessageToAll(TEnumAsByte<ESystemMessageType> MessageType, const struct FText& Message, float MessageDuration);
	bool IsPlayInEditor();
	bool HandleServerAdminBlueprint(const struct FString& AdminCommand);
	class ATslGameState* GetGameState();
	class ATslGameMode* GetGameMode();
	bool CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer);
};


// Class TslGame.BattleRoyaleModeController
// 0x0080 (0x0508 - 0x0488)
class ABattleRoyaleModeController : public AModeController
{
public:
	TArray<struct FBattleRoyalePoisionGasData>         NormalPoisonGasDataArray;                                 // 0x0488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FBattleRoyalePoisionGasData>         FastPoisonGasDataArray;                                   // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                FastZonePlayerCount;                                      // 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BattleRoyaleZoneTypeCheckTime;                            // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      PoisonWarningTime;                                        // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              WaterVolumeRayHeight;                                     // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04C4(0x000C) MISSED OFFSET
	TArray<class ATslPhysicsVolume*>                   OceanPhysicsVolume;                                       // 0x04D0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class ATslPassBluezoneArea*>                PassBluezoneAreas;                                        // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x18];                                      // 0x04F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BattleRoyaleModeController");
		return ptr;
	}


	bool SetNextGasInBlackboard();
	void InitRadius();
	float GetPoisonGasDamagePerSecond();
};


// Class TslGame.CarePackageController
// 0x0030 (0x04B8 - 0x0488)
class ACarePackageController : public AModeController
{
public:
	class UClass*                                      AircraftCarePackageClass;                                 // 0x0488(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StartDelay;                                               // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     SpawnInterval;                                            // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FlyingHeight;                                             // 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CarePackageLifeTime;                                      // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WhiteZoneSpawnInnerRate;                                  // 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DropAreaRate;                                             // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CarePackageController");
		return ptr;
	}


	class Vector3D SpawnAircraftCarePackage(bool CopyIntersectionInfo);
	bool SetNextCarePackageInBlackboard();
	void InitCarePackageSetting();
	float GetSpawnInterval();
};


// Class TslGame.RedZoneController
// 0x0080 (0x0508 - 0x0488)
class ARedZoneController : public AModeController
{
public:
	class UClass*                                      BombTemplateClass;                                        // 0x0488(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StartDelay;                                               // 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     NextCreateRedZoneInterval;                                // 0x0494(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BombingDelay;                                             // 0x049C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OuterRadius;                                              // 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InnerRadius;                                              // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RedZoneDuration;                                          // 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     BombingInterval;                                          // 0x04AC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RedZoneLifeTime;                                          // 0x04B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReyStartHeight;                                           // 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RedZoneRadiusOffsetRate;                                  // 0x04BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       RedZoneStartText;                                         // 0x04C0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	int                                                RedZoneProjectileCount;                                   // 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RayCheckAroundLength;                                     // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x04E0(0x0018) MISSED OFFSET
	TArray<class ATslPhysicsVolume*>                   OceanPhysicsVolume;                                       // 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RedZoneController");
		return ptr;
	}


	void SpawnBombProjectile();
	bool SetNextRedZoneInBlackboard();
	void InitRedZoneSetting();
	float GetRandomBombingInterval();
};


// Class TslGame.MutableCharacter
// 0x0050 (0x0800 - 0x07B0)
class AMutableCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07B0(0x0020) MISSED OFFSET
	TEnumAsByte<EGender>                               Gender;                                                   // 0x07D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                               // 0x07D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslCustomizableSkeletalComponent*           CustomizableSkeletalComponent;                            // 0x07E0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<unsigned char>                              InstanceDescriptor;                                       // 0x07E8(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      UnknownData02[0x8];                                       // 0x07F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MutableCharacter");
		return ptr;
	}


	void UpdateAppearence();
	void OnRep_InstanceDescriptor();
	TEnumAsByte<EGender> GetGender();
};


// Class TslGame.LobbyCharacter
// 0x0010 (0x0810 - 0x0800)
class ALobbyCharacter : public AMutableCharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0800(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyCharacter");
		return ptr;
	}

};


// Class TslGame.TestMutableCharacter
// 0x0000 (0x0800 - 0x0800)
class ATestMutableCharacter : public AMutableCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TestMutableCharacter");
		return ptr;
	}

};


// Class TslGame.TslVaultingHelper
// 0x0010 (0x03A0 - 0x0390)
class ATslVaultingHelper : public AActor
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x0390(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             ActorAttachScene;                                         // 0x0398(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVaultingHelper");
		return ptr;
	}


	class Vector3D GetActorAttachScene();
};


// Class TslGame.TslWeapon_Gun
// 0x0238 (0x09B0 - 0x0778)
class ATslWeapon_Gun : public ATslWeapon
{
public:
	unsigned char                                      bSpawnBulletFromBarrel : 1;                               // 0x0778(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0779(0x0007) MISSED OFFSET
	int                                                AmmoPerClip;                                              // 0x0780(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                CurrentAmmoInClip;                                        // 0x0784(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsHipped : 1;                                            // 0x0788(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0789(0x0003) MISSED OFFSET
	float                                              TimeBetweenShots;                                         // 0x078C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0790(0x0078) MISSED OFFSET
	struct FWeaponGunData                              WeaponGunConfig;                                          // 0x0808(0x0080) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponDeviationData                        WeaponDeviationConfig;                                    // 0x0888(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponGunAnim                              WeaponGunAnim;                                            // 0x08C8(0x00E8) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Gun");
		return ptr;
	}


	bool WeaponCycleDone();
	void StopReloadAnimByOne();
	void StartManualFireCycle();
	void SimulateWeaponReload(TEnumAsByte<EWeaponReloadAnimExec> ReloadAnimExec);
	void SetWeaponReloadInterrupted(bool bIsInterrupted);
	void SetSpawnBulletFromBarrel(bool DoSpawnBulletFromBarrel);
	void ServerStopReload();
	void ServerStopFire();
	void ServerStartReload();
	void ServerStartFire();
	void ServerSetHip(bool bNewIsHipped);
	void ServerHandleFiring();
	void ServerCancelReload();
	void Server_StartManualFireCycle();
	void PlayWeaponCycleCameraAnim();
	void PlayLongTailSound();
	void OnRep_TimeBetweenShots(float LastTimeBetweenShots);
	void OnRep_AttachedItemClasses();
	void OnRep_AmmoCount(int LastCurrentAmmoInClip);
	void OnAttachmentScopeLoaded();
	void OnAnimationNotify(const struct FName& NotifyName);
	void ManualFireCycleFinished();
	bool IsWeaponCycleInProgress();
	bool IsReloadInterrupted();
	bool IsReloading();
	class Vector3D GetWeaponHandOffset();
	struct FWeaponGunData GetWeaponGunConfig();
	struct FWeaponGunAnim GetWeaponGunAnimConfig();
	float GetWeaponFullReloadTime();
	float GetWeaponFullRealoadTimeWithAttachments();
	float GetWeaponCurrentRecoilValue();
	float GetWeaponCurrentDeviationValue();
	float GetReloadAnimationPlayRate();
	class Vector3D GetRecoilADSSocketOffsetScale();
	int GetNumOfFiringMode();
	float GetMovementModifierScope();
	float GetMovementModifierAim();
	int GetMaxAmmo();
	float GetMagOutDuration();
	class Vector3D GetMagDropLinearVelocity();
	class Vector3D GetMagDropAngularVelocity();
	int GetGripTypeIndex();
	TEnumAsByte<EFiringMode> GetFiringMode();
	class UAmmoItem* GetDefaultAmmoObject();
	float GetCurrentDeviation();
	int GetCurrentAmmoInInventory();
	int GetCurrentAmmoInClip();
	int GetCurrentAmmo();
	class UAnimMontage* GetCharacterReloadTacticalMontage();
	class UAnimMontage* GetCharacterReloadChargeMontage();
	class UAnimMontage* GetCharacterReloadByOneStopMontage();
	class UAnimMontage* GetCharacterReloadByOneStartMontage();
	class UAnimMontage* GetCharacterReloadByOneSingleMontage();
	class UBlendSpaceBase* GetCharacterLHGripBlendspace();
	class UBlendSpace1D* GetCharacterGripBlendspace();
	class UAnimMontage* GetCharacterFireSelectorMontage();
	class UAnimMontage* GetCharacterFireMontage();
	class UAnimMontage* GetCharacterFireCycle();
	int GetAmmoPerClip();
	class UClass* GetAmmoItemClass();
	float GetADSRecoilKick();
	void ClientStopSimulatingWeaponFire();
	void ClientSimulateWeaponFire();
	void ClientNotifyStopReloadByOne();
	void ClientNotifyAmmo(int InCurrentAmmoInClip);
	void ClientCancelReload();
	void Client_StartManualFireCycle();
	bool CheckMiddlePointCollision();
	void CancelReloadImpl();
	void AnimCall_ToggleFireMode();
	void AnimCall_ReloadTacticalWeapon();
	void AnimCall_ReloadChargeWeapon();
	void AnimCall_FireWeaponCycle();
	void AnimCall_FireWeapon();
};


// Class TslGame.VehicleSeatActor
// 0x0088 (0x0418 - 0x0390)
class AVehicleSeatActor : public AActor
{
public:
	float                                              ViewPitchMin;                                             // 0x0390(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x0394(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMin;                                               // 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMax;                                               // 0x039C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMax;                                            // 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMin;                                            // 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanOnlyFireWhileAiming : 1;                              // 0x03B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             SeatBlendspaceAiming;                                     // 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle;                                        // 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAimOffsetBlendSpace*                        SeatIdleAO;                                               // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionOutBlendspace;                                  // 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionInBlendspace;                                   // 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRestricWeaponUse : 1;                                    // 0x03E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EWeaponClass>>                  AllowedWeaponClasses;                                     // 0x03E8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bUseEntryVelocityRestriction : 1;                         // 0x03F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              MaxVelocityForEntry;                                      // 0x03FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacter*                               Rider;                                                    // 0x0400(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0408(0x000C) MISSED OFFSET
	TEnumAsByte<EVehicleAnimType>                      SeatAnimationType;                                        // 0x0414(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSeatActor");
		return ptr;
	}


	void OnRep_Rider();
	bool IsWeaponClassAllowed(TEnumAsByte<EWeaponClass> InClass);
	bool IsEntryAllowedByVelocity();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	TEnumAsByte<EVehicleAnimType> GetVehicleAnimType();
	class UBlendSpaceBase* GetTransitionOutBlendspace();
	class UBlendSpaceBase* GetTransitionInBlendspace();
	class UAimOffsetBlendSpace* GetSeatIdleAO();
	class UAnimSequenceBase* GetSeatIdleAnimation();
	class UBlendSpaceBase* GetSeatAimingBlendspace();
	class ATslCharacter* GetRider();
	float GetMinPitchByYaw(float CurrentYaw);
	float GetMaxPitchByYaw(float CurrentYaw);
	bool GetCanFireOnlyWhileAimed();
	struct FText GetAdditionalMessage(class ATslCharacter* Character);
	bool AllowInteract(class ATslCharacter* OtherCharacter);
};


// Class TslGame.WeaponProcessor
// 0x0090 (0x0420 - 0x0390)
class AWeaponProcessor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponProcessorArmed;                                   // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<class ATslWeapon*>                          EquippedWeapons;                                          // 0x03A8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	int                                                CurrentWeaponIndex;                                       // 0x03B8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x64];                                      // 0x03BC(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponProcessor");
		return ptr;
	}


	void SimulateArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void ServerUnarmCurrentWeapon();
	void ServerArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void OnRep_EquippedWeapons(TArray<class ATslWeapon*> LastEquippedWeapons);
	void OnRep_CurrentWeaponIndex(int LastWeaponIndex);
	void NotifyWeaponUpdate();
	bool IsUnarmedWeapon(int WeaponIndex);
	bool IsUnarmed();
	int GetWeaponIndex();
	class ATslWeapon_Gun* GetWeaponGun();
	class ATslWeapon* GetWeaponByIndex(int Index);
	class ATslWeapon* GetWeapon();
	int GetUnarmedWeaponIndex();
	class ATslWeapon* GetCurrentWeapon();
	class ATslWeapon* FindWeapon(class UClass* WeaponClass);
	void ClientSetWeaponIndex(int WeaponIndex);
	void ClientInitByReconnection(int InitWeaponIndex);
	void ClientForceRemoveWeapon(int WeaponIndex);
};


// Class TslGame.TslCharacter
// 0x0B40 (0x1340 - 0x0800)
class ATslCharacter : public AMutableCharacter
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0800(0x0090) MISSED OFFSET
	TArray<class UAkAudioBank*>                        Banks;                                                    // 0x0890(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UBuffComponet*                               BuffComponent;                                            // 0x08A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x08A8(0x0040) MISSED OFFSET
	class ATslCharacter*                               RevivingCharacter;                                        // 0x08E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             GroggyPlayerInstigator;                                   // 0x08F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x78];                                      // 0x08F8(0x0078) MISSED OFFSET
	float                                              BuffFinalSpreadFactor;                                    // 0x0970(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class AInventoryFacade*                            InventoryFacade;                                          // 0x0978(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AWeaponProcessor*                            WeaponProcessor;                                          // 0x0980(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      CharacterState;                                           // 0x0988(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1F];                                      // 0x0989(0x001F) MISSED OFFSET
	class UClass*                                      DropPackageType;                                          // 0x09A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               SoundClearAk;                                             // 0x09B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RemoteVolumeControlOn;                                    // 0x09B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RemoteVolumeControlOff;                                   // 0x09C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CameraFovRatioCurve;                                      // 0x09C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HeavyFallVerticalVelocityThreshold;                       // 0x09D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtremeFallVerticalVelocityThreshold;                     // 0x09D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProneFallVerticalVelocityThreshold;                       // 0x09D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HeavyFallMovementStopTime;                                // 0x09DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtremeFallMovementStopTime;                              // 0x09E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	float                                              Punch_Damage;                                             // 0x09E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchHeavy_Damage;                                        // 0x09EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      UnarmedDamageType;                                        // 0x09F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ZombieDamageType;                                         // 0x09F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Punch_Distance;                                           // 0x0A00(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchHeavy_Distance;                                      // 0x0A04(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Punch_Radius;                                             // 0x0A08(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchHeavy_Radius;                                        // 0x0A0C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     Punch_InitialLocation;                                    // 0x0A10(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Punch_AllowedHitRangeLeeway;                              // 0x0A1C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0A20(0x0004) MISSED OFFSET
	class Vector3D                                     LeanLeftTraceOffset;                                      // 0x0A24(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LeanRightTraceOffset;                                     // 0x0A30(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0A3C(0x0008) MISSED OFFSET
	float                                              LeanOffset_Stand;                                         // 0x0A44(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanOffset_Crouch;                                        // 0x0A48(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanOffset_Prone;                                         // 0x0A4C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0A50(0x000C) MISSED OFFSET
	float                                              Sprint_MaxSpeed;                                          // 0x0A5C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Sprint_MinSpeed;                                          // 0x0A60(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintingFOV;                                             // 0x0A64(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0A68(0x0004) MISSED OFFSET
	float                                              MinimumBreathToHold;                                      // 0x0A6C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SwimPoint;                                                // 0x0A70(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwimableWaterDepth;                                       // 0x0A78(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CrouchWaterDepth;                                         // 0x0A7C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProneWaterDepth;                                          // 0x0A80(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WaterFloorDetectionLength;                                // 0x0A84(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwimMaxControllerPitch;                                   // 0x0A88(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              UnderwaterSwimGapFromSurface;                             // 0x0A8C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SwimTrailEffectClass;                                     // 0x0A90(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                SwimTrailEffect;                                          // 0x0A98(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCharacterBreathComponent*                   BreathComponent;                                          // 0x0AA0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       BreathPoint;                                              // 0x0AA8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      UnderwaterChokeEffectClass;                               // 0x0AB0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                UnderwaterChokeEffect;                                    // 0x0AB8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              IndoorCheckDistance;                                      // 0x0AC0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IndoorCheckTime;                                          // 0x0AC4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0AC8(0x0004) MISSED OFFSET
	float                                              FootSoundObstructionCheckInterval;                        // 0x0ACC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FootSoundObstructionCheckMaxDistance;                     // 0x0AD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FName                                       ParachuteAttachPoint;                                     // 0x0AD8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReleasingParachuteAltitude;                               // 0x0AE0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceReleasingParachuteAltitude;                          // 0x0AE4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumParachuteAltitude;                                 // 0x0AE8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class UClass*                                      ParachuteType;                                            // 0x0AF0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bParachuteLandingAssist : 1;                              // 0x0AF8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
	class UCastComponent*                              CastComponent;                                            // 0x0B00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStanceComponent*                            StanceComponent;                                          // 0x0B08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHackReporterComponent*                      HackReporterComponent;                                    // 0x0B10(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bAcceptHitsWhileNotAlive : 1;                             // 0x0B18(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0B19(0x0003) MISSED OFFSET
	float                                              SimulatedHit_Initial;                                     // 0x0B1C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_RecoveryPerSecond;                           // 0x0B20(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_Value;                                       // 0x0B24(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_ImpulsePower;                                // 0x0B28(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimlatedHit_PunchLightPower;                              // 0x0B2C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimlatedHit_PunchHeavyPower;                              // 0x0B30(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	class UClass*                                      PunchImpactEffect;                                        // 0x0B38(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x28];                                      // 0x0B40(0x0028) MISSED OFFSET
	class UCharacterWeaponAnimInfoComponent*           WeaponAnimInfoComponent;                                  // 0x0B68(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Primary;                               // 0x0B70(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Secondary;                             // 0x0B78(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Sidearm;                               // 0x0B80(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Melee;                                 // 0x0B88(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Thrown;                                // 0x0B90(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATeam*                                       Team;                                                     // 0x0B98(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData17[0x18];                                      // 0x0BA0(0x0018) MISSED OFFSET
	class UTslViewTargetTempComponent*                 ViewTargetTempComponent;                                  // 0x0BB8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       HeadAttachPoint;                                          // 0x0BC0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraHeadHideDistance;                                   // 0x0BC8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData18[0xC];                                       // 0x0BCC(0x000C) MISSED OFFSET
	class Vector3D                                     CrouchedCameraMove;                                       // 0x0BD8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     PronedCameraMove;                                         // 0x0BE4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     GroggyCameraMove;                                         // 0x0BF0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CrouchedCameraMoveSpeed;                                  // 0x0BFC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PronedCameraMoveSpeed;                                    // 0x0C00(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GroggyCameraMoveSpeed;                                    // 0x0C04(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData19[0x48];                                      // 0x0C08(0x0048) MISSED OFFSET
	struct FTakeHitInfo                                LastTakeHitInfo;                                          // 0x0C50(0x0040) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0C90(0x0004) MISSED OFFSET
	float                                              TargetingSpeedModifier;                                   // 0x0C94(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ETargetingType>                        TargetingType;                                            // 0x0C98(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0C99(0x0003) MISSED OFFSET
	float                                              Stand_RunningSpeedModifier;                               // 0x0C9C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingSpeedModifier;                             // 0x0CA0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingBigGunModifier;                            // 0x0CA4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingRifleModifier;                             // 0x0CA8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingSmallGunMOdifier;                          // 0x0CAC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Crouch_RunningSpeedModifier;                              // 0x0CB0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Crouch_SprintingSpeedModifier;                            // 0x0CB4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Prone_RunningSpeedModifier;                               // 0x0CB8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Prone_SprintingSpeedModifier;                             // 0x0CBC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReviveCastingTime;                                        // 0x0CC0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bWantsToRun : 1;                                          // 0x0CC4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToSprint : 1;                                       // 0x0CC4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToSprintingAuto : 1;                                // 0x0CC4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToRollingLeft : 1;                                  // 0x0CC4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToRollingRight : 1;                                 // 0x0CC4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsPeekLeft : 1;                                          // 0x0CC4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsPeekRight : 1;                                         // 0x0CC4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      IgnoreRotation : 1;                                       // 0x0CC4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsGroggying : 1;                                         // 0x0CC5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_EditConst)
	unsigned char                                      bIsThirdPerson : 1;                                       // 0x0CC5(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsReviving : 1;                                          // 0x0CC5(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsWeaponObstructed : 1;                                  // 0x0CC5(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsCoatEquipped : 1;                                      // 0x0CC5(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsZombie : 1;                                            // 0x0CC5(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData22[0x2];                                       // 0x0CC6(0x0002) MISSED OFFSET
	unsigned char                                      bOutSidePlayerArea : 1;                                   // 0x0CC8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseRightShoulderAiming : 1;                              // 0x0CC9(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x0CCA(0x0002) MISSED OFFSET
	class Vector3D                                     AimOffsets;                                               // 0x0CCC(0x000C) (CPF_Net, CPF_Transient)
	class Vector3D                                     LastAimOffsets;                                           // 0x0CD8(0x000C)
	unsigned char                                      UnknownData24[0x44];                                      // 0x0CE4(0x0044) MISSED OFFSET
	class UCurveFloat*                                 Curve_JumpCamera;                                         // 0x0D28(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_DBNOFadeOut;                                        // 0x0D30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DBNOFadeOutLerpSpeed;                                     // 0x0D38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0D3C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_StandWalk;                                          // 0x0D40(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandRun;                                           // 0x0D48(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandSprint;                                        // 0x0D50(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchWalk;                                         // 0x0D58(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchRun;                                          // 0x0D60(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchSprint;                                       // 0x0D68(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneWalk;                                          // 0x0D70(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneRun;                                           // 0x0D78(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneSprint;                                        // 0x0D80(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Swim;                                               // 0x0D88(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_UnderwaterSwim;                                     // 0x0D90(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandScope;                                         // 0x0D98(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchScope;                                        // 0x0DA0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneScope;                                         // 0x0DA8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandAim;                                           // 0x0DB0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchAim;                                          // 0x0DB8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneAim;                                           // 0x0DC0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_DBNO;                                               // 0x0DC8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_GroundAngle;                                        // 0x0DD0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                Curve_WeaponSway;                                         // 0x0DD8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_TurningLerp;                                        // 0x0DE0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_TurningLerpLocomotion;                              // 0x0DE8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DirectionalSpeedModifier;                                 // 0x0DF0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageForceMultiplier;                               // 0x0DF4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PointDamageForce_MapMin;                                  // 0x0DF8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PointDamageForce_MapMax;                                  // 0x0DFC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RadialDamageForceMultiplier;                              // 0x0E00(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 RadialDamageFalloffType;                                  // 0x0E04(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0E05(0x0003) MISSED OFFSET
	class UAnimMontage*                                RollLeftAnim;                                             // 0x0E08(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                RollRightAnim;                                            // 0x0E10(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCharacterAnim                              CharacterAnim;                                            // 0x0E18(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	class AController*                                 NetOwnerController;                                       // 0x0E28(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LeanAlphaSpeed;                                           // 0x0E30(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnSpeedHip;                                             // 0x0E34(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnSpeedAimed;                                           // 0x0E38(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnSpeedOverLimit;                                       // 0x0E3C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinTurnAngleHip;                                          // 0x0E40(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinTurnAngleAim;                                          // 0x0E44(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnLinearEndThreshold;                                   // 0x0E48(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bNonLinearTurn : 1;                                       // 0x0E4C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0E4D(0x0003) MISSED OFFSET
	float                                              TurnNonLinearEndThreshold;                                // 0x0E50(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnNonLinearInterpSpeed;                                 // 0x0E54(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotion;                         // 0x0E58(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotionSprint;                   // 0x0E5C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotionProne;                    // 0x0E60(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedStationary;                         // 0x0E64(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData28[0x14];                                      // 0x0E68(0x0014) MISSED OFFSET
	float                                              AimStateDefaultTime;                                      // 0x0E7C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimStateReturnTime;                                       // 0x0E80(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimStateDrawTime;                                         // 0x0E84(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData29[0x8];                                       // 0x0E88(0x0008) MISSED OFFSET
	unsigned char                                      bAimStateActive : 1;                                      // 0x0E90(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x0E91(0x0003) MISSED OFFSET
	float                                              CanGroggyDamageTime;                                      // 0x0E94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       GroggyStartText;                                          // 0x0E98(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       GroggyCancelText;                                         // 0x0EB0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       GroggyFinishText;                                         // 0x0EC8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class Rotator                                      BlendTargetViewRotation;                                  // 0x0EE0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     DesiredDirection;                                         // 0x0EEC(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x0EF4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;                     // 0x0EF8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bIsDying : 1;                                             // 0x0F08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData32[0x7];                                       // 0x0F09(0x0007) MISSED OFFSET
	TArray<struct FZombieCustomizationData>            ZombieCustomizationData;                                  // 0x0F10(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Health;                                                   // 0x0F20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x0F24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroggyHealth;                                             // 0x0F28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroggyHealthMax;                                          // 0x0F2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseGroggyHealthPerSecond;                            // 0x0F30(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroggyDamageWeight;                                       // 0x0F34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      GroggyDamageType;                                         // 0x0F38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthByRevive;                                           // 0x0F40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x0F44(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               GroggyToDieAkEvent;                                       // 0x0F48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoostGauge;                                               // 0x0F50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoostGaugeMax;                                            // 0x0F54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseTimerSecond;                                      // 0x0F58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseBoostGaugeByTime;                                 // 0x0F5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBuffWithBoostGauge>                 BuffWithBoostGauge;                                       // 0x0F60(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UClass*                                      MedKitClass;                                              // 0x0F70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FirstAidClass;                                            // 0x0F78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      BandageClass;                                             // 0x0F80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              BoostItemClasses;                                         // 0x0F88(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData34[0x4];                                       // 0x0F98(0x0004) MISSED OFFSET
	TWeakObjectPtr<class ATslPlayerState>              LaunchInstigator;                                         // 0x0F9C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LaunchCauser;                                             // 0x0FA4(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x0FAC(0x0004) MISSED OFFSET
	double                                             LastLaunchTime;                                           // 0x0FB0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APlayerState*                                AuthorizedPlayerState;                                    // 0x0FB8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TEnumAsByte<EEquipableItemSoundType>               ShoesSoundType;                                           // 0x0FC0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData36[0x7];                                       // 0x0FC1(0x0007) MISSED OFFSET
	class UInteractorComponent*                        InteractorComponent;                                      // 0x0FC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInteractionComponent*                       InteractionComponent;                                     // 0x0FD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UVehicleRiderComponent*                      VehicleRiderComponent;                                    // 0x0FD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      OutSidePlayerAreaEffectClass;                             // 0x0FE0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslPostProcessEffect*                       OutSidePlayerAreaEffect;                                  // 0x0FE8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UClass*                                      DBNOEffectClass;                                          // 0x0FF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPostProcessEffect*                       DBNOEffect;                                               // 0x0FF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData37[0x1E0];                                     // 0x1000(0x01E0) MISSED OFFSET
	class USkeletalMeshComponent*                      ShadowMesh;                                               // 0x11E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              TargetingFOV;                                             // 0x11E8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              AimingDelay;                                              // 0x11EC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x11F0(0x0004) MISSED OFFSET
	float                                              AttackStateOffDelayTime;                                  // 0x11F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitStateOffDelayTime;                                     // 0x11F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData39[0x24];                                      // 0x11FC(0x0024) MISSED OFFSET
	float                                              DamageHeadScale;                                          // 0x1220(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DamageArmScale;                                           // 0x1224(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DamageStomachScale;                                       // 0x1228(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DamageLegScale;                                           // 0x122C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FName>                               HeadBoneNames;                                            // 0x1230(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               ArmBoneNames;                                             // 0x1240(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               TorsoBoneNames;                                           // 0x1250(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               StomachBoneNames;                                         // 0x1260(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               LegBoneNames;                                             // 0x1270(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData40[0x4];                                       // 0x1280(0x0004) MISSED OFFSET
	float                                              FallDamageFactor;                                         // 0x1284(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              FallDamageVelocityMin;                                    // 0x1288(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CorpseLifeSpan;                                           // 0x128C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData41[0x28];                                      // 0x1290(0x0028) MISSED OFFSET
	class Vector3D                                     JumpStartLocation_CP;                                     // 0x12B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LandPredictedLocation_CP;                                 // 0x12C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallHeight_CP;                                            // 0x12D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsVaulting_CP : 1;                                       // 0x12D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x12D5(0x0003) MISSED OFFSET
	float                                              VaultTimer_CP;                                            // 0x12D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     VaultEndVelocity_CP;                                      // 0x12DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     VaultLastLocation_CP;                                     // 0x12E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsClimbing_CP : 1;                                       // 0x12F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bEndVaultToFall_CP : 1;                                   // 0x12F5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x12F6(0x0002) MISSED OFFSET
	class Vector3D                                     VaultEndVelocityVectorMutliplier;                         // 0x12F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultEndVelocityVectorClamp;                              // 0x1304(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslVaultingHelper*                          VaultingHelperRef;                                        // 0x1308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsVaultingSystemEnabled : 1;                             // 0x1310(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x1311(0x0003) MISSED OFFSET
	float                                              VaultingDirection_CP;                                     // 0x1314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	float                                              TO_CulledMovementTickrate;                                // 0x1318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TO_CulledActorTickInterval;                               // 0x131C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TO_MinimumDistance;                                       // 0x1320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRunTickOptimization : 1;                                 // 0x1324(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRunTickOptimization_Anim : 1;                            // 0x1325(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRunTickOptimization_Movement : 1;                        // 0x1326(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData45[0x1];                                       // 0x1327(0x0001) MISSED OFFSET
	float                                              TO_RenderedTolerance;                                     // 0x1328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTickOptimization_Move_Active : 1;                        // 0x132C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bTickOptimization_Anim_Active : 1;                        // 0x132D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bTickOptimization_Actor_Active : 1;                       // 0x132E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData46[0x11];                                      // 0x132F(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacter");
		return ptr;
	}


	void UpdateWeaponAttachPoint();
	void ToggleAnimDynamics();
	bool TickOptimization_ShouldRunMovementUpdate();
	bool TickOptimization_ShouldRunAnimUpdate();
	bool TickOptimization_IsOverMinimumDistance();
	void TickOptimization_Eval();
	void StopAllAnimMontages();
	void STAT_TickEnd();
	void STAT_TickBegin();
	void SpawnPunchImpact_Reliable(const class Vector3D& InLocation, const class Rotator& InRotation);
	void SpawnPunchImpact(const class Vector3D& InLocation, const class Rotator& InRotation);
	void SpawnBulletPassByEffect(const class Vector3D& Location, float BulletVelocity);
	void SimulatePhysicalHitRecovery();
	void SimulateHeadShot(const struct FTransform& SpawnTransform, const struct FTransform& ImpactTransform);
	void ShowDynamicCrosshair(bool bShow);
	void SetWorldTransformIdentity();
	void SetWeaponInertia(const class Rotator& InInertia);
	void SetupWeaponBlueprint();
	void SetTPPSpringarmOffset(float VerticalOffset);
	void SetTickOptimization_Movement(bool bActivate);
	void SetTickOptimization_Anim(bool bActivate);
	void SetTickOptimization_Actor(bool bActivate);
	void SetSwayDebuffParameters(float SwaySpeed, float SwayVerticalMultiplier, float SwayHorizontalMultiplier);
	void SetParachuteLandingAssist(bool bAssistActive);
	void SetOutSidePlayerArea(bool bNewOutSidePlayerArea);
	void SetMovementEnabled(bool IsEnabled);
	void SetLaunchEvent(const struct FAttackId& AttackId, class ATslPlayerState* InPlayerState, class AActor* Causer);
	void SetJumpStartLocationAndFallheight(const class Vector3D& JumpStartLoc, float FallHeight);
	void SetCustomDepth(bool bOn);
	void SetCanGroggyDamage(bool bInCanGroggyDamage);
	void SetBuffFinalSpreadFactor(float FinalSpreadFactor);
	void SetAnimationAkSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetAnimationAkRTPC(const struct FString& RTPCName, float RTPCValue);
	void SetAimStateActive(bool IsActive);
	void SetADSSocketOffset(const class Vector3D& NewOffset);
	void SetAccessorySlot_Thrown(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_SideArm(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Secondary(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Primary(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Melee(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent, TEnumAsByte<EAccessorySlot> Slot);
	void ServerSetTargeting(TEnumAsByte<ETargetingType> NewTargetingType);
	void ServerSetSprintingAuto(bool bNewSprintingAuto);
	void ServerSetSprinting(bool bNewSprinting);
	void ServerSetRunning(bool bNewRunning);
	void ServerSetRolling(bool bNewRolling, bool bIsLeft);
	void ServerSetPeekRight(bool bNewPeekRight, bool InbUseRightShoulderAiming);
	void ServerSetPeekLeft(bool bNewPeekLeft, bool InbUseRightShoulderAiming);
	void ServerSetHoldingBreath(bool bNewHoldingBreath);
	void ServerSetAimOffsets(const class Vector3D& NewAimOffsets);
	void ServerPickUpItemFromPackage(class UItem* Item, class AItemPackage* Package, const struct FName& TargetContainer, const struct FString& Options);
	void ServerPickUpDroppedItem(class UObject* DroppedItemObject, const struct FName& TargetContainer, const struct FString& Options);
	void Server_UnarmedHitNotify(const struct FHitResult& Hit, float Damage, uint32_t HitSeq);
	void Server_SetWeaponObstruction(bool bNewObstruction);
	void Server_SetParachuteLandingAssist(bool bAssistActive);
	void Server_SetCoatEquipped(bool IsEquipped);
	void Server_SetCanGroggyDamage(bool bInCanGroggyDamage);
	void Server_SetAimState(bool IsActive);
	void Server_PlayUnarmedAttack(int AnimationIndex);
	void SendSystemMessage(TEnumAsByte<ESystemMessageType> MessageType, const struct FText& Message);
	void ResetUnarmedAttack();
	void ResetParachute();
	void PunchStart(float PunchDamage, float PunchDistance, float PunchRadius);
	void ProcessRevive(float RemainGroggyHealthPercent);
	void ProcessDBNO(float GroggyHealthPercent);
	void PrepareParachute(class UClass* ParachuteType);
	void PlayCameraAnim(class UCameraAnim* CameraAnim);
	bool PickUpItem(class UItem* Item, const struct FName& TargetContainer, const struct FString& Options);
	void OnWeapon_6();
	void OnWeapon_5();
	void OnWeapon_4();
	void OnWeapon_3();
	void OnWeapon_2();
	void OnUnarmPad();
	void OnUnarm();
	void OnStopTargeting();
	void OnStopFire();
	void OnStartInteractBy(class ATslCharacter* OtherCharacter);
	void OnRep_ShoesSoundType();
	void OnRep_ReviveCastingTime();
	void OnRep_OutSidePlayerArea(bool bLastOutSidePlayerArea);
	void OnRep_LastTakeHitInfo();
	void OnRep_IsGroggying();
	void OnRep_IsCrouched();
	void OnRep_Health(float LastHealth);
	void OnRep_GroggyHealth(float LastGroggyHealth);
	void OnRep_CharacterState();
	void OnRep_BoostGauge(float LastBoostGauge);
	void OnRep_AimOffsets(const class Vector3D& PrevAimOffsets);
	void OnInteractBy(class ATslCharacter* OtherCharacter);
	void OnHoldBreathStop();
	void OnHoldBreathStart();
	void OnChangeBreath(float Breath, float LastBreath, float BreathMax);
	void OnCancelInteractBy(class ATslCharacter* OtherCharacter);
	void NotHaveHealItemNotifyMessage(const struct FText& ItemName);
	void NotHaveBoostItemNotifyMessage();
	void LocalMagazineDrop(const class Vector3D& InitialVelocity);
	bool IsZooming();
	bool IsZombie();
	bool IsVehiclePassenger();
	bool IsVehicleDriver();
	bool IsVaultingEnabled();
	bool IsVaultingDebugEnabled();
	bool IsVaulting();
	bool IsUsingRightShoulderAiming();
	bool IsUpperCollision();
	bool IsUnderwater();
	bool IsTeamMatch();
	bool IsTargeting();
	bool IsSwimming();
	bool IsSprinting();
	bool IsSpectatingCharacter();
	bool IsSitting();
	bool IsScoping();
	bool IsRunning();
	bool IsRolling();
	bool IsReviving();
	bool IsReadyState();
	bool IsQuitter();
	bool IsQuickThrowHigh();
	bool IsPeekRight();
	bool IsPeekLeft();
	bool IsParachuting();
	bool IsOutSidePlayerArea();
	bool IsMoving();
	bool IsMouseUse();
	bool IsMeleeAttacking();
	bool IsMagazineHandAttached();
	bool IsMagazineGunAttached();
	bool IsLocalOrSpectating();
	bool IsInWaterVolume();
	bool IsInVehicle();
	bool IsInteracting();
	bool IsIndoor();
	bool IsInAircraft();
	bool IsHoldingBreath();
	bool IsHitted();
	bool IsHipped();
	bool IsGroggying();
	bool IsFreelooking();
	bool IsForcingFall();
	bool IsForceRotation();
	bool IsForcedProneAfterFall();
	bool IsFirstPerson();
	bool IsFiring();
	bool IsFallingWithParachute();
	bool IsFallingFromHighAltitude();
	bool IsCycleInProgress();
	bool IsCoatEquipped();
	bool IsCasting();
	bool IsCameraUnderwater();
	bool IsAudioTestEnabled();
	bool IsAttacked();
	bool IsAnimDynamicsEnabled();
	bool IsAlive();
	void HiddenCrosshair();
	bool HasWeaponLeftHandIKSocket();
	bool HasWeapon(class UClass* WeaponClass);
	void HandleVaultEnd_CP(const class Vector3D& InVaultEndVelocity);
	void HandleCapsuleCollision();
	void GiveWeapon(class UClass* WeaponClass);
	float GetWeaponReloadPlayRate();
	class AWeaponProcessor* GetWeaponProcessor();
	bool GetWeaponObstructionRemote();
	float GetWeaponMovementModifierScope();
	float GetWeaponMovementModifierAim();
	struct FTransform GetWeaponLeftHandIKTransform();
	class Rotator GetWeaponInertia();
	struct FTransform GetWeaponHandIK_Right();
	struct FTransform GetWeaponHandIK_Left();
	float GetWeaponGunCollisionAlpha();
	class ATslWeapon_Gun* GetWeaponGun();
	float GetWeaponADSTimeModifier();
	class ATslWeapon* GetWeapon();
	bool GetWantsToJump();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class UVehicleSeatInteractionComponent* GetVehicleSeat();
	class UVehicleRiderComponent* GetVehicleRiderComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	class ATslPlayerState* GetTslPlayerState();
	class ATslPlayerController* GetTslPlayerController();
	float GetTPPSpringarmOffset();
	class UCurveFloat* GetTPPCameraCurve();
	class ATeam* GetTeam();
	float GetTargetingSpeedModifier();
	TEnumAsByte<EStanceMode> GetStance();
	float GetSprintingSpeedModifier_Stand();
	float GetSprintingSpeedModifier_Prone();
	float GetSprintingSpeedModifier_Crouch();
	float GetSprintCurrentValue();
	float GetSpeedModifierByWeaponClass();
	struct FString GetShortPlayerName();
	float GetRunningSpeedModifier_Stand();
	float GetRunningSpeedModifier_Prone();
	float GetRunningSpeedModifier_Crouch();
	struct FName GetReactionBone(const struct FName& BoneName);
	struct FString GetPlayerName();
	bool GetParachuteLandingAssist();
	class AParachuteVehicle* GetParachute();
	TScriptInterface<class UInteractionInterface> GetObjectCanInteract();
	float GetMaxSprintSpeed();
	float GetMaxGroundSpeedOnSlope();
	struct FString GetLocationString();
	float GetLeanRightAlpha();
	float GetLeanLeftAlpha();
	class Rotator GetLastMoveRotation();
	class AInventoryFacade* GetInventoryFacade();
	class Vector3D GetInteractObjectLocation();
	struct FString GetInteractionString();
	float GetIndoorFactor();
	bool GetDynamicCrosshairHidden();
	class UClass* GetDropPackageType();
	struct FString GetDirectionString();
	float GetDirectionalSpeedModifier(TEnumAsByte<EMovementType> StanceType);
	class Rotator GetDesiredRotation();
	class ATslWeapon* GetCurrentWeapon();
	float GetCurrentWaterSurfaceZ();
	float GetCurrentWaterSurfaceBaseZ();
	float GetCurrentWaterDepth();
	class Rotator GetCurrentSway();
	class UStaticMesh* GetCurrentMagazineMesh();
	struct FTransform GetCurrentMagazineLocation();
	float GetCurrentHeightFromWaterFloor();
	bool GetCtrlShortCutOnOff();
	TScriptInterface<class UInteractionInterface> GetComponentCanInteract();
	class UObject* GetCastObject();
	class Vector3D GetCameraDOF();
	class UBuffComponet* GetBuffComponent();
	class UCharacterBreathComponent* GetBreathComponent();
	TEnumAsByte<EAnimWeaponType> GetAnimWeaponType();
	TEnumAsByte<EAnimStance> GetAnimStance();
	float GetAimStateTimer();
	float GetAimStateAlpha();
	class Rotator GetAimOffsets();
	class Vector3D GetADSSocketOffset();
	class AActor* GetActorCanInteract();
	class UCameraComponent* GetActiveCamera();
	class UTslAccessoryComponent* GetAccessorySlot(TEnumAsByte<EAccessorySlot> Slot);
	void FixupCamera();
	class ATslWeapon* FindWeapon(class UClass* WeaponClass);
	void EnableAudioTest();
	void DisableCollision();
	void DelayedFire();
	void ClientSoundPlay(class UAkAudioEvent* SoundAk);
	void ClientSimulationArmorDestruction(TEnumAsByte<EEquipSlotID> SlotID, const struct FTransform& Impact);
	void ClientSetTargeting(TEnumAsByte<ETargetingType> NewTargetingType);
	void ClientSendGroggyMessage(class ATslPlayerState* GroggyCauserPlayerState, class ATslPlayerState* VictimPlayerState, class UDamageType* GroggyCauserDamageType, TEnumAsByte<EDamageReason> DamageReason, const struct FText& DamageCauserName);
	void ClientRevivedCastingWidgetShow(bool bVisible);
	void ClientProcessRevive(float RemainGroggyHealth);
	void ClientPlayPickUpAnimation(const class Vector3D& InteractionObject);
	void ClientNotifyCrack(const class Vector3D& LocationRelative, float BulletVelocity);
	void ClientForceInitStance(TEnumAsByte<EStanceMode> ToStance);
	void Client_PlayUnarmedAttack(int AnimationIndex);
	void CheckMuzzleCollision();
	void CheckMuzzleBulletSpawn();
	void CheckForCoat();
	bool CheckEquipmentSlot(const struct FEquipPosition& InSlotData);
	bool CanSwim();
	void Camera_AimoffsetFix_TppToFpp();
	void Camera_AimoffsetFix_FppToTpp();
	void ApplyRagdollPhysicsForce();
	void Anim_MagazineShow(bool bShow);
	void Anim_MagazineHandAttach(bool bAttach);
	bool Anim_IsMagazineVisible();
	bool AllowInteract(class ATslCharacter* OtherCharacter);
	void AdminSetUpWeapon();
	void AdminInvulnerable();
	void AdminFreeMoveMode();
	void AddBuffMoveSpeedFactor(float MoveSpeedFactor);
};


// Class TslGame.TslBot
// 0x0000 (0x1340 - 0x1340)
class ATslBot : public ATslCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBot");
		return ptr;
	}

};


// Class TslGame.ObserverTagWidget
// 0x0010 (0x0250 - 0x0240)
class UObserverTagWidget : public UUserWidget
{
public:
	class ATslCharacter*                               Character;                                                // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OffsetZ;                                                  // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                                 // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ObserverTagWidget");
		return ptr;
	}


	void SetCharacterIconPosition_UC(const class Vector2D& Pos_UC, bool IsHidden);
	bool IsTeamMember();
	bool IsLastSpectatedCharacter();
};


// Class TslGame.TslVehicleInterface
// 0x0000 (0x0028 - 0x0028)
class UTslVehicleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleInterface");
		return ptr;
	}


	class USkeletalMeshComponent* GetVehicleMeshComponent();
	class ATslPlayerController* GetTslPlayerController();
};


// Class TslGame.ParachuteVehicle
// 0x0130 (0x0520 - 0x03F0)
class AParachuteVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnRelease;                                                // 0x03F8(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnLand;                                                   // 0x0408(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	class UAkAudioEvent*                               ReleaseSound_Local;                                       // 0x0418(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ReleaseSound_Remote;                                      // 0x0420(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSound_Local;                                          // 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSound_Remote;                                         // 0x0430(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FallingStartSound_Local;                                  // 0x0438(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FallingStartSound_Remote;                                 // 0x0440(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkComponent*                                AkSoundCom;                                               // 0x0448(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0450(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParachuteVehicleMovement*                   ParachuteMovementComponent;                               // 0x0458(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFreeFallMovement*                           FreeFallMovementComponent;                                // 0x0460(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x0468(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDoublePhaseInteractionComponent*            InteractionComponent;                                     // 0x0470(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslCharacter>                LastDriver;                                               // 0x0478(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0480(0x0008) MISSED OFFSET
	struct FName                                       FreeFallFirstPersonCameraName;                            // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FreeFallThirdPersonCameraName;                            // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreeFallCameraPitchMin;                                   // 0x0498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreeFallCameraPitchMax;                                   // 0x049C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReleasingAltitude;                                        // 0x04A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceReleasingAltitude;                                   // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04A8(0x0004) MISSED OFFSET
	float                                              SweepMoveHeight;                                          // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingHeight;                                            // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingDuration;                                          // 0x04B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	class UClass*                                      LandingBuff;                                              // 0x04C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x04C8(0x000C) MISSED OFFSET
	float                                              StuckCheckDistance;                                       // 0x04D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckCheckDuration;                                       // 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x04DC(0x000C) MISSED OFFSET
	unsigned char                                      ForwardInputRepApplied : 1;                               // 0x04E8(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      ForwardInputRepIsForward : 1;                             // 0x04E8(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      RightInputRepApplied : 1;                                 // 0x04E8(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      RightInputRepIsRight : 1;                                 // 0x04E8(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsReleased : 1;                                          // 0x04E8(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsDriven : 1;                                            // 0x04E8(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	class Rotator                                      InitialRotation;                                          // 0x04EC(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     InitialVelocity;                                          // 0x04F8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     RideSocketOffset;                                         // 0x0504(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     LeaveSocketOffset;                                        // 0x0510(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicle");
		return ptr;
	}


	void ServerRelease();
	void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	void OnSecondInteractBy(class ATslCharacter* Character);
	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnRep_IsReleased();
	void OnRep_IsDriven();
	void OnPostDriverLeave();
	void OnInteractBy(class ATslCharacter* Character);
	void OnDriverRide();
	void OnDriverLeave();
	void Land();
	bool IsStuck();
	bool IsReleased();
	bool IsDriven();
	float GetAltitudeFromFloor();
	bool CanReleaseByInput();
	bool CanRelease();
	bool AllowSecondInteractBy(class ATslCharacter* Character);
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.ReplicatedRootComponent
// 0x0000 (0x0300 - 0x0300)
class UReplicatedRootComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReplicatedRootComponent");
		return ptr;
	}

};


// Class TslGame.ReplicationTrigger
// 0x0030 (0x03C0 - 0x0390)
class AReplicationTrigger : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	TArray<class AActor*>                              TargetReplicatedActors;                                   // 0x0398(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A8(0x0004) MISSED OFFSET
	int                                                ReplicationGroupCount;                                    // 0x03AC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03B0(0x0004) MISSED OFFSET
	float                                              ReplicationGroupIntervalSeconds;                          // 0x03B4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReplicationTrigger");
		return ptr;
	}


	void EnableReplicationGroup();
};


// Class TslGame.ReplicationTriggerManager
// 0x0028 (0x03B8 - 0x0390)
class AReplicationTriggerManager : public AInfo
{
public:
	TArray<class UClass*>                              TargetReplicatedActorClasses;                             // 0x0390(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	float                                              TriggerRadius;                                            // 0x03A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              TriggerInterval;                                          // 0x03A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	TArray<class AReplicationTrigger*>                 Triggers;                                                 // 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReplicationTriggerManager");
		return ptr;
	}

};


// Class TslGame.RewardData
// 0x0028 (0x0050 - 0x0028)
class URewardData : public UDataAsset
{
public:
	float                                              DefaultScoreMultiplierByDamage;                           // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultScoreMultiplierByKill;                             // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      ScoreByReverseRanking;                                    // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      ScoreMultiplierByRanking;                                 // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RewardData");
		return ptr;
	}

};


// Class TslGame.SceneInteractionComponent
// 0x0110 (0x0410 - 0x0300)
class USceneInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0300(0x0010) MISSED OFFSET
	float                                              MaxInteractableDistance;                                  // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	struct FText                                       InteractionVerb;                                          // 0x0318(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       InteractiveObjectName;                                    // 0x0330(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bUseTraceCheck : 1;                                       // 0x0348(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	struct FCastConfig                                 CastConfig;                                               // 0x0350(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0380(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInteractBy;                                             // 0x0388(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnInteractBy;                                       // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData04[0x68];                                      // 0x03A8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SceneInteractionComponent");
		return ptr;
	}


	struct FText GetInteractiveObjectName();
	struct FText GetInteractionVerb();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.DoorInteractionComponent
// 0x01F0 (0x0600 - 0x0410)
class UDoorInteractionComponent : public USceneInteractionComponent
{
public:
	unsigned char                                      bDoorOpened : 1;                                          // 0x0410(0x0001) (CPF_Net)
	unsigned char                                      bReverseRotation : 1;                                     // 0x0410(0x0001) (CPF_Net)
	unsigned char                                      bIgnoreParentValidityCheck : 1;                           // 0x0410(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	class Vector3D                                     SoundOffset;                                              // 0x0414(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDoorDataAsset*                              DoorDataAsset;                                            // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C8];                                     // 0x0428(0x01C8) MISSED OFFSET
	class UAkComponent*                                AkAudioComponent;                                         // 0x05F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DoorInteractionComponent");
		return ptr;
	}


	void OnRep_DoorOpened();
	bool AllowInteract(class ATslCharacter* OtherCharacter);
};


// Class TslGame.DroppedItemInteractionComponent
// 0x0060 (0x0470 - 0x0410)
class UDroppedItemInteractionComponent : public USceneInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0410(0x0038) MISSED OFFSET
	class UItem*                                       Item;                                                     // 0x0448(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0450(0x0008) MISSED OFFSET
	class UAsyncStaticMeshComponent*                   StaticMeshComponent;                                      // 0x0458(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemInteractionComponent");
		return ptr;
	}


	void OnRep_Item();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.VehicleSeatInteractionComponent
// 0x00B0 (0x04C0 - 0x0410)
class UVehicleSeatInteractionComponent : public USceneInteractionComponent
{
public:
	class ATslCharacter*                               Rider;                                                    // 0x0410(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0418(0x000C) MISSED OFFSET
	int                                                SeatIndex;                                                // 0x0424(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ERiderType>                            RiderType;                                                // 0x0428(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	struct FName                                       LeaveSocketName;                                          // 0x0430(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ViewPitchMin;                                             // 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x043C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMin;                                               // 0x0440(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMax;                                               // 0x0444(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMax;                                            // 0x0448(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMin;                                            // 0x0450(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       FirstPersonCameraName;                                    // 0x0458(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ThirdPersonCameraName;                                    // 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EVehicleAnimType>                      SeatAnimationType;                                        // 0x0468(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             SeatBlendspaceAiming;                                     // 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle;                                        // 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAimOffsetBlendSpace*                        SeatIdleAO;                                               // 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionOutBlendspace;                                  // 0x0488(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionInBlendspace;                                   // 0x0490(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRestricWeaponUse : 1;                                    // 0x0498(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EWeaponClass>>                  AllowedWeaponClasses;                                     // 0x04A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bCanOnlyFireWhileAiming : 1;                              // 0x04B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseEntryVelocityRestriction : 1;                         // 0x04B1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x04B2(0x0002) MISSED OFFSET
	float                                              MaxVelocityForEntry;                                      // 0x04B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InteractionBlockDuration;                                 // 0x04B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSeatInteractionComponent");
		return ptr;
	}


	void OnRep_Rider();
	void OnInteractDelegate(class ATslCharacter* OtherCharacter);
	bool IsWeaponClassAllowed(TEnumAsByte<EWeaponClass> InClass);
	bool IsEntryAllowedByVelocity();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	TEnumAsByte<EVehicleAnimType> GetVehicleAnimType();
	class UBlendSpaceBase* GetTransitionOutBlendspace();
	class UBlendSpaceBase* GetTransitionInBlendspace();
	class UAimOffsetBlendSpace* GetSeatIdleAO();
	class UAnimSequenceBase* GetSeatIdleAnimation();
	class UBlendSpaceBase* GetSeatAimingBlendspace();
	class ATslCharacter* GetRider();
	float GetMinPitchByYaw(float CurrentYaw);
	float GetMaxPitchByYaw(float CurrentYaw);
	bool GetCanFireOnlyWhileAimed();
	struct FText GetAdditionalMessage(class ATslCharacter* Character);
	bool AllowInteractDelegate(class ATslCharacter* OtherCharacter);
};


// Class TslGame.MotorbikeVehicleSeatInteraction
// 0x0000 (0x04C0 - 0x04C0)
class UMotorbikeVehicleSeatInteraction : public UVehicleSeatInteractionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MotorbikeVehicleSeatInteraction");
		return ptr;
	}


	bool IsEntryAllowed();
	void HandleFlipAndKickstand();
};


// Class TslGame.ParachuteVehicleSeatInteraction
// 0x0000 (0x04C0 - 0x04C0)
class UParachuteVehicleSeatInteraction : public UVehicleSeatInteractionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicleSeatInteraction");
		return ptr;
	}

};


// Class TslGame.SimpleInterpolationMovement
// 0x00A0 (0x0218 - 0x0178)
class USimpleInterpolationMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0178(0x0018) MISSED OFFSET
	float                                              LocationInterpTime;                                       // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0194(0x0038) MISSED OFFSET
	float                                              RotationInterpTime;                                       // 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x01D0(0x0038) MISSED OFFSET
	unsigned char                                      bUseOnlyYawRotation : 1;                                  // 0x0208(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseSweepMove : 1;                                        // 0x0209(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseSafeInterpolation : 1;                                // 0x020A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x020B(0x0001) MISSED OFFSET
	float                                              ForceMoveTime;                                            // 0x020C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SimpleInterpolationMovement");
		return ptr;
	}

};


// Class TslGame.FreeFallMovement
// 0x0050 (0x0268 - 0x0218)
class UFreeFallMovement : public USimpleInterpolationMovement
{
public:
	float                                              MinPitch;                                                 // 0x0218(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x021C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLateralSpeed;                                          // 0x0220(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralAcceleration;                                      // 0x0224(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralDeceleration;                                      // 0x0228(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralBrakeDeceleration;                                 // 0x022C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalAcceleration;                                     // 0x0230(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalDeceleration;                                     // 0x0234(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TerminalSpeed;                                            // 0x0238(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinAdditiveTerminalSpeed;                                 // 0x023C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxAdditiveTerminalSpeed;                                 // 0x0240(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RotationYawRate;                                          // 0x0244(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0248(0x0010) MISSED OFFSET
	float                                              InputUpdateTime;                                          // 0x0258(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x025C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FreeFallMovement");
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRightInput, float InDesiredPitchRotation, float InDesiredYawRotation);
	float GetRightInput();
	float GetForwardInput();
};


// Class TslGame.ParachuteVehicleMovement
// 0x0100 (0x0318 - 0x0218)
class UParachuteVehicleMovement : public USimpleInterpolationMovement
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0218(0x0004) MISSED OFFSET
	float                                              MaxSpeed;                                                 // 0x021C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Acceleration;                                             // 0x0220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Deceleration;                                             // 0x0224(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRotationYawRate;                                       // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationYawAcceleration;                                  // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationYawDeceleration;                                  // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TerminalVelocity;                                         // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseTerminalVelocity;                                 // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x023C(0x0008) MISSED OFFSET
	float                                              RotationYawReplicated;                                    // 0x0244(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RotationPitchReplicated;                                  // 0x0248(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              InputUpdateTime;                                          // 0x024C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2C];                                      // 0x0250(0x002C) MISSED OFFSET
	float                                              ParachuteDeployCoefficient;                               // 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              YawSpeed;                                                 // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxForwardPitch;                                          // 0x0284(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBackwardPitch;                                         // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceForwardScale;                                        // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceForwardStaticSpeed;                                  // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPSpeedMin;                                     // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPSpeedMax;                                     // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPValueMin;                                     // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPValueMax;                                     // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingPitchMin;                                          // 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingPitchMax;                                          // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingValueMin;                                          // 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingValueMax;                                          // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceDownAngleMin;                                        // 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceDownAngleMax;                                        // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravityMax;                                          // 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravitySpeedMin;                                     // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravitySpeedMax;                                     // 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravityValueMin;                                     // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravityValueMax;                                     // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollSpeedMin;                                             // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollSpeedMax;                                             // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollAngleMin;                                             // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollAngleMax;                                             // 0x02DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollInterpSpeed;                                          // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocitySpeedMin;                                    // 0x02E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocitySpeedMax;                                    // 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocityDampingMin;                                  // 0x02EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocityDampingMax;                                  // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	float                                              TraceSphereRadius;                                        // 0x02F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     TraceSphereOffset;                                        // 0x02FC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceStart;                                         // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceEnd;                                           // 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceDampingMin;                                    // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceDampingMax;                                    // 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicleMovement");
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRotationInput);
	float GetRotationYawRate();
	float GetRotationInput();
	float GetForwardInput();
	class Rotator GetClientRotation();
};


// Class TslGame.TslAircraftVehicleMovement
// 0x0008 (0x0220 - 0x0218)
class UTslAircraftVehicleMovement : public USimpleInterpolationMovement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAircraftVehicleMovement");
		return ptr;
	}

};


// Class TslGame.SpringArmInVehicleComponent
// 0x0000 (0x0390 - 0x0390)
class USpringArmInVehicleComponent : public USpringArmComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SpringArmInVehicleComponent");
		return ptr;
	}

};


// Class TslGame.StanceComponent
// 0x0080 (0x0170 - 0x00F0)
class UStanceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	struct FStanceTransitionData                       StanceTransitionData;                                     // 0x00F8(0x0060) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<EStanceMode>                           CurrentStance;                                            // 0x0158(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0159(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.StanceComponent");
		return ptr;
	}


	void ServerForceInitStance();
	void ServerChangeStance(TEnumAsByte<EStanceMode> ToStance);
	void OnRep_CurrentStance();
	void ClientInitByReconnection(TEnumAsByte<EStanceMode> InitStance);
};


// Class TslGame.TslPlayerStart
// 0x0028 (0x03E8 - 0x03C0)
class ATslPlayerStart : public APlayerStart
{
public:
	TEnumAsByte<EMatchStartType>                       MatchStartType;                                           // 0x03C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              StartRadius;                                              // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRandomRotation : 1;                                      // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	TArray<class AStartActivationVolume*>              ActivationVolumes;                                        // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerStart");
		return ptr;
	}


	float GetRandomStartYawRotation();
	class Vector3D GetRandomStartLocation();
};


// Class TslGame.StartActivationVolume
// 0x0008 (0x03D0 - 0x03C8)
class AStartActivationVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.StartActivationVolume");
		return ptr;
	}

};


// Class TslGame.ThingActivationVolume
// 0x0000 (0x03D0 - 0x03D0)
class AThingActivationVolume : public AStartActivationVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingActivationVolume");
		return ptr;
	}

};


// Class TslGame.InventoryFacade
// 0x0020 (0x03B8 - 0x0398)
class AInventoryFacade : public ASubActor
{
public:
	TArray<TEnumAsByte<EEquipSlotID>>                  AutoSwapEquipSlotID;                                      // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_Config)
	class AInventory*                                  Inventory;                                                // 0x03A8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AEquipment*                                  Equipment;                                                // 0x03B0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InventoryFacade");
		return ptr;
	}


	bool IsAutoSwappable(TEnumAsByte<EEquipSlotID> SlotID);
	bool HasItemByClass(class UClass* ItemClass);
	void GiveItem_Admin(class UClass* ItemClass);
	class ATslCharacter* GetOwnerCharacter();
	class AInventory* GetInventory();
	class AEquipment* GetEquipment();
};


// Class TslGame.Equipment
// 0x0050 (0x0418 - 0x03C8)
class AEquipment : public AItemSlotContainer
{
public:
	struct FScriptMulticastDelegate                    OnEquipmentUpdated;                                       // 0x03C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x03D8(0x0030) MISSED OFFSET
	TArray<class UEquipableItem*>                      Items;                                                    // 0x0408(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Equipment");
		return ptr;
	}


	struct FEquipPosition WeaponIndexToEquipPosition(int WeaponIndex);
	void WeaponAttachmentSwap(const struct FEquipPosition& SourceWeapon, const struct FEquipPosition& TargetWeapon, const struct FName& ItemClassForVerify, TEnumAsByte<EWeaponAttachmentSlotID> AttachmentSlotID, bool bSoundPlay);
	void UnequipItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bSoundPlay);
	bool TryEquipItem(class UItem* Item, bool bSoundPlay);
	void PrimaryWeaponSwap(const struct FEquipPosition& EquipPosition, const struct FString& Options);
	void Items_RepNotify();
	bool IsSwapablePrimaryWeapon(const struct FEquipPosition& EquipPosition, const struct FString& Options);
	bool IsAttachableToWeapon(int WeaponIndex, class UAttachableItem* AttachableItem, bool bOnlyFree);
	class ATslCharacter* GetOwnerCharacter();
	int GetItemCountByClass(class UClass* ItemClass);
	class UEquipableItem* GetItem(const struct FEquipPosition& Position);
	class AInventoryFacade* GetInventoryFacade();
	struct FEquipPosition FindPosition(class UItem* Item);
	struct FEquipPosition FindEquipPosition(TEnumAsByte<EEquipSlotID> SlotID, bool bOnlyFree);
	struct FEquipPosition FindEquipableWeaponPosition(class UEquipableItem* EquipableItem, const struct FString& Options);
	int FindAttachableWeaponIndex(class UAttachableItem* AttachableItem, const struct FString& Options);
	int EquipPositionToWeaponIndex(const struct FEquipPosition& Position);
	bool EquipItem(const struct FEquipPosition& Position, class UEquipableItem* Item, bool bCheckViaCanEquipTo, bool bSoundPlay);
	void DropItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bIsForce, bool bSoundPlay);
	void DropAttachedItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, TEnumAsByte<EWeaponAttachmentSlotID> SlotID, bool bSoundPlay);
	void DetachItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, TEnumAsByte<EWeaponAttachmentSlotID> SlotID, bool bSoundPlay);
};


// Class TslGame.Inventory
// 0x0028 (0x03F0 - 0x03C8)
class AInventory : public AItemSlotContainer
{
public:
	struct FScriptMulticastDelegate                    OnInventoryUpdated;                                       // 0x03C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<class UItem*>                               Items;                                                    // 0x03D8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	float                                              MaxSpace;                                                 // 0x03E8(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Inventory");
		return ptr;
	}


	void UseItem(int Index, const struct FName& ItemClassForVerify);
	void OnFinishUseCast(class UObject* CastObject);
	void Items_RepNotify();
	class ATslCharacter* GetOwnerCharacter();
	float GetMaxSpace();
	int GetItemCountByClass(class UClass* ItemClass);
	int GetItemCount();
	class AInventoryFacade* GetInventoryFacade();
	float GetCurrentSpace();
	TArray<struct FInventoryItem> GetAllItemsByType(class UClass* ItemSuperClass);
	TArray<struct FInventoryItem> GetAllItems();
	int GetAdditionalMaxCount(class UItem* Item);
	int FindItemIndex(class UItem* Item);
	class UItem* FindItemHasMinStack(class UClass* ItemClass);
	class UItem* FindItem(class UClass* ItemClass);
	void EquipOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void EquipItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void DropItem(int Index, const struct FName& ItemClassForVerify, const struct FString& Options, bool bSoundPlay);
	bool ConsumeItemByClass(class UClass* ItemClass, int Count);
	void AttachOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void AttachItem(int Index, const struct FName& ItemClassForVerify, const struct FEquipPosition& EquipPosition, bool bSoundPlay);
};


// Class TslGame.ItemExplorerProxy
// 0x0020 (0x0418 - 0x03F8)
class AItemExplorerProxy : public AItemExplorer
{
public:
	struct FScriptDelegate                             OnChangeItemExplorerProxy;                                // 0x03F8(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0408(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemExplorerProxy");
		return ptr;
	}


	void PropagateUpdateItemList();
	void PropagateDestroyContextMenuWidget();
	void PropagateCreateAndShowContextMenuWidget(const TScriptInterface<class USlotContainerInterface>& Param);
	void Pop();
	bool IsBaseExplorer();
};


// Class TslGame.CarePackageItem
// 0x0098 (0x0588 - 0x04F0)
class ACarePackageItem : public AItemPackage
{
public:
	class UClass*                                      ParachuteClass;                                           // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SmokeFxClass;                                             // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SmokeAirFxClass;                                          // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LightFxClass;                                             // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SmokeTime;                                                // 0x0510(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LimitFallSpeed;                                           // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SmokeSocket;                                              // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SmokeAirSocket;                                           // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       LightSocket;                                              // 0x0528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ParachuteSocket;                                          // 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSoundAk;                                              // 0x0538(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                SmokeFx;                                                  // 0x0540(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                SmokeAirFx;                                               // 0x0548(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                LightFx;                                                  // 0x0550(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      Parachute;                                                // 0x0558(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0560(0x0008) MISSED OFFSET
	class USimpleInterpolationMovement*                MovementComponent;                                        // 0x0568(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0570(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0578(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0580(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CarePackageItem");
		return ptr;
	}

};


// Class TslGame.FloorSnapItemPackage
// 0x0018 (0x0508 - 0x04F0)
class AFloorSnapItemPackage : public AItemPackage
{
public:
	float                                              RayLength;                                                // 0x04F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseWaterSurface : 1;                                     // 0x04F4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	float                                              WaterSurfaceThreshold;                                    // 0x04F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0500(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FloorSnapItemPackage");
		return ptr;
	}

};


// Class TslGame.NearbyInteractiveItemExplorer
// 0x0010 (0x0408 - 0x03F8)
class ANearbyInteractiveItemExplorer : public AItemExplorer
{
public:
	TArray<TWeakObjectPtr<class UObject>>              ExplorableItems;                                          // 0x03F8(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.NearbyInteractiveItemExplorer");
		return ptr;
	}

};


// Class TslGame.ThingSpawnProcessor
// 0x0010 (0x0038 - 0x0028)
class UThingSpawnProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.SubThingSpawnProcessor
// 0x0000 (0x0028 - 0x0028)
class USubThingSpawnProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SubThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.CombinedThingSpawnProcessor
// 0x0020 (0x0058 - 0x0038)
class UCombinedThingSpawnProcessor : public UThingSpawnProcessor
{
public:
	TArray<class UClass*>                              SubProcessorClasses;                                      // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class USubThingSpawnProcessor*>             SubProcessors;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CombinedThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.PackageSubThingSpawnProcessor
// 0x03D0 (0x03F8 - 0x0028)
class UPackageSubThingSpawnProcessor : public USubThingSpawnProcessor
{
public:
	class UDataTable*                                  RawItemSpawnDataTable;                                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FPackageSpotGroupProperty>           RawSpotGroupProperties;                                   // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3B0];                                     // 0x0048(0x03B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.PackageSubThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.VehicleSubThingSpawnProcessor
// 0x03F0 (0x0418 - 0x0028)
class UVehicleSubThingSpawnProcessor : public USubThingSpawnProcessor
{
public:
	TArray<struct FVehicleSpotGroupProperty>           RawSpotGroupProperties;                                   // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UDataTable*                                  RawVehicleSpawnDataTable;                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpawnZOffsetFromFloor;                                    // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3D4];                                     // 0x0044(0x03D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSubThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.Team
// 0x0058 (0x03E8 - 0x0390)
class ATeam : public AActor
{
public:
	struct FVector_NetQuantize100                      PlayerLocation;                                           // 0x0390(0x000C) (CPF_Net, CPF_Transient)
	class Rotator                                      PlayerRotation;                                           // 0x039C(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x03A8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      Health;                                                   // 0x03B8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      HealthMax;                                                // 0x03B9(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GroggyHealth;                                             // 0x03BA(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GroggyHealthMax;                                          // 0x03BB(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector2D                                     MapMarkerPosition;                                        // 0x03BC(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsDying : 1;                                             // 0x03C4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsGroggying : 1;                                         // 0x03C4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bQuitter : 1;                                             // 0x03C4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bShowMapMarker : 1;                                       // 0x03C4(0x0001) (CPF_Net, CPF_Transient)
	TEnumAsByte<ETeamVehicleType>                      TeamVehicleType;                                          // 0x03C5(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int8_t                                             MemberNumber;                                             // 0x03C6(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03C7(0x0001) MISSED OFFSET
	class ATslCharacter*                               TslCharacter;                                             // 0x03C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	struct FString                                     UniqueId;                                                 // 0x03D8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Team");
		return ptr;
	}


	void ServerSetShowMapMarker(bool bNewShowMapMarker);
	void ServerSetMapMarkerPosition(const class Vector2D& NewMapMarkerPosition);
	bool IsShowMapMarker();
	bool IsQuitter();
	bool IsGroggying();
	bool IsDying();
	class ATslCharacter* GetTslCharacter();
	TEnumAsByte<ETeamVehicleType> GetRideVehicle();
	struct FString GetPlayerUniqueId();
	class Rotator GetPlayerRotation();
	struct FString GetPlayerName();
	class Vector3D GetPlayerLocation();
	int GetMemberNumber();
	class Vector2D GetMapMarkerPosition();
	float GetHealthMax();
	float GetHealth();
	float GetGroggyHealthMax();
	float GetGroggyHealth();
};


// Class TslGame.TeamMarkWidget
// 0x0050 (0x0290 - 0x0240)
class UTeamMarkWidget : public UUserWidget
{
public:
	class ATeam*                                       TeamMember;                                               // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OffsetZ;                                                  // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VehicleOffsetZ;                                           // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImageSize;                                                // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TopMarkGapDistance;                                       // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BottomMarkGapDistance;                                    // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeftRightMarkGapDistance;                                 // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiagonalPercent;                                          // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeadMarkInvisibleTime;                                    // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeadMarkInvisibleDistance;                                // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMarkPosition>                         TeamMarkPosition;                                         // 0x026C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x23];                                      // 0x026D(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TeamMarkWidget");
		return ptr;
	}


	void SetCharacterIconPosition_UC(const class Vector2D& Pos_UC, bool OutRange, float Angle, bool IsHidden);
	void InitializeTeamMarkGrid();
};


// Class TslGame.ThingHolder
// 0x00A0 (0x0430 - 0x0390)
class AThingHolder : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0390(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingHolder");
		return ptr;
	}

};


// Class TslGame.ThingSpot
// 0x0008 (0x0398 - 0x0390)
class AThingSpot : public AActor
{
public:
	class UThingSpotComponent*                         SpotComponent;                                            // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingSpot");
		return ptr;
	}

};


// Class TslGame.ThingSpotComponent
// 0x0010 (0x0310 - 0x0300)
class UThingSpotComponent : public USceneComponent
{
public:
	TEnumAsByte<EThingSpotGroupType>                   SpotGroupType;                                            // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	class Vector2D                                     RandomRotatorRange;                                       // 0x0304(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingSpotComponent");
		return ptr;
	}

};


// Class TslGame.TslAccessoryComponent
// 0x0040 (0x0340 - 0x0300)
class UTslAccessoryComponent : public USceneComponent
{
public:
	struct FTransform                                  InitialTransformAttachmentScene;                          // 0x0300(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAccessoryComponent");
		return ptr;
	}


	void SetPhysicsSimulation(bool bSimulatePhysics);
	void InitSetupComponent(bool bSimulatePhysics);
};


// Class TslGame.TslAIController
// 0x0020 (0x04A8 - 0x0488)
class ATslAIController : public AAIController
{
public:
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x0488(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBehaviorTreeComponent*                      BehaviorComp;                                             // 0x0490(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0498(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAIController");
		return ptr;
	}


	void ShootEnemy();
	bool FindClosestEnemyWithLOS(class ATslCharacter* ExcludeEnemy);
	void FindClosestEnemy();
};


// Class TslGame.TslAircraftVehicle
// 0x0090 (0x0480 - 0x03F0)
class ATslAircraftVehicle : public APawn
{
public:
	TArray<struct FAircraftParticle>                   AircraftParticles;                                        // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class ATslParticle*>                        AttachedParticles;                                        // 0x0400(0x0010) (CPF_ZeroConstructor)
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0410(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAircraftVehicleMovement*                 MovementComponent;                                        // 0x0418(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USplineComponent*                            SplineComponent;                                          // 0x0420(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0428(0x0048) MISSED OFFSET
	float                                              TotalFlyingTime;                                          // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0474(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAircraftVehicle");
		return ptr;
	}

};


// Class TslGame.AircraftCarePackage
// 0x0048 (0x04C8 - 0x0480)
class AAircraftCarePackage : public ATslAircraftVehicle
{
public:
	class UClass*                                      CarePackageItemSpawnerClass;                              // 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      CarePackageItemClass;                                     // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FDropCarePackageTableData>           DropCarePackageTableData;                                 // 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UGeneralItemSpawner*                         CarePackageItemSpawner;                                   // 0x04A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x04A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AircraftCarePackage");
		return ptr;
	}


	bool IsPlayInEditor();
};


// Class TslGame.TransportAircraftVehicle
// 0x0078 (0x04F8 - 0x0480)
class ATransportAircraftVehicle : public ATslAircraftVehicle
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0480(0x0028) MISSED OFFSET
	class UAkAudioEvent*                               RideSound;                                                // 0x04A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LeaveSound;                                               // 0x04B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkComponent*                                AkSoundCom;                                               // 0x04B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x04C0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      ParachuteItem;                                            // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UInteractionComponent*                       InteractionComponent;                                     // 0x04D0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bIsEnteredAtEjectionArea : 1;                             // 0x04D8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              EjectPredictionTime;                                      // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxEjectSpeed;                                            // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x04E4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TransportAircraftVehicle");
		return ptr;
	}


	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnLocalPlayerRide();
	void OnLocalPlayerLeave();
	void OnLeave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnInteractBy(class ATslCharacter* Character);
	bool IsInEjectionArea();
	void EnterAtEjectionArea();
	void EjectAll();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.TslWheeledVehicle
// 0x0268 (0x0668 - 0x0400)
class ATslWheeledVehicle : public AWheeledVehicle
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0400(0x0020) MISSED OFFSET
	class USphereComponent*                            ActivationTrigger;                                        // 0x0420(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fuel;                                                     // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FuelMax;                                                  // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bStabilizeActive : 1;                                     // 0x0438(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	float                                              AirControlPitchInput;                                     // 0x043C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SpeedKPH;                                                 // 0x0440(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0444(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RPM;                                                      // 0x0448(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Brake;                                                    // 0x044C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LatMax;                                                   // 0x0450(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LongSum;                                                  // 0x0454(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              WaterDepthMax;                                            // 0x0458(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SurfaceMax;                                               // 0x045C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SuspensionMax;                                            // 0x0460(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                FlatTireCount;                                            // 0x0464(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bDirtySpeedKPH : 1;                                       // 0x0468(0x0001)
	unsigned char                                      bDirtyThrottleInput : 1;                                  // 0x0468(0x0001)
	unsigned char                                      bDirtyRPM : 1;                                            // 0x0468(0x0001)
	unsigned char                                      bDirtyWaterDepthMax : 1;                                  // 0x0468(0x0001)
	unsigned char                                      bDirtyBrake : 1;                                          // 0x0468(0x0001)
	unsigned char                                      bDetectedStartup : 1;                                     // 0x0468(0x0001)
	unsigned char                                      bDetectedBraking : 1;                                     // 0x0468(0x0001)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	TArray<float>                                      WheelsLatSlip;                                            // 0x0470(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<float>                                      WheelsLongSlip;                                           // 0x0480(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<float>                                      WheelsSuspensionOffset;                                   // 0x0490(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UPhysicalMaterial*>                   WheelsContactSurface;                                     // 0x04A0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UPhysicalMaterial*>                   TestWheelsContactSurface_prev;                            // 0x04B0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<float>                                      WheelsSuspensionMaxDrop;                                  // 0x04C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsSuspensionMaxRaise;                                 // 0x04D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               NullSound;                                                // 0x04E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTslImpactSoundInfo                         ImpactSound;                                              // 0x04E8(0x0060) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTslImpactSoundInfo                         LandingSound;                                             // 0x0548(0x0060) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartupSound;                                             // 0x05A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BreakSound;                                               // 0x05B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bWantsToBoosting : 1;                                     // 0x05B8(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	float                                              TorqueMultiplierForBoosting;                              // 0x05BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x05C0(0x0008) MISSED OFFSET
	class UTslVehicleHitComponent*                     VehicleHitComponent;                                      // 0x05C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleCommonComponent*                  VehicleCommonComponent;                                   // 0x05D0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x05D8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleEffectComponent*                  VehicleEffectComponent;                                   // 0x05E0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSyncComponent*                    VehicleSyncComponent;                                     // 0x05E8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleTempComponent*                    VehicleTempComponent;                                     // 0x05F0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AudioComEngine;                                           // 0x05F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0600(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       SinkPoint;                                                // 0x0608(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SinkBuffType;                                             // 0x0610(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
	class UBuffComponet*                               BuffComponent;                                            // 0x0620(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;                     // 0x0628(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bProcessAutoEject : 1;                                    // 0x0638(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0639(0x0003) MISSED OFFSET
	float                                              AutoEjectGroundDistance;                                  // 0x063C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEjectRoll;                                            // 0x0640(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEjectPitch;                                           // 0x0644(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEject_RiseRate;                                       // 0x0648(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEject_FallRate;                                       // 0x064C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0650(0x0004) MISSED OFFSET
	unsigned char                                      bRunStabilizeOnEntry : 1;                                 // 0x0654(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	float                                              StabilizeInitialTimer;                                    // 0x0658(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StablizeCurrentTimer;                                     // 0x065C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SteeringYawBias;                                          // 0x0660(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheeledVehicle");
		return ptr;
	}


	void UpdateWheelSound();
	void UpdateWheelCaching();
	void UpdateBasicInfoCaching();
	void SetAirControlPitchInput(float InInput);
	void ServerSetBoosting(bool bNewBoosting);
	void OnVehicleEjected();
	void OnPostDriverRide();
	void OnBreak();
	bool IsSunken();
	bool IsStablizeOverrideActive();
	bool IsStabilizeOverrideEnabled();
	bool IsInWaterVolume();
	bool IsEnabledOptimizeTick();
	bool IsBoosting();
	class UTslWheeledVehicleMovement* GetTslVehicleMovement();
	float GetSteeringInput();
	float GetCurrentWaterSurfaceZ();
	class UBuffComponet* GetBuffComponent();
	float GetAirControlPitchInput();
	void ActivationTriggerEndOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ActivationTriggerBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class TslGame.TslFloatingVehicle
// 0x0090 (0x0480 - 0x03F0)
class ATslFloatingVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0400(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0408(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslFloatingVehicleMovement*                 MovementComponent;                                        // 0x0410(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleHitComponent*                     VehicleHitComponent;                                      // 0x0418(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleCommonComponent*                  VehicleCommonComponent;                                   // 0x0420(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x0428(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleEffectComponent*                  VehicleEffectComponent;                                   // 0x0430(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSyncComponent*                    VehicleSyncComponent;                                     // 0x0438(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleTempComponent*                    VehicleTempComponent;                                     // 0x0440(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AudioComEngine;                                           // 0x0448(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;                     // 0x0450(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       VehicleEnginePoint;                                       // 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VehicleEngineRadius;                                      // 0x0468(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x046C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fuel;                                                     // 0x0474(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FuelMax;                                                  // 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFloatingVehicle");
		return ptr;
	}


	bool IsBoosting();
	float GetVehicleEngineImmersionDepth();
	class Vector3D GetVehicleAcceleration();
	float GetSteerYawAngle();
};


// Class TslGame.TslWheeledVehicleMovement
// 0x0018 (0x0430 - 0x0418)
class UTslWheeledVehicleMovement : public UWheeledVehicleMovementComponent4W
{
public:
	TArray<float>                                      WheelHealthPercentages;                                   // 0x0418(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheeledVehicleMovement");
		return ptr;
	}


	void SetSimulateVehicle(bool bSimulate);
	void ServerUpdateAdditionalState(int TargetGear);
	void OnDriverRide();
	void OnDriverLeave();
	void OnBreak();
	bool IsSimulatingVehicle();
	float GetWheelWaterDepth(int Index);
	float GetWheelSuspensionMaxRaise(int Index);
	float GetWheelSuspensionMaxDrop(int Index);
	float GetWheelRotationSpeed(int Index);
	TArray<float> GetWheelHealthPercentages();
	TEnumAsByte<EWheelContactType> GetWheelContactType(int Index, float MinVelocity, float MinSkid, float MinSpin, float SuspOffsetForContact);
	class UPhysicalMaterial* GetWheelContactSurfaceMaterial(int Index);
	struct FWheelContactData GetWheelContactData(int Index, float MinVelocity, float MinSkid, float MinSpin, float SuspOffsetForContact);
	float GetThrottleInput();
	float GetSteeringInputClamped();
	float GetSteeringInput();
	float GetHandbrakeInput();
	float GetBrakeInput();
	void ClientPunctureTire(int WheelIndex);
};


// Class TslGame.TslFloatingVehicleMovement
// 0x0040 (0x01B8 - 0x0178)
class UTslFloatingVehicleMovement : public UPawnMovementComponent
{
public:
	float                                              MaxAcceleration;                                          // 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Acceleration;                                             // 0x017C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              StartAccelerationRate;                                    // 0x0180(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StopAccelerationRate;                                     // 0x0184(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxRotationYawAngle;                                      // 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RotationYawAngle;                                         // 0x018C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RotationYawRate;                                          // 0x0190(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DirectionalAccelerationCurve;                             // 0x0198(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BoostModifier;                                            // 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsBoosting : 1;                                          // 0x01A4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	float                                              ForwardInput;                                             // 0x01A8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RotationInput;                                            // 0x01AC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01B0(0x0004) MISSED OFFSET
	float                                              HitCharacterDuration;                                     // 0x01B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFloatingVehicleMovement");
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRotationInput, bool bInIsBoosting);
	void OnDriverLeave();
	bool IsBoosting();
	float GetRotationYawAngle();
	float GetMaxRotationYawAngle();
	float GetMaxAcceleration();
	class Vector3D GetCalculatedAcceleration();
	float GetAcceleration();
};


// Class TslGame.TslVehicleWheel
// 0x00E0 (0x01E0 - 0x0100)
class UTslVehicleWheel : public UVehicleWheel
{
public:
	float                                              Health;                                                   // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       TireBoneName;                                             // 0x0108(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LongSlipSkidThreshold;                                    // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralSlipSkidThreshold;                                 // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpringCompressionLandingThreshold;                        // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bManualSuspensionSoundControl : 1;                        // 0x011C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	class Vector3D                                     WheelEffectOffset;                                        // 0x0120(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UTslWheelEffectType*                         RollEffect;                                               // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheelEffectType*                         SkidAccelEffect;                                          // 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheelEffectType*                         SkidEffect;                                               // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      PuncturedParticleClass;                                   // 0x0148(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandingSound;                                             // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bApplyForceOnPuncture : 1;                                // 0x0158(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              PunctureForce;                                            // 0x015C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunctureVelocityScalar;                                   // 0x0160(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0164(0x000C) MISSED OFFSET
	class ATslParticle*                                TslParticleRoll;                                          // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                TslParticleSkid;                                          // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                TslParticleAccelSkid;                                     // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UAkComponent*                                AudioCom;                                                 // 0x0188(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              MinZVelocityForSuspensionSound;                           // 0x0190(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3C];                                      // 0x0194(0x003C) MISSED OFFSET
	float                                              TotalSpeedKmPerHour;                                      // 0x01D0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Slip;                                                     // 0x01D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UseRoll : 1;                                              // 0x01D8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UseSkid : 1;                                              // 0x01D9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UseAccelSkid : 1;                                         // 0x01DA(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bHasLastStatus : 1;                                       // 0x01DB(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleWheel");
		return ptr;
	}

};


// Class TslGame.TslAnimInstance
// 0x0728 (0x0BC0 - 0x0498)
class UTslAnimInstance : public UAnimInstance
{
public:
	struct FScriptMulticastDelegate                    WeaponFire;                                               // 0x0498(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponFireCycle;                                          // 0x04A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipPrimary;                                             // 0x04B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipSecondary;                                           // 0x04C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EqupiSidearm;                                             // 0x04D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipMelee;                                               // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrown;                                              // 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipPrimary;                                           // 0x0508(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipSecondary;                                         // 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEqupiSidearm;                                           // 0x0528(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipMelee;                                             // 0x0538(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipThrown;                                            // 0x0548(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ToggleFireMode;                                           // 0x0558(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadTactical;                                           // 0x0568(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadCharge;                                             // 0x0578(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStart;                                         // 0x0588(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStop;                                          // 0x0598(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneSingle;                                        // 0x05A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownGrenade;                                       // 0x05B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownMolotov;                                       // 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownOther;                                         // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowHigh;                                                // 0x05E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowLow;                                                 // 0x05F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowGrenadeReady;                                        // 0x0608(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowGrenadeStart;                                        // 0x0618(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowMolotovReady;                                        // 0x0628(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowMolotovStart;                                        // 0x0638(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowDrop;                                                // 0x0648(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandHeavy;                                                // 0x0658(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandExtreme;                                              // 0x0668(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadCancel;                                             // 0x0678(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterPickup;                                          // 0x0688(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnarmedAttack;                                            // 0x0698(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    PowerupUsed;                                              // 0x06A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChangeCharacterAppearance;                                // 0x06B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06C8(0x0008) MISSED OFFSET
	class ATslCharacter*                               CharacterReference;                                       // 0x06D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAnimPawnState>                        PreEvalPawnState;                                         // 0x06D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06D9(0x0003) MISSED OFFSET
	float                                              LocomotionSpeed_CP;                                       // 0x06DC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocomotionSpeed2D_CP;                                     // 0x06E0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsMoving_CP : 1;                                         // 0x06E4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	float                                              LocomotionDirection_CP;                                   // 0x06E8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocomotionJumpDirection_CP;                               // 0x06EC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanYaw_CP;                                               // 0x06F0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      LastAbsoluteDirection_CP;                                 // 0x06F4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      ControlRotation_CP;                                       // 0x0700(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      ControlRotationLastMovement_CP;                           // 0x070C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAnimStance>                           Stance_CP;                                                // 0x0718(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSprintingFast_CP : 1;                                  // 0x0719(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x071A(0x0002) MISSED OFFSET
	float                                              WeaponGripType_CP;                                        // 0x071C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintAlpha_CP;                                           // 0x0720(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintValue_CP;                                           // 0x0724(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalQuickThrowHigh_CP : 1;                              // 0x0728(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsJumping_CP : 1;                                        // 0x0729(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bJumpForward_CP : 1;                                      // 0x072A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSwimming_CP : 1;                                       // 0x072B(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsUnderWater_CP : 1;                                     // 0x072C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsDBNO_CP : 1;                                           // 0x072D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsReviving_CP : 1;                                       // 0x072E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x072F(0x0001) MISSED OFFSET
	int                                                PlayerID_CP;                                              // 0x0730(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AirCraftIDAnim_CP;                                        // 0x0734(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsEquippingPistol_CP : 1;                                // 0x0738(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0739(0x0007) MISSED OFFSET
	class UAnimMontage*                                PistolEquipMontageRefCP;                                  // 0x0740(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsFlying_CP : 1;                                         // 0x0748(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsLocalPlayer : 1;                                       // 0x0749(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x074A(0x0002) MISSED OFFSET
	float                                              LocalPlayerAlpha;                                         // 0x074C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsPunching_CP : 1;                                       // 0x0750(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	float                                              PunchingAlpha_CP;                                         // 0x0754(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAnimWeaponType>                       Weapon_CP;                                                // 0x0758(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsArmedWithGun_CP : 1;                                   // 0x0759(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsArmedWithThrown_CP : 1;                                // 0x075A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x5];                                       // 0x075B(0x0005) MISSED OFFSET
	class UAnimMontage*                                CurrentRecoilMontage_CP;                                  // 0x0760(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace1D*                               GripBlendSpace_CP;                                        // 0x0768(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             GripBlendSpaceLH_CP;                                      // 0x0770(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LHGripIndex_CP;                                           // 0x0778(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsReloading_CP : 1;                                      // 0x077C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	class Vector3D                                     HandWeaponOffset_CP;                                      // 0x0780(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	struct FTransform                                  WeaponInertia_CP;                                         // 0x0790(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              ReloadAlpha_CP;                                           // 0x07C0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HandWeaponOffsetAlpha_CP;                                 // 0x07C4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalRecoilAlpha_CP;                                      // 0x07C8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_CP;                            // 0x07D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Pistol;                        // 0x07D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_SMG;                           // 0x07E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Rifle;                         // 0x07E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Sniper;                        // 0x07F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaX_Scalar_CP;                                 // 0x07F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaY_Scalar_CP;                                 // 0x07FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaX_Clamp_CP;                                  // 0x0800(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaY_Clamp_CP;                                  // 0x0804(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_CP;                              // 0x0808(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaX_Scalar_ADS_CP;                             // 0x080C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaY_Scalar_ADS_CP;                             // 0x0810(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaX_Clamp_ADS_CP;                              // 0x0814(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaY_Clamp_ADS_CP;                              // 0x0818(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_ADS_CP;                          // 0x081C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_YawScalar_CP;                    // 0x0820(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_YawToRollScalar_CP;                         // 0x0824(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_YawToRollScalar_ADS_CP;                     // 0x0828(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaRoll_Clamp_ADS_CP;                           // 0x082C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaRoll_Clamp_CP;                               // 0x0830(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_Yaw_CP;                                     // 0x0834(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponInertia_Pitch_CP;                                   // 0x0838(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponInertia_Roll_CP;                                    // 0x083C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRollValue_CP;                                       // 0x0840(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilTimer_CP;                                           // 0x0844(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRollRand_CP;                                        // 0x0848(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilTimerScale_CP;                                      // 0x084C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 RecoilRollCurve_CP;                                       // 0x0850(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponStabilityAlpha_CP;                                  // 0x0858(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponStabilityRefSpeed_CP;                               // 0x085C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsAiming_CP : 1;                                         // 0x0860(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsScoping_CP : 1;                                        // 0x0861(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0862(0x0002) MISSED OFFSET
	float                                              WeaponAimState_CP;                                        // 0x0864(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintAlphaModifier_CP;                                   // 0x0868(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsAimingBackward_CP : 1;                                 // 0x086C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	float                                              Yaw_CP;                                                   // 0x0870(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationYaw_CP;                                           // 0x0874(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Pitch_CP;                                                 // 0x0878(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DesiredPitch_CP;                                          // 0x087C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AimDirectionCardinal_CP;                                  // 0x0880(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0881(0x0003) MISSED OFFSET
	class Rotator                                      AORot_CP;                                                 // 0x0884(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      AORotBackwards_CP;                                        // 0x0890(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SwimmingPitch_CP;                                         // 0x089C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponCollisionAlpha_CP;                                  // 0x08A0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWeaponObstructedHigh_CP : 1;                             // 0x08A4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWasFalling_CP : 1;                                       // 0x08A5(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x08A6(0x0002) MISSED OFFSET
	float                                              FallingAlpha_CP;                                          // 0x08A8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     FallingMap2D;                                             // 0x08AC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     FallingMapZ;                                              // 0x08B4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bForceFall_CP : 1;                                        // 0x08BC(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	class UAnimMontage*                                MontageFallingRifle_CP;                                   // 0x08C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageFallingUnarmed_CP;                                 // 0x08C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LandingAlpha_CP;                                          // 0x08D0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalForceProne_CP : 1;                                  // 0x08D4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x08D5(0x0003) MISSED OFFSET
	float                                              JumpHeight_CP;                                            // 0x08D8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FallHeight_CP;                                            // 0x08DC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     JumpStartLocation_CP;                                     // 0x08E0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LandPredictionVector_CP;                                  // 0x08EC(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanLeftAlpha_CP;                                         // 0x08F8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanRightAlpha_CP;                                        // 0x08FC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFreefalling_CP : 1;                                    // 0x0900(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsParachuting_CP : 1;                                    // 0x0901(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x0902(0x0002) MISSED OFFSET
	float                                              FreefallX_CP;                                             // 0x0904(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreefallY_CP;                                             // 0x0908(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreeFallAlpha_CP;                                         // 0x090C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsParachuteLanding_CP : 1;                               // 0x0910(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsParachuteMoving_CP : 1;                                // 0x0911(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x0912(0x0002) MISSED OFFSET
	float                                              Freefall_Yaw_CP;                                          // 0x0914(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Freefall_Pitch_CP;                                        // 0x0918(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFreelooking_CP : 1;                                    // 0x091C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsMeleeAttacking_CP : 1;                                 // 0x091D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalForceRotationHipLeft_CP : 1;                        // 0x091E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalForceRotationHipRight_CP : 1;                       // 0x091F(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalForceRotationAimed_CP : 1;                          // 0x0920(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              RotationPlayrateAimed_CP;                                 // 0x0924(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationPlayrateAimedAdditiveSpine_CP;                    // 0x0928(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      LastRotation_CP;                                          // 0x092C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IdleIndex_CP;                                             // 0x0938(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastIdleIndex_CP;                                         // 0x093C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IdleTimer_CP;                                             // 0x0940(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IdleTriggerRandom;                                        // 0x0944(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IdleTriggerTimeMin_CP;                                    // 0x0948(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IdleTriggerTimeVariation_CP;                              // 0x094C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotPrimary_CP;                                           // 0x0950(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FTransform                                  SlotSecondary_CP;                                         // 0x0980(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FTransform                                  SlotMelee_CP;                                             // 0x09B0(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FTransform                                  SlotThrown_CP;                                            // 0x09E0(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              AnimDynamicsStandAlpha_CP;                                // 0x0A10(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimDynamicsStandSprintAlpha_CP;                          // 0x0A14(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimDynamicsCrouchAlpha_CP;                               // 0x0A18(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimDynamicsProneAlpha_CP;                                // 0x0A1C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     EFCoat_CP;                                                // 0x0A20(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalFPP_CP : 1;                                         // 0x0A2C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0A2D(0x0003) MISSED OFFSET
	float                                              LocalFPPAlpha_CP;                                         // 0x0A30(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalFPPAlphaVehicleAimAO_CP;                             // 0x0A34(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsInAircraft_CP : 1;                                     // 0x0A38(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsDriver_CP : 1;                                         // 0x0A39(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSitting_CP : 1;                                        // 0x0A3A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsInVehicle_CP : 1;                                      // 0x0A3B(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalSteerInput_CP;                                       // 0x0A3C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalSteerInputMoto_CP;                                   // 0x0A40(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalStopMoto_CP;                                         // 0x0A44(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalThrottleInput_CP;                                    // 0x0A48(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      GasThighRot_CP;                                           // 0x0A4C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      GasAnkleRot_CP;                                           // 0x0A58(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData22[0xC];                                       // 0x0A64(0x000C) MISSED OFFSET
	struct FTransform                                  GasKneeTransformX_CP;                                     // 0x0A70(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              LocalBrakeInput_CP;                                       // 0x0AA0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData23[0xC];                                       // 0x0AA4(0x000C) MISSED OFFSET
	struct FTransform                                  BrakeKneeTransform_CP;                                    // 0x0AB0(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      BrakeAnkleRot_CP;                                         // 0x0AE0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BackwardAOAlpha_CP;                                       // 0x0AEC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimBlendAlpha_CP;                                         // 0x0AF0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasContact_CP : 1;                                       // 0x0AF4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0AF5(0x0003) MISSED OFFSET
	float                                              GroundContactMoto_CP;                                     // 0x0AF8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirControlPitchInput_CP;                                  // 0x0AFC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  DriverIK_CP;                                              // 0x0B00(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PassengerIKAlpha_CP;                                      // 0x0B30(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     DriverSpineLocWS_CP;                                      // 0x0B34(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVehicleAnimType>                      VehicleSeatType_CP;                                       // 0x0B40(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bMotoHasDriver_CP : 1;                                    // 0x0B41(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x0B42(0x0002) MISSED OFFSET
	float                                              WeaponIKLH_CP;                                            // 0x0B44(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponIKRH_CP;                                            // 0x0B48(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MontageIKLH_CP;                                           // 0x0B4C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MontageIKRH_CP;                                           // 0x0B50(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IgnoreWeaponTransform_CP;                                 // 0x0B54(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PickupIKAlpha_CP;                                         // 0x0B58(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetIKRH_CP;                                            // 0x0B5C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetIKLH_CP;                                            // 0x0B60(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceLegsFromAnim_CP;                                     // 0x0B64(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslWeapon_Gun*                              LastGunCache_CP;                                          // 0x0B68(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslWheeledVehicle*                          CachedWheeledVehicle_CP;                                  // 0x0B70(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslFloatingVehicle*                         CachedFloatingVehicle_CP;                                 // 0x0B78(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             PassengerAimBS_CP;                                        // 0x0B80(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             PassengerTransitionOut_CP;                                // 0x0B88(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             PassengerTransitionIn_CP;                                 // 0x0B90(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_CP;                                         // 0x0B98(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurveAimState_CP;                                         // 0x0BA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageMeleeAttack1;                                      // 0x0BA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageMeleeAttack2;                                      // 0x0BB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageMeleeAttack3;                                      // 0x0BB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAnimInstance");
		return ptr;
	}


	void SetLandPredictionVector(const class Vector3D& newLandVector);
	void SetJumpStartLocation(const class Vector3D& NewLocation, float DefaultFallHeight);
	void ResetRecoilRoll();
	void ResetIdle();
	void RandomizeIdleIndex_CP(bool ExludeLastIndex);
	void ProcessCodePaths();
	void PreEvaluatePawnState();
	void OnHitReaction(TEnumAsByte<EAnimWeaponType> WeaponType, const struct FName& BoneName, const class Vector3D& Direction);
	void HandleSpeedAndDirection_CP();
	unsigned char HandleCardinalDirection90(float InDirection);
	void HandleAnimCurves();
	void HandleADSSocketOffset();
	float FindPositionFromDistanceCurve(float Distance, class UAnimSequenceBase* InAnimSequence);
	void EvaluateWeaponStates();
	void EvaluateWeaponStability();
	void EvaluateWeaponInertia();
	void EvaluateWeaponCollision();
	void EvaluateVehicle();
	void EvaluateSwimming();
	void EvaluateRotations();
	void EvaluateRecoilRoll();
	void EvaluatePawnStates();
	void EvaluateMeleeAttack();
	void EvaluateLocalPawnStates();
	void EvaluateLeaning();
	void EvaluateJumping();
	void EvaluateJumpCamera();
	void EvaluateIdle();
	void EvaluateFreefallAndParachute();
	void EvaluateFallingAndLanding();
	void EvaluateCoatExternalForce();
	void EvaluateCharacterStates();
	void EvaluateAnimDynamics();
	void EvaluateAimStates();
	void EvaluateAimOffsets();
	void CacheCharacterReference(class ATslCharacter* InCharacter);
};


// Class TslGame.TslDamageType
// 0x0050 (0x0090 - 0x0040)
class UTslDamageType : public UDamageType
{
public:
	TEnumAsByte<EDamageTypeCategory>                   DamageTypeCategory;                                       // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FCanvasIcon                                 KillIcon;                                                 // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UForceFeedbackEffect*                        HitForceFeedback;                                         // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        KilledForceFeedback;                                      // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bFallDamage : 1;                                          // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FDamageRatioInfo>                    DamageRatioInfos;                                         // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      HitReaction : 1;                                          // 0x0088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDamageType");
		return ptr;
	}

};


// Class TslGame.TslHUD
// 0x03A0 (0x08A0 - 0x0500)
class ATslHUD : public ATslBaseHUD
{
public:
	struct FScriptMulticastDelegate                    OnPossessPawnChange;                                      // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisplaySystemMessage;                                   // 0x0510(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisplayKilledMessage;                                   // 0x0520(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKillCountChanged;                                       // 0x0530(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHit;                                              // 0x0540(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamPlayerJoin;                                         // 0x0550(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamPlayerRemove;                                       // 0x0560(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyStartBuff;                                        // 0x0570(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHealAmount;                                       // 0x0580(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyRestrictingPlayArea;                              // 0x0590(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyNextGasIn;                                        // 0x05A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyDisplayMessage;                                   // 0x05B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyWeaponChange;                                     // 0x05C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyWeaponUnarm;                                      // 0x05D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHeal;                                             // 0x05E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyDropSlotOnOtherContainer;                         // 0x05F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	int                                                BluezoneState;                                            // 0x0600(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     NextPlayzonePosition;                                     // 0x0604(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NextPlayzoneRadius;                                       // 0x0610(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CurrentPlayzonePosition;                                  // 0x0614(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentPlayzoneRadius;                                    // 0x0620(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGpsReset : 1;                                            // 0x0624(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBluezoneReset : 1;                                       // 0x0625(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPlayzoneReset : 1;                                       // 0x0626(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0627(0x0001) MISSED OFFSET
	float                                              GpsResetTimeCheck;                                        // 0x0628(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x062C(0x0034) MISSED OFFSET
	struct FCanvasIcon                                 TimePlaceBg;                                              // 0x0660(0x0018)
	struct FCanvasIcon                                 PrimaryWeapBg;                                            // 0x0678(0x0018)
	struct FCanvasIcon                                 SecondaryWeapBg;                                          // 0x0690(0x0018)
	struct FCanvasIcon                                 Crosshair[0x5];                                           // 0x06A8(0x0018)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0720(0x0078) MISSED OFFSET
	class UTexture2D*                                  HitNotifyTexture;                                         // 0x0798(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  HUDMainTexture;                                           // 0x07A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  HUDAssets02Texture;                                       // 0x07A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  LowHealthOverlayTexture;                                  // 0x07B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       BigFont;                                                  // 0x07B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       NormalFont;                                               // 0x07C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x60];                                      // 0x07C8(0x0060) MISSED OFFSET
	class UTslSceneCaptureWorld*                       SceneCaptureWorld;                                        // 0x0828(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x58];                                      // 0x0830(0x0058) MISSED OFFSET
	struct FString                                     SceneCapturePackageName;                                  // 0x0888(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0898(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslHUD");
		return ptr;
	}


	void TestSendSystemMessage(const struct FText& Message, float Duration);
	void TestSendImportantMessage(const struct FText& Message, float Duration);
	void TestKillMessage(const struct FString& KillerName, const struct FString& VictimName, bool bKillerIsOwner, bool bVictimIsOwner);
	void SpawnActorInSceneCaptureWorld(class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FScriptDelegate& DelegateToCall);
	void NotifyDropSlotOnOtherContainer(const TScriptInterface<class USlotContainerInterface>& Container, const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer);
	bool IsGameEnded();
	void InitCaptureWorld();
	void GoToLobby();
	class APawn* GetPossessPawn();
	class ATslCharacter* GetPossessCharacter();
};


// Class TslGame.LobbyHUD
// 0x00D0 (0x0970 - 0x08A0)
class ALobbyHUD : public ATslHUD
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	struct FString                                     StartURL;                                                 // 0x08A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UCoherentCommonBinder*>               CommonBinders;                                            // 0x08B8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UAkComponent*                                AkSound;                                                  // 0x08C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class ACameraActor*                                Camera;                                                   // 0x08D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x08D8(0x0020) MISSED OFFSET
	class UClass*                                      LobbyCharacterMaleClass;                                  // 0x08F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LobbyCharacterFemaleClass;                                // 0x0900(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0908(0x0050) MISSED OFFSET
	struct FViewTargetTransitionParams                 ViewTargetTransitionParams;                               // 0x0958(0x0010) (CPF_Edit)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0968(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyHUD");
		return ptr;
	}


	void SetWidgetForBinding(int ViewIndex, class UCoherentUIGTWidget* Widget);
	struct FString GetStartUrl();
	void ClearAllWidget();
};


// Class TslGame.TslEntryPlayerController
// 0x0000 (0x06C0 - 0x06C0)
class ATslEntryPlayerController : public ATslBasePlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslEntryPlayerController");
		return ptr;
	}

};


// Class TslGame.PerfBotPlayerController
// 0x0060 (0x09B8 - 0x0958)
class APerfBotPlayerController : public ATslPlayerController
{
public:
	int                                                AmmoClips;                                                // 0x0958(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	class UClass*                                      WeaponType;                                               // 0x0960(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0968(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.PerfBotPlayerController");
		return ptr;
	}


	void ServerMoveToLocation(const class Vector3D& Location);
	void ClientQuit();
};


// Class TslGame.TslDemoSpectator
// 0x0028 (0x0980 - 0x0958)
class ATslDemoSpectator : public ATslPlayerController
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0958(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDemoSpectator");
		return ptr;
	}

};


// Class TslGame.TslPlayerController_Menu
// 0x0000 (0x0958 - 0x0958)
class ATslPlayerController_Menu : public ATslPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerController_Menu");
		return ptr;
	}

};


// Class TslGame.CharacterBreathBuff
// 0x0008 (0x03F8 - 0x03F0)
class ACharacterBreathBuff : public ATslBuff
{
public:
	float                                              BreathPerTick;                                            // 0x03F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterBreathBuff");
		return ptr;
	}


	class ATslCharacter* GetCharacter();
	class UCharacterBreathComponent* GetBreathComponent();
};


// Class TslGame.TslBuoyancyForceComponent
// 0x0000 (0x03A0 - 0x03A0)
class UTslBuoyancyForceComponent : public UBuoyancyForceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBuoyancyForceComponent");
		return ptr;
	}

};


// Class TslGame.TslCameraComponent
// 0x0000 (0x0840 - 0x0840)
class UTslCameraComponent : public UCameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCameraComponent");
		return ptr;
	}

};


// Class TslGame.TslCharacterMovement
// 0x0100 (0x0850 - 0x0750)
class UTslCharacterMovement : public UCharacterMovementComponent
{
public:
	float                                              MaxProneSpeed;                                            // 0x0750(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxGroggySpeed;                                           // 0x0754(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpedHalfHeight;                                         // 0x0758(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedToJumpModifier;                                      // 0x075C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinJumpZVelocity;                                         // 0x0760(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxJumpZVelocity;                                         // 0x0764(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingJumpDecreaseModifier;                              // 0x0768(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoveryWalkSpeedRatePerSec;                              // 0x076C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWalkSpeedModifier;                                     // 0x0770(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkSpeedModifierUnit;                                    // 0x0774(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinStandingJumpXYSpeed;                                   // 0x0778(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedInWaterModifier;                                     // 0x077C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0780(0x0038) MISSED OFFSET
	float                                              MaxSwimAcceleration;                                      // 0x07B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxZSpeedOutOfWaterModifier;                              // 0x07BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      MaxSwimmingRotationRate;                                  // 0x07C0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      SwimmingRotationAcceleration;                             // 0x07CC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxUnderwaterSwimSpeed;                                   // 0x07D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxUnderwaterSwimAcceleration;                            // 0x07DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BrakingDecelerationUnderwaterSwimming;                    // 0x07E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      MaxUnderwaterSwimmingRotationRate;                        // 0x07E4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      UnderwaterSwimmingRotationAcceleration;                   // 0x07F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumHighAltitude;                                      // 0x07FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0800(0x0004) MISSED OFFSET
	float                                              MaxFallLateralSpeedAtHighAltitude;                        // 0x0804(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TerminalVelocityAtHighAltitude;                           // 0x0808(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecreaseTerminalVelocityAtHighAltitude;                   // 0x080C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFallAccelerationAtHighAltitude;                        // 0x0810(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      FallRotationRateAtHighAltitude;                           // 0x0814(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControlAtHighAltitude;                                 // 0x0820(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControlBoostMultiplierAtHighAltitude;                  // 0x0824(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControlBoostVelocityThresholdAtHighAltitude;           // 0x0828(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x082C(0x0004) MISSED OFFSET
	class UClass*                                      FallingDamageType;                                        // 0x0830(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 EjectDamageCurve;                                         // 0x0838(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallingDamageMinZCut;                                     // 0x0840(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallingDamageVDampingZ;                                   // 0x0844(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallingDamageFactor;                                      // 0x0848(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterMovement");
		return ptr;
	}

};


// Class TslGame.TslCharacterProxy
// 0x0030 (0x07E0 - 0x07B0)
class ATslCharacterProxy : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B0(0x0008) MISSED OFFSET
	TArray<class UWeaponClone*>                        ArmedWeapons;                                             // 0x07B8(0x0010) (CPF_ZeroConstructor)
	class UWeaponAnimInfoComponent*                    WeaponAnimInfoComponent;                                  // 0x07C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              WeaponUpdateIntervalSeconds;                              // 0x07D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x07D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterProxy");
		return ptr;
	}


	void UpdateEquippedWeapons();
	void UpdateCharacterAppearance();
	void UpdateArmedWeapons();
	void SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent, TEnumAsByte<EAccessorySlot> Slot);
	class UTslAccessoryComponent* GetAccessorySlot(TEnumAsByte<EAccessorySlot> Slot);
};


// Class TslGame.TslCharacterSpringArmComponent
// 0x00D0 (0x0460 - 0x0390)
class UTslCharacterSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0390(0x0004) MISSED OFFSET
	class Vector3D                                     DefaultSocketOffset;                                      // 0x0394(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     IndoorSocketOffset;                                       // 0x03A0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LeanLeftDefaultSocketOffsetAddition;                      // 0x03AC(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LeanRightDefaultSocketOffsetAddition;                     // 0x03B8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LeftShoulderAimingSocketOffset;                           // 0x03C4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     RightShoulderAimingSocketOffset;                          // 0x03D0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LeanLeftAimedSocketOffsetAddition;                        // 0x03DC(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LeanRightAimedSocketOffsetAddition;                       // 0x03E8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     SprintSocketOffsetAddition;                               // 0x03F4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchSocketOffsetZAddition;                              // 0x0400(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchSocketOffsetMovementZAddition;                      // 0x0404(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneScoketOffsetZAddition;                               // 0x0408(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SocketOffsetInterpSpeed;                                  // 0x040C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     DefaultTargetOffset;                                      // 0x0410(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     IndoorTargetOffset;                                       // 0x041C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     AimingTargetOffset;                                       // 0x0428(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetOffsetInterpSpeed;                                  // 0x0434(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultSpringArmLength;                                   // 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndoorSpringArmLength;                                    // 0x043C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimingSpringArmLength;                                    // 0x0440(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringArmLengthInterpSpeed;                               // 0x0444(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimingSpringArmLengthInterpSpeed;                         // 0x0448(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	float                                              SpringArmRestoreInterpSpeed;                              // 0x0450(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0454(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterSpringArmComponent");
		return ptr;
	}

};


// Class TslGame.TslChatWidgetStyle
// 0x0988 (0x09B8 - 0x0030)
class UTslChatWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslChatStyle                               ChatStyle;                                                // 0x0030(0x0988) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslChatWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslCheatManager
// 0x0010 (0x0088 - 0x0078)
class UTslCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCheatManager");
		return ptr;
	}


	void ToggleVisibilityOfDestructibleComponents();
	void ToggleMatchTimer();
	void ToggleCollisionOfDestructibleComponents();
	void TestVoiceAccessToken();
	void SpawnBot();
	void SetVehicleRepRotCorrection(float AngularDeltaThreshold, float AngularInterpAlpha, float AngularRecipFixTime);
	void SetVehicleRepPosCorrection(float LinearDeltaThresholdSq, float LinearInterpAlpha, float LinearRecipFixTime, float BodySpeedThresholdSq);
	void SetClientConnectionTimeout(float TimeoutSeconds);
	void ReturnLookAt();
	void MoveVehicleOnClient(float X, float Y, float Z);
	void LookAt(float Pitch, float Yaw, float Roll);
	void InsertCrashMeCommand();
	void ForceMatchStart();
	void DumpVoiceDevices();
	void DumpReplicatedItems();
	void DumpDestructibleComponents();
	void DrawVehicleCenterOfMass();
	void DelayCrash(float DelaySeconds);
	void CtrlShortCutOnOff(bool OnOff);
	void CopyDebugInfo();
	void Cheat(const struct FString& Msg);
	void ChangeTeam(int NewTeamNumber);
};


// Class TslGame.TslCoherentWidget
// 0x0010 (0x0470 - 0x0460)
class UTslCoherentWidget : public UCoherentUIGTWidget
{
public:
	class UCoherentWidgetBinder*                       WidgetBinder;                                             // 0x0460(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCoherentWidget");
		return ptr;
	}


	void GoBack();
};


// Class TslGame.TslConsole
// 0x0008 (0x0138 - 0x0130)
class UTslConsole : public UConsole
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslConsole");
		return ptr;
	}

};


// Class TslGame.TslConsoleSetting
// 0x0090 (0x0100 - 0x0070)
class UTslConsoleSetting : public UConsoleSettings
{
public:
	TArray<struct FString>                             AutoCompleteItemPaths;                                    // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteItemKinds;                                    // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteVehiclePaths;                                 // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteMaleBody;                                     // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteMaleHair;                                     // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteMaleFace;                                     // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteFemaleBody;                                   // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteFemaleHair;                                   // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteFemaleFace;                                   // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslConsoleSetting");
		return ptr;
	}

};


// Class TslGame.TslCustomizableSkeletalComponent
// 0x0000 (0x03C0 - 0x03C0)
class UTslCustomizableSkeletalComponent : public UCustomizableSkeletalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCustomizableSkeletalComponent");
		return ptr;
	}

};


// Class TslGame.TslDamageField
// 0x0038 (0x03C8 - 0x0390)
class ATslDamageField : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0390(0x0004) MISSED OFFSET
	float                                              DamageRadius;                                             // 0x0394(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             DamageFieldFX;                                            // 0x0398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Damage;                                                   // 0x03A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageInterval;                                           // 0x03A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
	class UClass*                                      DebuffTemplate;                                           // 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDamageField");
		return ptr;
	}

};


// Class TslGame.TslDamageFieldContainer
// 0x0040 (0x03D0 - 0x0390)
class ATslDamageFieldContainer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	TArray<struct FDamageFieldLayout>                  DamageFieldLayouts;                                       // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET
	class UClass*                                      DamageFieldTemplate;                                      // 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      FlameInWall : 1;                                          // 0x03B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	int                                                FlameMaxCountInWall;                                      // 0x03BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FlameDelayInWall;                                         // 0x03C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x03C4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDamageFieldContainer");
		return ptr;
	}

};


// Class TslGame.TslDestructibleComponent
// 0x0000 (0x09B0 - 0x09B0)
class UTslDestructibleComponent : public UDestructibleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDestructibleComponent");
		return ptr;
	}


	void ClientReceiveComponentDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslDestructibleContainer
// 0x0008 (0x0398 - 0x0390)
class ATslDestructibleContainer : public AActor
{
public:
	unsigned char                                      bFlag : 1;                                                // 0x0390(0x0001) (CPF_Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDestructibleContainer");
		return ptr;
	}


	void OnRep_Flag();
};


// Class TslGame.TslDoor
// 0x0290 (0x0630 - 0x03A0)
class ATslDoor : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                        DoorMeshComponent;                                        // 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkSound;                                                  // 0x03A8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInteractionComponent*                       Interaction;                                              // 0x03B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03B8(0x0020) MISSED OFFSET
	class UDestructibleMesh*                           DoorDestructibleMesh;                                     // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoorOpened : 1;                                          // 0x03E0(0x0001) (CPF_Net)
	unsigned char                                      bReverseRotation : 1;                                     // 0x03E0(0x0001) (CPF_Net)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	float                                              OpenAngle;                                                // 0x03E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OpenSound;                                                // 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CloseSound;                                               // 0x03F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 OpenCurve;                                                // 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OpenCurveDuration;                                        // 0x0400(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CloseCurve;                                               // 0x0408(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseCurveDuration;                                       // 0x0410(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageImpulse;                                       // 0x0414(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageRadius;                                        // 0x0418(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingRadius;                                           // 0x041C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingImpulse;                                          // 0x0420(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingMinDamage;                                        // 0x0424(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x0428(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	struct FName                                       TopImpactSoketName;                                       // 0x0430(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CenterImpactSoketName;                                    // 0x0438(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BottomImpactSoketName;                                    // 0x0440(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1C8];                                     // 0x0448(0x01C8) MISSED OFFSET
	struct FDoorBreakingStateLegacy                    DoorBreakingState;                                        // 0x0610(0x0001) (CPF_Net)
	unsigned char                                      UnknownData05[0x1F];                                      // 0x0611(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDoor");
		return ptr;
	}


	void OnRep_DoorOpened();
	void OnRep_DoorBreakingState();
	void OnInteractBy(class ATslCharacter* OtherCharacter);
	void ClientTakeDamage(float Damage, const class Vector3D& HitLocation, float DamageRadius, float Impulse);
};


// Class TslGame.TslEngine
// 0x0000 (0x0D00 - 0x0D00)
class UTslEngine : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslEngine");
		return ptr;
	}

};


// Class TslGame.TslEntryGameMode
// 0x0000 (0x0460 - 0x0460)
class ATslEntryGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslEntryGameMode");
		return ptr;
	}

};


// Class TslGame.TslExplosionEffect
// 0x0228 (0x05B8 - 0x0390)
class ATslExplosionEffect : public AActor
{
public:
	class UParticleSystem*                             ExplosionFX;                                              // 0x0390(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPointLightComponent*                        ExplosionLight;                                           // 0x0398(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ExplosionLightFadeOut;                                    // 0x03A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               ExplosionSound;                                           // 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDecalEffectDataSet                         DecalEffectDataSet;                                       // 0x03B0(0x0168) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              DecalSpawnDelayTime;                                      // 0x0518(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	struct FHitResult                                  SurfaceHit;                                               // 0x0520(0x0088) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x05A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslExplosionEffect");
		return ptr;
	}


	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const class Vector3D& Location, const class Vector3D& Velocity, const class Vector3D& Direction, const class Vector3D& Normal, const struct FName& BoneName);
};


// Class TslGame.TslExplosionReactionInterface
// 0x0000 (0x0028 - 0x0028)
class UTslExplosionReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslExplosionReactionInterface");
		return ptr;
	}


	void OnExplode(float DamageAmout, const class Vector3D& Origin, TArray<struct FHitResult> ComponentHits, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslFence
// 0x0098 (0x0428 - 0x0390)
class ATslFence : public AActor
{
public:
	class USplineComponent*                            SplineComponent;                                          // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TEnumAsByte<ETslFenceSelector>                     BeginSelector;                                            // 0x0398(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class UStaticMesh*                                 BeginMesh1;                                               // 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 BeginMesh2;                                               // 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 BeginMesh3;                                               // 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 BeginMesh4;                                               // 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETslFenceSelector>                     EndSelector;                                              // 0x03C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UStaticMesh*                                 EndMesh1;                                                 // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndMesh2;                                                 // 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndMesh3;                                                 // 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndMesh4;                                                 // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseRandomForMiddle : 1;                                  // 0x03E8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	float                                              UnitLengthForMiddle;                                      // 0x03EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UnitSpacingForMiddle;                                     // 0x03F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PivotOffsetForMiddle;                                     // 0x03F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandomStream                               RandomStreamForMiddle;                                    // 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor)
	class UStaticMesh*                                 MiddleMesh1;                                              // 0x0400(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh2;                                              // 0x0408(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh3;                                              // 0x0410(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh4;                                              // 0x0418(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCollisionProfileName                       FenceCollisionProfile;                                    // 0x0420(0x0008) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFence");
		return ptr;
	}


	class USplineComponent* GetSplineComponent();
};


// Class TslGame.TslReactionData
// 0x0040 (0x0068 - 0x0028)
class UTslReactionData : public UDataAsset
{
public:
	float                                              DestroyDelay;                                             // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVehicleReactionData                        VehicleReactionData;                                      // 0x002C(0x000C) (CPF_Edit)
	struct FRadialDamageReactionData                   RadialDamageReactionData;                                 // 0x0038(0x000C) (CPF_Edit)
	struct FPointDamageReactionData                    PointDamageReactionData;                                  // 0x0044(0x0010) (CPF_Edit)
	int                                                DependancyCountBySibling;                                 // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               PhysicsReactionSoundAk;                                   // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DestructibleReactionSoundAk;                              // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionData");
		return ptr;
	}

};


// Class TslGame.TslReactionComponent
// 0x0040 (0x0840 - 0x0800)
class UTslReactionComponent : public UStaticMeshComponent
{
public:
	class UTslReactionData*                            ReactionData;                                             // 0x0800(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           ReactionDM;                                               // 0x0808(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0810(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionComponent");
		return ptr;
	}


	void OnRep_PendingDestroy();
	void Client_ReactByVehicle(const class Vector3D& Impact, const class Vector3D& ImpulseDir, const class Vector3D& Velocity);
	void Client_ReactByRadialDamage(float DamageAmount, const class Vector3D& Origin, const class Vector3D& Impact, const class Vector3D& ImpulseDir, float OuterRadius);
	void Client_ReactByPointDamage(float DamageAmount, const class Vector3D& Impact, const class Vector3D& ImpulseDir);
};


// Class TslGame.TslBreakableFence
// 0x0068 (0x0490 - 0x0428)
class ATslBreakableFence : public ATslFence
{
public:
	class UTslReactionData*                            ReactionData;                                             // 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible1;                                        // 0x0430(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible2;                                        // 0x0438(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible3;                                        // 0x0440(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible4;                                        // 0x0448(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible1;                                          // 0x0450(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible2;                                          // 0x0458(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible3;                                          // 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible4;                                          // 0x0468(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible1;                                       // 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible2;                                       // 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible3;                                       // 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible4;                                       // 0x0488(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBreakableFence");
		return ptr;
	}

};


// Class TslGame.TslStaticFence
// 0x0000 (0x0428 - 0x0428)
class ATslStaticFence : public ATslFence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStaticFence");
		return ptr;
	}

};


// Class TslGame.TslFocusableWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UTslFocusableWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFocusableWidgetInterface");
		return ptr;
	}


	bool Up();
	bool SetFocus(bool NewFocus);
	bool Right();
	bool Left();
	bool IsFocusable();
	bool IsFocus();
	bool InputY();
	bool InputX();
	bool InputRT();
	bool InputRB();
	bool InputLT();
	bool InputLB();
	bool InputB();
	bool InputA();
	class UUserWidget* GetUpWidget();
	class UUserWidget* GetRightWidget();
	class UUserWidget* GetLeftWidget();
	class UUserWidget* GetFocusingChildWidget();
	class UUserWidget* GetDownWidget();
	bool Down();
};


// Class TslGame.TslGame_Menu
// 0x0000 (0x0460 - 0x0460)
class ATslGame_Menu : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGame_Menu");
		return ptr;
	}

};


// Class TslGame.TslSettings
// 0x02A0 (0x02C8 - 0x0028)
class UTslSettings : public UObject
{
public:
	float                                              RepDistance_Item;                                         // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Character;                                    // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Weapon;                                       // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Vehicle;                                      // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Parachute;                                    // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Door;                                         // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Window;                                       // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_Character;                                   // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_WheeledVehicle;                              // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_FloatingVehicle;                             // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_Parachute;                                   // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_Aircraft;                                    // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_CarePackage;                                 // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepVehicle_SpawnDistance;                                 // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepVehicle_UnspawnDistance;                               // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FRigidBodyErrorCorrection                   RepVehicle_PhysicErrorCorrection;                         // 0x0064(0x001C) (CPF_Edit, CPF_Config)
	unsigned char                                      bBattlEyeEnabled : 1;                                     // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bBattlEyeEnabledInPIE : 1;                                // 0x0081(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              BattlEyeReliablePacketIntervalOnClient;                   // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BattlEyeReliablePacketIntervalOnServer;                   // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GameStateLogInterval;                                     // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ServerStatLogInterval;                                    // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CharacterPositionLogInterval;                             // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DestructibleComponentMaxDrawDistance;                     // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UClass*                                      CharacterClassToPlay;                                     // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FBoneBinding>                        BoneMapping;                                              // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<class UClass*>                              TestVehicleClasses;                                       // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<class UClass*>                              TestFloatingVehicleClasses;                               // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              StoppedWheeledVehicleSpeedThreshold;                      // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              StoppedFloatingVehicleSpeedThreshold;                     // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              LastDriverDuration;                                       // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InteractableDistanceToleranceOnDedicatedServer;           // 0x00E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InteractableDistance_ItemDefault;                         // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InteractableSpeed_ItemDefault;                            // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FInteractionCollisionData                   InteractionCollisionForFPS;                               // 0x00F0(0x0014) (CPF_Edit, CPF_Config)
	struct FInteractionCollisionData                   InteractionCollisionForTPS;                               // 0x0104(0x0014) (CPF_Edit, CPF_Config)
	unsigned char                                      bPreventFinishMatchInPIE : 1;                             // 0x0118(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnableInitialItemDonator : 1;                            // 0x0119(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	float                                              InventoryMaxSpaceDefault;                                 // 0x011C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class UTexture*                                    ErrorIconTexture;                                         // 0x0120(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    LoadingIconTexture;                                       // 0x0128(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UObject*>                             AssetsForPackageIntegrity;                                // 0x0130(0x0010) (CPF_ZeroConstructor)
	float                                              UICrosshairDistance;                                      // 0x0140(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              UICrosshairInterpSpeed;                                   // 0x0144(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              UICrosshairDisableDistance;                               // 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GameTimeMultiplier;                                       // 0x014C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      AimOffsetRayCast : 1;                                     // 0x0150(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              MeleeWeaponPitchMin;                                      // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MeleeWeaponPitchMax;                                      // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      FullRecoilRecovery : 1;                                   // 0x015C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	struct FLevelLoadingBoostParameters                LevelLoadingBoostParameters;                              // 0x0160(0x0010) (CPF_Edit, CPF_Config)
	TArray<struct FNearClippingValue>                  NearClippingValues;                                       // 0x0170(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FTslGame_FCustomizableCategoryData>  CustomizableCategoryData;                                 // 0x0180(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomizableActionName>             CustomizableActionNames;                                  // 0x0190(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FTslGame_FCustomizableAxisName>      CustomizableAxisNames;                                    // 0x01A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomizableMouseSensitiveName>     CustomizableMouseSensitiveNames;                          // 0x01B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FSurportQualityLevel>                SupportedQualityLevels;                                   // 0x01C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FScreenResolution>                   SupportedScreenResolutions;                               // 0x01D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       MouseSensitivityCurve;                                    // 0x01E0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       GammaCurve;                                               // 0x01F0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             CultureNames;                                             // 0x0200(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FColorBlindType>                     ColorBlindTypes;                                          // 0x0210(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FUiType>                             MiniMapTypeList;                                          // 0x0220(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              MinimumScreenResolutionRatio;                             // 0x0230(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FScreenResolution                           MinimumScreenResolution;                                  // 0x0234(0x0008) (CPF_Edit, CPF_Config)
	float                                              ClientSideHitLeeway;                                      // 0x023C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ClientSideOriginDistanceLeeway;                           // 0x0240(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              TravelDistanceLeeway;                                     // 0x0244(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              AllowedHitLag;                                            // 0x0248(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              LogMinHitLag;                                             // 0x024C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FOverrideScalability>                OverrideScalabilities;                                    // 0x0250(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              FakeDoorBlockMaxY;                                        // 0x0260(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x54];                                      // 0x0264(0x0054) MISSED OFFSET
	class UCurveFloat*                                 LoadedMouseSensitivityCurve;                              // 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCurveFloat*                                 LoadedGammaCurve;                                         // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSettings");
		return ptr;
	}


	class UTslSettings* STATIC_GetTslSettings();
};


// Class TslGame.TslGameInstance
// 0x0350 (0x0440 - 0x00F0)
class UTslGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	unsigned char                                      bUseLobbyWidget : 1;                                      // 0x00F8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	int                                                LobbyWidgetZOrder;                                        // 0x00FC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class ULobbyLink*                                  LobbyLink;                                                // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UVivoxManager*                               VivoxManager;                                             // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FTslStartParameter                          StartParamter;                                            // 0x0110(0x0068)
	unsigned char                                      UnknownData02[0x180];                                     // 0x0178(0x0180) MISSED OFFSET
	class UClass*                                      LobbyWidgetClass;                                         // 0x02F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x120];                                     // 0x0300(0x0120) MISSED OFFSET
	class ULobbyWidget*                                LobbyWidget;                                              // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameInstance");
		return ptr;
	}


	bool UseLobbyWidget();
	bool UnPause();
	bool Pause();
	bool IsReplaying();
	bool IsRecording();
	struct FString GetStartParameterStringValue(const struct FString& Key, const struct FString& NotFoundValue);
	struct FTslStartParameter GetStartParameter();
	struct FName GetCurrentGameState();
};


// Class TslGame.TslGameMode
// 0x02E8 (0x0748 - 0x0460)
class ATslGameMode : public AGameMode
{
public:
	class UClass*                                      MalePawnClass;                                            // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PerfBotPlayerControllerClass;                             // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData)
	class UClass*                                      ModeControllerClass;                                      // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData)
	TArray<class UClass*>                              AdditionalModeControllerClasses;                          // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear)
	class UClass*                                      InitialItemDonatorClass;                                  // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FMatchPreparerClass>                 MatchPreparerClasses;                                     // 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TEnumAsByte<EMatchStartType>                       MatchStartType;                                           // 0x04A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<ECameraViewBehaviour>                  CameraViewBehaviour;                                      // 0x04A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      PlayerRespawn : 1;                                        // 0x04A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04A3(0x0001) MISSED OFFSET
	int                                                PostMatchWaitingTime;                                     // 0x04A4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                ServerQuitAfterLeavingMapTime;                            // 0x04A8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MinPlayers;                                               // 0x04AC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PlayerSpawnTryMaxCount;                                   // 0x04B0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnablePerfBotInPIE : 1;                                  // 0x04B4(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnablePerfBotLogin : 1;                                  // 0x04B5(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsPerfBotSpawnToRandomPosition : 1;                      // 0x04B6(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bCanRestartPerfBot : 1;                                   // 0x04B7(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnableObserverInPIE : 1;                                 // 0x04B8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      IsBattleRoyale : 1;                                       // 0x04B9(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bStartPlayerAtMatchStart : 1;                             // 0x04BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldSpawnAtStartSpot : 1;                              // 0x04BB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04BC(0x0001) MISSED OFFSET
	unsigned char                                      bCanAllSpectate : 1;                                      // 0x04BD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04BE(0x0002) MISSED OFFSET
	struct FCustomGameUpdateCharacterInfo              CustomGameUpdateCharacterInfo;                            // 0x04C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Config)
	float                                              MultiplierBlueZone;                                       // 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MultiplierCarePackage;                                    // 0x04D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MultiplierRedZone;                                        // 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                WarmupTime;                                               // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                EditorTestTeamMemberCount;                                // 0x04E0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	TMap<struct FString, class URewardData*>           RewardDataMap;                                            // 0x04E8(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	class URewardData*                                 RewardData;                                               // 0x0538(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             WinnerPlayerState;                                        // 0x0540(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                WinnerTeam;                                               // 0x0548(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	class UClass*                                      ItemSpawnProcessorClass;                                  // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ThingSpawnProcessorClass;                                 // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      BasicBeltItemClassForNoBelt;                              // 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0568(0x0008) MISSED OFFSET
	class UItemSpawnProcessor*                         ItemSpawnProcessor;                                       // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UThingSpawnProcessor*                        ThingSpawnProcessor;                                      // 0x0578(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UGeneralItemSpawner*                         InitialItemDonator;                                       // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMatchPreparer*                              MatchPreparer;                                            // 0x0588(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AModeController*                             ModeController;                                           // 0x0590(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ADroppedItemGridManager*                     DroppedItemGridManager;                                   // 0x0598(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class AModeController*>                     AdditinalModeControllers;                                 // 0x05A0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData06[0x90];                                      // 0x05B0(0x0090) MISSED OFFSET
	TMap<struct FString, class APlayerState*>          JoinedUserPlayerStateMap;                                 // 0x0640(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FTeams>                              Teams;                                                    // 0x0690(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData07[0xA8];                                      // 0x06A0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameMode");
		return ptr;
	}


	void SendSystemMessageToAll(TEnumAsByte<ESystemMessageType> MessageType, const struct FText& Message, float MessageDuration);
	void NotifyRestrictingPlayAreaToAll();
	void NotifyNextGasInToAll(const class Vector3D& PoisonGasWarningPosition, float PoisonGasWarningRadius);
	bool IsPreventFinishMatch();
	bool IsPlayInEditor();
	class UVivoxManager* GetVivoxManager();
	class UThingSpawnProcessor* GetThingSpawnProcessor();
	class ULobbyLink* GetLobbyLink();
	class UItemSpawnProcessor* GetItemSpawnProcessor();
	void GetAllPawns(TArray<class APawn*>* OutPawns);
	void FinishMatch();
	class ATslCharacter* FindCharacterByPlayerState(class APlayerState* State);
	bool CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer);
	void BroadcastGameModeEvent(const struct FName& EventName, const struct FString& Parameter);
	void BenchmarkFinished();
};


// Class TslGame.TslGameOption
// 0x0000 (0x0028 - 0x0028)
class UTslGameOption : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameOption");
		return ptr;
	}


	void STATIC_SetVoiceOutputMute(bool bIsMute);
	void STATIC_SetVoiceInputMute(bool bIsMute);
	void STATIC_SetUseTeamVoice(bool bUse);
	void STATIC_SetUsePushToTalk(bool bUse);
	void STATIC_SetUseGlobalVoice(bool bUse);
	void STATIC_SetUISoundVolume(float Volume);
	void STATIC_SetUISoundMute(bool bIsMute);
	void STATIC_SetSelectMinimapTypeIndex(int Index);
	void STATIC_SetScreenScale(float Value);
	void STATIC_SetScreenResoultion(const struct FScreenResolution& ScreenResolution);
	void STATIC_SetQualityLevel(TEnumAsByte<EQualityType> Quality, int QualityLevel);
	void STATIC_SetOverallScalabilityLevel(int Value);
	void STATIC_SetMouseSensitivity(const struct FName& InMouseSensitiveName, float InMouseSensitivity);
	void STATIC_SetMotionBlur(bool bEnabled);
	void STATIC_SetMasterSoundVolume(float Volume);
	void STATIC_SetMasterSoundMute(bool bIsMute);
	void STATIC_SetInvertMouse(bool bInvert);
	void STATIC_SetGamma(float Gamma);
	void STATIC_SetFullScreen(TEnumAsByte<EWindowMode> InFullscreenMode);
	void STATIC_SetEffectSoundVolume(float Volume);
	void STATIC_SetEffectSoundMute(bool bIsMute);
	void STATIC_SetCurrentCultureName(const struct FString& InCultureName);
	void STATIC_SetCurrentColorBlindKeyByInt(int ColorBlindKey);
	void STATIC_SetCurrentColorBlindKey(TEnumAsByte<EColorBlindType> ColorBlindKey);
	void STATIC_SetBGMSoundVolume(float Volume);
	void STATIC_SetBGMSoundMute(bool bIsMute);
	void STATIC_SetAxisKeys(const struct FName& AxisName, float Scale, bool bDefault, TArray<struct FTslInputKey> Keys);
	void STATIC_SetAxisKey(const struct FName& AxisName, float Scale, bool bGamepad, bool bDefault, const struct FTslInputKey& Key);
	void STATIC_SetActionKeys(const struct FName& ActionName, bool bDefault, TArray<struct FTslInputKey> Keys);
	void STATIC_SetActionKey(const struct FName& ActionName, bool bGamepad, bool bDefault, const struct FTslInputKey& Key);
	TArray<struct FName> STATIC_NotDuplicateCategoryNames(const struct FName& CatecoryName);
	bool STATIC_IsVoiceOutputMute();
	bool STATIC_IsVoiceInputMute();
	bool STATIC_IsUISoundMute();
	bool STATIC_IsModifierKey(const struct FTslInputKey& Key);
	bool STATIC_IsMasterSoundMute();
	bool STATIC_IsKeyValid(const struct FTslInputKey& Key);
	bool STATIC_IsKeyUsed(const struct FTslInputKey& Key);
	bool STATIC_IsInvertMouse();
	bool STATIC_IsGamepadKey(const struct FTslInputKey& Key);
	bool STATIC_IsEnabledMotionBlur();
	bool STATIC_IsEffectSoundMute();
	bool STATIC_IsBGMSoundMute();
	bool STATIC_GetUseTeamVoice();
	bool STATIC_GetUsePushToTalk();
	bool STATIC_GetUseGlobalVoice();
	float STATIC_GetUISoundVolume();
	TArray<struct FScreenResolution> STATIC_GetSupportedScreenResolutions();
	TArray<struct FSurportQualityLevel> STATIC_GetSupportedQualityLevels();
	int STATIC_GetSelectMiniMapTypeIndex();
	float STATIC_GetScreenScale();
	struct FScreenResolution STATIC_GetScreenResolution();
	int STATIC_GetQualityLevel(TEnumAsByte<EQualityType> Quality);
	int STATIC_GetOverallScalabilityLevel();
	struct FString STATIC_GetNativeLanguage(const struct FString& InCultureName);
	float STATIC_GetMouseSensitivity(const struct FName& InMouseSensitiveName);
	TArray<struct FUiType> STATIC_GetMiniMapTypes();
	float STATIC_GetMasterSoundVolume();
	struct FText STATIC_GetKeyName(const struct FTslInputKey& Key);
	float STATIC_GetGamma();
	TEnumAsByte<EWindowMode> STATIC_GetFullScreenMode();
	float STATIC_GetEffectSoundVolume();
	struct FString STATIC_GetDefaultCultureName();
	struct FString STATIC_GetCurrentCultureName();
	TEnumAsByte<EColorBlindType> STATIC_GetCurrentColorBlindKey();
	float STATIC_GetConvertedMouseSensitivity(const struct FName& InMouseSensitiveName);
	TArray<struct FColorBlindType> STATIC_GetColorBlindTypes();
	float STATIC_GetBGMSoundVolume();
	TArray<struct FTslInputKey> STATIC_GetAxisKeys(const struct FName& AxisName, float Scale, bool bDefault);
	struct FTslInputKey STATIC_GetAxisKey(const struct FName& AxisName, float Scale, bool bGamepad, bool bDefault);
	TArray<struct FQualityLevelInfo> STATIC_GetAutoQualityLevels(int WorkScale, float CPUMultiplier, float GPUMultiplier);
	TArray<struct FTslInputKey> STATIC_GetActionKeys(const struct FName& ActionName, bool bDefault);
	struct FTslInputKey STATIC_GetActionKey(const struct FName& ActionName, bool bGamepad, bool bDefault);
	TArray<struct FCustomizableMouseSensitiveName> STATIC_CustomizableMouseSensitiveNames();
	TArray<struct FTslGame_FCustomizableCategoryData> STATIC_CustomizableCategoryData();
	TArray<struct FTslGame_FCustomizableAxisName> STATIC_CustomizableAxisName();
	TArray<struct FCustomizableActionName> STATIC_CustomizableActionNames();
	TArray<struct FString> STATIC_CultureNames();
	void STATIC_ApplyMouseSensitivity();
	void STATIC_ApplyGameUserSettings(bool bCheckForCommandLineOverrides);
	void STATIC_ApplyAutoQualitySetting();
};


// Class TslGame.TslGameSession
// 0x0318 (0x06C0 - 0x03A8)
class ATslGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x318];                                     // 0x03A8(0x0318) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameSession");
		return ptr;
	}

};


// Class TslGame.TslGameState
// 0x00A0 (0x0490 - 0x03F0)
class ATslGameState : public AGameState
{
public:
	struct FString                                     MatchShortGuid;                                           // 0x03F0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	int                                                NumTeams;                                                 // 0x0400(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                RemainingTime;                                            // 0x0404(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bTimerPaused : 1;                                         // 0x0408(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	int                                                NumJoinPlayers;                                           // 0x040C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0410(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x0414(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x0418(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumStartTeams;                                            // 0x041C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     SafetyZonePosition;                                       // 0x0420(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SafetyZoneRadius;                                         // 0x042C(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     PoisonGasWarningPosition;                                 // 0x0430(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // 0x043C(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     RedZonePosition;                                          // 0x0440(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RedZoneRadius;                                            // 0x044C(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TotalReleaseDuration;                                     // 0x0450(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ElapsedReleaseDuration;                                   // 0x0454(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TotalWarningDuration;                                     // 0x0458(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ElapsedWarningDuration;                                   // 0x045C(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsGasRelease : 1;                                        // 0x0460(0x0001) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsTeamMatch : 1;                                         // 0x0461(0x0001) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0462(0x0002) MISSED OFFSET
	float                                              ElapsedGasReleaseDuration;                                // 0x0464(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     LerpSafetyZonePosition;                                   // 0x0468(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LerpSafetyZoneRadius;                                     // 0x0474(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     SafetyZoneBeginPosition;                                  // 0x0478(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SafetyZoneBeginRadius;                                    // 0x0484(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ALevelAttribute*                             LevelAttribute;                                           // 0x0488(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameState");
		return ptr;
	}


	void UpdateWorldTimeSecondsDelta(float DeltaSeconds);
	void ShowPlayerStateList();
	void OnStartGasRelease(bool InbIsGasRelease);
	void OnRep_MatchShortGuid();
	void OnRep_GasRelease(bool bLastIsGasRelease);
	bool IsMatchInProgressBP();
	class ALevelAttribute* GetLevelAttribute();
};


// Class TslGame.TslGameUserSettings
// 0x0090 (0x0190 - 0x0100)
class UTslGameUserSettings : public UGameUserSettings
{
public:
	float                                              ScreenScale;                                              // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              Gamma;                                                    // 0x0104(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsLanMatch : 1;                                          // 0x0108(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsMasterSoundMute : 1;                                   // 0x0109(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010A(0x0002) MISSED OFFSET
	float                                              MasterSoundVolume;                                        // 0x010C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsEffectSoundMute : 1;                                   // 0x0110(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	float                                              EffectSoundVolume;                                        // 0x0114(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsUISoundMute : 1;                                       // 0x0118(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              UISoundVolume;                                            // 0x011C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsBGMSoundMute : 1;                                      // 0x0120(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              BGMSoundVolume;                                           // 0x0124(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsVoiceInputMute : 1;                                    // 0x0128(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsVoiceOutputMute : 1;                                   // 0x0129(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUsePushToTalk : 1;                                       // 0x012A(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseGlobalVoice : 1;                                      // 0x012B(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseTeamVoice : 1;                                        // 0x012C(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bSavedGraphicOption : 1;                                  // 0x012D(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bMotionBlur : 1;                                          // 0x012E(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x012F(0x0001) MISSED OFFSET
	struct FString                                     CultureName;                                              // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FCustomInputSettings                        CustomInputSettins;                                       // 0x0140(0x0040) (CPF_Config)
	int                                                SelectMiniMapIndex;                                       // 0x0180(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseForceFeedback : 1;                                    // 0x0184(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	int                                                ColorBlindType;                                           // 0x0188(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameUserSettings");
		return ptr;
	}

};


// Class TslGame.TslGameViewportClient
// 0x0050 (0x04E0 - 0x0490)
class UTslGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0490(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameViewportClient");
		return ptr;
	}

};


// Class TslGame.TslGlassWindowComponent
// 0x0030 (0x0830 - 0x0800)
class UTslGlassWindowComponent : public UStaticMeshComponent
{
public:
	float                                              DestroyDelayAfterDestructed;                              // 0x0800(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0804(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DestructSound;                                            // 0x0808(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0810(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bReplicatedOnClient : 1;                                  // 0x0818(0x0001) (CPF_Net)
	unsigned char                                      bDestroyed : 1;                                           // 0x0818(0x0001) (CPF_Net)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0819(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGlassWindowComponent");
		return ptr;
	}


	void OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient);
	void OnRep_Destroyed(bool bLastDestroyed);
	void ClientNotifyHit(bool bBlockingHit, const class Vector3D& Location, const class Vector3D& ImpactNormal);
};


// Class TslGame.TslGunAnimInstance
// 0x00D8 (0x0570 - 0x0498)
class UTslGunAnimInstance : public UAnimInstance
{
public:
	struct FScriptMulticastDelegate                    WeaponFire;                                               // 0x0498(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponFireCycle;                                          // 0x04A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerOn;                                                // 0x04B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerOff;                                               // 0x04C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Reload1;                                                  // 0x04D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Reload2;                                                  // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStart;                                         // 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneSingle;                                        // 0x0508(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneEnd;                                           // 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponCharge;                                             // 0x0528(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FireSelect;                                               // 0x0538(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    CancelReload;                                             // 0x0548(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FName                                       Name_FireMode_Semi;                                       // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Name_FireMode_Burst;                                      // 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Name_FireMode_Fullauto;                                   // 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGunAnimInstance");
		return ptr;
	}


	void HandleFiremodeMontage(class UAnimMontage* FireModeMontage);
};


// Class TslGame.TslHealthGaugeData
// 0x0020 (0x0048 - 0x0028)
class UTslHealthGaugeData : public UDataAsset
{
public:
	TArray<struct FHealthColorData>                    HealthGaugeColors;                                        // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FFloatInterval                              WarningRage;                                              // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveLinearColor*                           GroggyColorCurve;                                         // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslHealthGaugeData");
		return ptr;
	}


	struct FLinearColor GetGaugeColor(float HealthPercent);
};


// Class TslGame.TslImpactEffect
// 0x0250 (0x05E0 - 0x0390)
class ATslImpactEffect : public AActor
{
public:
	class UParticleSystem*                             DefaultFX;                                                // 0x0390(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             ConcreteFX;                                               // 0x0398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             DirtFX;                                                   // 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             WaterFX;                                                  // 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             MetalFX;                                                  // 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             WoodFX;                                                   // 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             GlassFX;                                                  // 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             GrassFX;                                                  // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             FleshFX;                                                  // 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AkSound;                                                  // 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDecalEffectDataSet                         DecalEffectDataSet;                                       // 0x03E0(0x0168) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FHitResult                                  SurfaceHit;                                               // 0x0548(0x0088) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCom;                                              // 0x05D0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AKCom;                                                    // 0x05D8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslImpactEffect");
		return ptr;
	}

};


// Class TslGame.TslInstancedGlassWindowComponent
// 0x0100 (0x0AD0 - 0x09D0)
class UTslInstancedGlassWindowComponent : public UGridInstancedStaticMeshComponent
{
public:
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x09D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DestroyDelayAfterDestructed;                              // 0x09D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DestructSound;                                            // 0x09E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReplicatedOnClient : 1;                                  // 0x09E8(0x0001) (CPF_Net)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09E9(0x0007) MISSED OFFSET
	TArray<int>                                        DestroyedInstances;                                       // 0x09F0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0xD0];                                      // 0x0A00(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslInstancedGlassWindowComponent");
		return ptr;
	}


	void OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient);
	void OnRep_Destroyed();
	void ClientNotifyHit(bool bBlockingHit, const class Vector3D& Location, const class Vector3D& ImpactNormal, int InstanceIndex);
};


// Class TslGame.TslInstancedReactionComponent
// 0x01D0 (0x0BA0 - 0x09D0)
class UTslInstancedReactionComponent : public UGridInstancedStaticMeshComponent
{
public:
	TArray<int>                                        PendingDestroyInstances;                                  // 0x09D0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	class UTslReactionData*                            ReactionData;                                             // 0x09E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           ReactionDM;                                               // 0x09E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x09F0(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslInstancedReactionComponent");
		return ptr;
	}


	void OnRep_PendingDestroy();
	void Client_ReactByVehicle(int InstanceIndex, const class Vector3D& Impact, const class Vector3D& ImpulseDir, const class Vector3D& Velocity);
	void Client_ReactByRadialDamage(int InstanceIndex, float DamageAmount, const class Vector3D& Origin, const class Vector3D& Impact, const class Vector3D& ImpulseDir, float OuterRadius);
	void Client_ReactByPointDamage(int InstanceIndex, float DamageAmount, const class Vector3D& Impact, const class Vector3D& ImpulseDir);
};


// Class TslGame.TslPersistentUser
// 0x0030 (0x0058 - 0x0028)
class UTslPersistentUser : public USaveGame
{
public:
	float                                              Gamma;                                                    // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimSensitivity;                                           // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInvertedYAxis : 1;                                       // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ScreenScalePercentage;                                    // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPersistentUser");
		return ptr;
	}

};


// Class TslGame.TslLocalPlayer
// 0x0008 (0x0198 - 0x0190)
class UTslLocalPlayer : public ULocalPlayer
{
public:
	class UTslPersistentUser*                          PersistentUser;                                           // 0x0190(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslLocalPlayer");
		return ptr;
	}

};


// Class TslGame.TslMenuItemWidgetStyle
// 0x01B8 (0x01E8 - 0x0030)
class UTslMenuItemWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuItemStyle                           MenuItemStyle;                                            // 0x0030(0x01B8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMenuItemWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslMenuSoundsWidgetStyle
// 0x0038 (0x0068 - 0x0030)
class UTslMenuSoundsWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuSoundsStyle                         SoundsStyle;                                              // 0x0030(0x0038) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMenuSoundsWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslMenuWidgetStyle
// 0x0218 (0x0248 - 0x0030)
class UTslMenuWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuStyle                               MenuStyle;                                                // 0x0030(0x0218) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMenuWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslModularBuilding
// 0x00A0 (0x0430 - 0x0390)
class ATslModularBuilding : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0390(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslModularBuilding");
		return ptr;
	}

};


// Class TslGame.TslParticle
// 0x0058 (0x03E8 - 0x0390)
class ATslParticle : public AActor
{
public:
	unsigned char                                      bAutoDestroyOnParticleFinish : 1;                         // 0x0390(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutoPlaySound : 1;                                       // 0x0391(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	TArray<struct FParticleParameter>                  DefaultParameters;                                        // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TEnumAsByte<EAttachParent>                         AttachParentType;                                         // 0x03A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FName                                       AttachSocketName;                                         // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachmentRule>                       AttachLocationRule;                                       // 0x03B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachmentRule>                       AttachRotationRule;                                       // 0x03B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachmentRule>                       AttachScaleRule;                                          // 0x03BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x03BB(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkSound;                                                  // 0x03C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslParticle");
		return ptr;
	}


	void SetParticleParameter(const struct FString& Name, float Value, bool bEnableRTPC);
	void ReportSimpleEventCollision(const struct FName& InEventName, const class Vector3D& InLocation);
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const class Vector3D& Location, const class Vector3D& Velocity, const class Vector3D& Direction, const class Vector3D& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void OnParameterUpdated();
	float GetParticleParamter(const struct FString& Name, float DefaultValue);
	void ForceSpawn(int emitterIndex, const class Vector3D& InLocation);
	void AttachToParent();
};


// Class TslGame.TslParticleEnvironment
// 0x0020 (0x0408 - 0x03E8)
class ATslParticleEnvironment : public ATslParticle
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET
	float                                              AutoParticleActivateDistance;                             // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoPlayDistance;                                         // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0400(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslParticleEnvironment");
		return ptr;
	}

};


// Class TslGame.TslPassBluezoneArea
// 0x0010 (0x03A0 - 0x0390)
class ATslPassBluezoneArea : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                          // 0x0390(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPassBluezoneArea");
		return ptr;
	}

};


// Class TslGame.TslPhysicsVolume
// 0x0028 (0x0400 - 0x03D8)
class ATslPhysicsVolume : public APhysicsVolume
{
public:
	class AOceanManager*                               OceanManager;                                             // 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class UClass*                                      DefaultWaterSplash;                                       // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      VehicleWaterSplash;                                       // 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPhysicsVolume");
		return ptr;
	}

};


// Class TslGame.TslPlayerCameraManager
// 0x0030 (0x1A00 - 0x19D0)
class ATslPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x19D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerCameraManager");
		return ptr;
	}

};


// Class TslGame.TslPlayerState
// 0x01B8 (0x05D8 - 0x0420)
class ATslPlayerState : public APlayerState
{
public:
	int                                                Ranking;                                                  // 0x0420(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bKilled : 1;                                              // 0x0424(0x0001)
	unsigned char                                      bShowMapMarker : 1;                                       // 0x0425(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0426(0x0002) MISSED OFFSET
	class Vector2D                                     MapMarkerPosition;                                        // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EObserverAuthorityType>                ObserverAuthorityType;                                    // 0x0430(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                TeamNumber;                                               // 0x0434(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FTslPlayerScores                            PlayerScores;                                             // 0x0438(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FTslPlayerStatistics                        PlayerStatistics;                                         // 0x0444(0x0004) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData02[0xBC];                                      // 0x0448(0x00BC) MISSED OFFSET
	unsigned char                                      bQuitter : 1;                                             // 0x0504(0x0001)
	unsigned char                                      UnknownData03[0xD3];                                      // 0x0505(0x00D3) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerState");
		return ptr;
	}


	void OnRep_PlayerStatistics(const struct FTslPlayerStatistics& OldPlayerStatistics);
	bool IsQuitter();
	bool IsObserver();
	void InformAboutKill(class UDamageType* KillerDamageType, class ATslPlayerState* KilledPlayerState);
	int GetTeamNum();
	struct FString GetShortPlayerName();
	struct FTslPlayerScores GetPlayerScores();
	float GetPing();
	TEnumAsByte<EObserverAuthorityType> GetObserverAuthorityType();
	int GetKills();
	void BroadcastDeath(class ATslPlayerState* KillerPlayerState, class ATslPlayerState* GroggyPlayerInstigator, class UDamageType* KillerDamageType, TEnumAsByte<EDamageReason> DamageReason, const struct FText& DamageCauserName, int AlivePlayerNum, int AliveTeamNum, bool InbIsStealKilled);
};


// Class TslGame.TslPostProcessEffect
// 0x0048 (0x03D8 - 0x0390)
class ATslPostProcessEffect : public AActor
{
public:
	TArray<struct FPostProcessMaterial>                PostProcessMaterials;                                     // 0x0390(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FPostProcessEffectParameter>         DefaultPostProcessEffectParameter;                        // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FPostProcessEffectDynamicMaterialState> PostProcessEffectDynamicMaterialStates;                   // 0x03B0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPostProcessEffect");
		return ptr;
	}


	bool SetMaterialVectorParameter(int idx, const struct FName& ParameterName, const struct FLinearColor& Value);
	bool SetMaterialParameter(int idx, const struct FName& ParameterName, float Value);
	bool SetMaterialBlendWeight(int idx, float Value);
	bool SetEffectParameter(const struct FString& ParameterName, float Value);
	float GetEffectParameter(const struct FString& ParameterName, float DefaultValue);
};


// Class TslGame.TslWeapon_Projectile
// 0x0008 (0x09B8 - 0x09B0)
class ATslWeapon_Projectile : public ATslWeapon_Gun
{
public:
	struct FProjectileWeaponData                       ProjectileConfig;                                         // 0x09B0(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Projectile");
		return ptr;
	}


	void ServerFireProjectile(const class Vector3D& Origin, const class Vector3D& ShootDir);
};


// Class TslGame.TslProjectile
// 0x0128 (0x04B8 - 0x0390)
class ATslProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	class UProjectileMovementComponent*                MovementComp;                                             // 0x0398(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                            // 0x03A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComp;                                             // 0x03A8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeshComp;                                                 // 0x03B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPhysicsConstraintComponent*                 MeshConstraint;                                           // 0x03B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class Vector3D                                     MeshInitialRotationRate;                                  // 0x03C0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSyncServerAndClientRotation : 1;                         // 0x03CC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x03CD(0x000F) MISSED OFFSET
	unsigned char                                      HideMeshAtExplosion : 1;                                  // 0x03DC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ExplosionInWater : 1;                                     // 0x03DD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EProjectileExplosionRotationType>      ExplosionRotationType;                                    // 0x03DE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x03DF(0x0001) MISSED OFFSET
	struct FName                                       ParticleToMeshAttachPointName;                            // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	class UClass*                                      ExplosionTemplate;                                        // 0x03F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ExplosionTemplateInAir;                                   // 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ExplosionTemplateInWater;                                 // 0x0400(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ImpactSound;                                              // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkComponent*                                AkComp;                                                   // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	TEnumAsByte<EProjectileExplodeState>               ExplodeState;                                             // 0x0420(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bActiveParticle : 1;                                      // 0x0421(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bDoTick : 1;                                              // 0x0421(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0422(0x0002) MISSED OFFSET
	class Rotator                                      ClientMeshRotation;                                       // 0x0424(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      ServerMeshRotation;                                       // 0x0430(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              VelocityStopStepDistance;                                 // 0x043C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LastStepLocation;                                         // 0x0440(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StepBuffer;                                               // 0x044C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalInterpSpeed;                                         // 0x0450(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bConstantInterpStep : 1;                                  // 0x0454(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	float                                              VelocityCheckTimerTick;                                   // 0x0458(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FProjectileData                             ProjectileConfig;                                         // 0x0460(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData08[0x30];                                      // 0x0488(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslProjectile");
		return ptr;
	}


	void SetMeshRotationFromServer();
	void OnRep_Exploded();
	void OnRep_ClientActivate();
	void OnRep_ActiveParticle();
	void OnImpact(const struct FHitResult& ImpactResult, const class Vector3D& ImpactVelocity);
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void ExplodeBP(const class Vector3D& Location, const class Rotator& Rotation, const struct FHitResult& Impact, float Radius);
	void CheckVelocityForStart();
};


// Class TslGame.TslProjectileMolotov
// 0x0050 (0x0508 - 0x04B8)
class ATslProjectileMolotov : public ATslProjectile
{
public:
	TEnumAsByte<EMolotovSimulationType>                MolotovSimulation;                                        // 0x04B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class UClass*                                      DamageFieldContainerTemplate;                             // 0x04C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageFieldContainerInWallTemplate;                       // 0x04C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageFieldTemplate;                                      // 0x04D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageFieldTemplateInWall;                                // 0x04D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FragmentProjectileClass;                                  // 0x04E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ImpactMaxCount;                                           // 0x04E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x04EC(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslProjectileMolotov");
		return ptr;
	}

};


// Class TslGame.TslReactionDoorComponent
// 0x0040 (0x0840 - 0x0800)
class UTslReactionDoorComponent : public UStaticMeshComponent
{
public:
	class UDestructibleMesh*                           DoorDestructibleMesh;                                     // 0x0800(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDoorBreakingState                          DoorBreakingState;                                        // 0x0808(0x0001) (CPF_Net)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0809(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionDoorComponent");
		return ptr;
	}


	void OnRep_DoorBreakingState();
	void ClientTakeDamage(float Damage, const class Vector3D& HitLocation, float DamageRadius, float Impulse);
};


// Class TslGame.TslReactionBoxComponent
// 0x0000 (0x06F0 - 0x06F0)
class UTslReactionBoxComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionBoxComponent");
		return ptr;
	}

};


// Class TslGame.TslSceneCaptureComponent2D
// 0x0010 (0x08C0 - 0x08B0)
class UTslSceneCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	class UWorld*                                      World;                                                    // 0x08B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSceneCaptureComponent2D");
		return ptr;
	}


	void CaptureScene();
};


// Class TslGame.TslSceneCaptureWorld
// 0x0078 (0x00A0 - 0x0028)
class UTslSceneCaptureWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSceneCaptureWorld");
		return ptr;
	}


	void InitWorld(class UGameInstance* GameInstance, const struct FString& SceneCapturePackageName);
	void DestroyWorld();
};


// Class TslGame.TslServerParticle
// 0x0028 (0x03B8 - 0x0390)
class ATslServerParticle : public AActor
{
public:
	unsigned char                                      bAutoDestroyOnParticleFinish : 1;                         // 0x0390(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutoPlaySound : 1;                                       // 0x0391(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkSound;                                                  // 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslServerParticle");
		return ptr;
	}


	void StopParticleMulticast();
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
};


// Class TslGame.TslSingleton
// 0x00F0 (0x0118 - 0x0028)
class UTslSingleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSingleton");
		return ptr;
	}

};


// Class TslGame.TslSpectatorPawn
// 0x0228 (0x0640 - 0x0418)
class ATslSpectatorPawn : public ASpectatorPawn
{
public:
	class USpringArmComponent*                         FreeCameraSpringArmComponent;                             // 0x0418(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            FreeCameraComponent;                                      // 0x0420(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpringArmComponent*                         ThirdPersonSpringArm;                                     // 0x0428(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCamera;                                        // 0x0430(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x0438(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x0440(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             AudioListener;                                            // 0x0448(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0450(0x0004) MISSED OFFSET
	float                                              DeathFollowBlendTime;                                     // 0x0454(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              DeathFollowBlendFunc;                                     // 0x0458(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	float                                              DeathFollowBlendExp;                                      // 0x045C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeathFollowTime;                                          // 0x0460(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	float                                              DeathFollowDistance;                                      // 0x0468(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FName                                       DeathFollowBone;                                          // 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0478(0x0004) MISSED OFFSET
	float                                              LocationUpdateIntervalSeconds;                            // 0x047C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0480(0x0004) MISSED OFFSET
	float                                              FreeCameraBlendTime;                                      // 0x0484(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              FreeCameraBlendFunc;                                      // 0x0488(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	float                                              FreeCameraBlendExp;                                       // 0x048C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FreeCameraBlendPitch;                                     // 0x0490(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FollowCameraZoomSpeed;                                    // 0x0494(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ThirdPersonCameraBlendTime;                               // 0x0498(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              ThirdPersonCameraBlendFunc;                               // 0x049C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	float                                              ThirdPersonCameraBlendExp;                                // 0x04A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LimitTargetArmLength;                                     // 0x04A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x04A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacter*                               DeathCharacter;                                           // 0x04B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SpectatableCheckLength;                                   // 0x04B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpectatableCheckScreenRatio;                              // 0x04BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET
	class UClass*                                      OutlineEffectClass;                                       // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class ATslPostProcessEffect*                       OutlineEffect;                                            // 0x04D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x160];                                     // 0x04E0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSpectatorPawn");
		return ptr;
	}


	void SetShowPlayerInfoDistance(float Distance);
	void OnViewTargetUpdate(class AActor* NewViewTarget);
	void OnToggleShowObseverTagWeapon();
	void OnToggleObseverTagWidget();
	void OnThirdPersonActivated(class UActorComponent* InThirdPersonCamera, bool bReset);
	void OnSwitchCameraSpectator();
	void OnSwitchCameraFollow();
	void OnStopSlowMove();
	void OnStopFastMove();
	void OnStartSlowMove();
	void OnStartFastMove();
	void OnSetSpectator();
	void OnSetLocation(unsigned char idx);
	void OnSetFree();
	void OnSetFollow();
	void OnSetCharacterSpec(unsigned char idx);
	void OnSetCharacter(unsigned char idx);
	void OnSaveLocation(unsigned char idx);
	void OnSaveCharacter(unsigned char idx);
	bool IsObserverTagWeaponShow();
	class ATslCharacter* GetSpectatableCharacter();
	float GetShowPlayerInfoDistance();
	bool GetObserverTagShow();
	class ATslCharacter* GetLastSpectatedCharacter();
	TEnumAsByte<EObserverCameraMode> GetCameraMode();
};


// Class TslGame.TslSpectatorPawnMovement
// 0x0028 (0x01C0 - 0x0198)
class UTslSpectatorPawnMovement : public USpectatorPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0198(0x0004) MISSED OFFSET
	float                                              FastMoveModifier;                                         // 0x019C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SlowMoveModifier;                                         // 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinFreeMoveSpeed;                                         // 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFreeMoveSpeed;                                         // 0x01A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinFreeMoveSpeedHeight;                                   // 0x01AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFreeMoveSpeedHeight;                                   // 0x01B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AbsoluteMinZ;                                             // 0x01B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AbsoluteMaxZ;                                             // 0x01B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSpectatorPawnMovement");
		return ptr;
	}

};


// Class TslGame.TslStatics
// 0x0000 (0x0028 - 0x0028)
class UTslStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStatics");
		return ptr;
	}


	void STATIC_UseHighPrecisionMouseMovement(class APlayerController* PlayerController);
	void STATIC_SetWorldOriginByDistance(class APlayerController* Controller, float XYDistanceToShift);
	void STATIC_SetWorldOrigin(class APlayerController* Controller);
	void STATIC_SetAnimationAkSwitch(class ACharacter* Character, const struct FString& SwitchGroup, const struct FString& SwitchState);
	void STATIC_SetAnimationAkRTPC(class ACharacter* Character, const struct FString& RTPCName, float RTPCValue);
	class Vector3D STATIC_ServerPositionToLocal(class UObject* WorldContextObject, const class Vector3D& Server);
	int STATIC_SafeDivide_IntInt(int A, int B, int DivideByZeroValue);
	float STATIC_SafeDivide_FloatFloat(float A, float B, float DivideByZeroValue);
	void STATIC_ReleaseMouseCaptureFromPlayerController(class APlayerController* PlayerController);
	class Vector3D STATIC_ProjectPointToFloor(class UObject* WorldContextObject, const class Vector3D& Origin, float Length, bool* bOutHit);
	class Vector3D STATIC_ProjectPointsToHighFloor(class UObject* WorldContextObject, const class Vector3D& Origin, float AroundLength, float RayLength, bool* bOutHit);
	struct FString STATIC_PhysicalSurfaceToString(TEnumAsByte<EPhysicalSurface> Type);
	struct FName STATIC_PhysicalSurfaceToName(TEnumAsByte<EPhysicalSurface> Type);
	class Vector3D STATIC_LocalPositionToServer(class UObject* WorldContextObject, const class Vector3D& Local);
	bool STATIC_LineSphereIntersection(const class Vector3D& Center, const class Vector3D& Origion, const class Vector3D& Direction, float Radius, class Vector3D* Intersection1, class Vector3D* Intersection2);
	bool STATIC_IsShipping();
	bool STATIC_IsServerActor(class AActor* Actor);
	bool STATIC_IsMapFullyLoaded(class UWorld* World);
	bool STATIC_IsGamepadConnected();
	bool STATIC_IsEditor();
	bool STATIC_IsClientActor(class AActor* Actor);
	float STATIC_GetWaterSurfaceHeight(class APhysicsVolume* PhysicsVolume, const class Vector3D& CurLocation);
	class UTslVehicleSeatComponent* STATIC_GetVehicleSeatComponent(class AActor* Actor);
	class UTslVehicleCommonComponent* STATIC_GetVehicleCommonComponent(class AActor* Actor);
	class ATslPlayerController* STATIC_GetTslPlayerController(class APawn* Pawn);
	struct FString STATIC_GetTslPlatformName();
	class ATslGameState* STATIC_GetTslGameState(class UObject* WorldContextObject);
	class ATslCharacter* STATIC_GetTslCharacter(class UObject* WorldContextObject);
	class UPhysicalMaterial* STATIC_GetSimplePhysicalMaterial(class UPrimitiveComponent* PrimitiveComponent);
	class Vector3D STATIC_GetServerLocation(class UObject* ActorOrComponent);
	float STATIC_GetNextPlayzoneRadius(class UObject* WorldContextObject);
	class Vector3D STATIC_GetNextPlayzonePosition(class UObject* WorldContextObject);
	struct FString STATIC_GetGameVersion();
	struct FString STATIC_GetFullGameVersion();
	float STATIC_GetBluezoneRadius(class UObject* WorldContextObject);
	class Vector3D STATIC_GetBluezonePosition(class UObject* WorldContextObject);
	bool STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const class Vector3D& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bExplode);
	bool STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const class Vector3D& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bExplode);
	void STATIC_ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, const struct FAttackId& AttackId);
};


// Class TslGame.TslStreamer
// 0x0020 (0x0048 - 0x0028)
class UTslStreamer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStreamer");
		return ptr;
	}


	void OnOriginShiftedInternal(class UWorld* InWorld, const struct FIntVector& From, const struct FIntVector& To);
	void OnLevelChangedInternal();
};


// Class TslGame.FoliageCollisionStreamer
// 0x0068 (0x00B0 - 0x0048)
class UFoliageCollisionStreamer : public UTslStreamer
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              MinDistance;                                              // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MaxQueryDistance;                                         // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MaxSimulationDistance;                                    // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseOnlyQueryAndPhysics : 1;                              // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0059(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FoliageCollisionStreamer");
		return ptr;
	}

};


// Class TslGame.LODActorStreamer
// 0x0038 (0x0080 - 0x0048)
class ULODActorStreamer : public UTslStreamer
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              PreLoadDistance;                                          // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PerFrameShowCount;                                        // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PerFrameShowCountLimit;                                   // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FFloatRange>                         MinDrawDistanceOverride;                                  // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LODActorStreamer");
		return ptr;
	}

};


// Class TslGame.ParticleEnvrionmentStreamer
// 0x0018 (0x0060 - 0x0048)
class UParticleEnvrionmentStreamer : public UTslStreamer
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ToleranceDeactiveDistance;                                // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParticleEnvrionmentStreamer");
		return ptr;
	}

};


// Class TslGame.TslStreamerManager
// 0x0028 (0x03B8 - 0x0390)
class ATslStreamerManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	TArray<class UClass*>                              StreamerClasses;                                          // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UTslStreamer*>                        TslStreamers;                                             // 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStreamerManager");
		return ptr;
	}

};


// Class TslGame.TslUserWidget
// 0x0020 (0x0260 - 0x0240)
class UTslUserWidget : public UUserWidget
{
public:
	class UInputComponent*                             InputComponentAxis;                                       // 0x0240(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData)
	class ATslCharacter*                               CachedTslCharacter;                                       // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslGameState*                               CachedTslGameState;                                       // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslCharacter*                               CachedViewTargetTslCharacter;                             // 0x0258(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslUserWidget");
		return ptr;
	}


	void StopListeningForAllInputAxises();
	void ListenForInputAxis(const struct FName& AxisName, float Scale, bool bConsume, const struct FScriptDelegate& Callback);
	class ATslCharacter* GetCachedViewTargetTslCharacter();
	class ATslGameState* GetCachedGameState();
	class ATslCharacter* GetCachedCharacter();
};


// Class TslGame.BlockInputUserWidget
// 0x0028 (0x0288 - 0x0260)
class UBlockInputUserWidget : public UTslUserWidget
{
public:
	unsigned char                                      bWhiteList : 1;                                           // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	TArray<struct FBlockAction>                        BlockActions;                                             // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FName>                               BlockAxises;                                              // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BlockInputUserWidget");
		return ptr;
	}

};


// Class TslGame.MapGridWidget
// 0x00F0 (0x0350 - 0x0260)
class UMapGridWidget : public UTslUserWidget
{
public:
	float                                              ZoomLevel;                                                // 0x0260(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShowGridZoomLevel;                                        // 0x0264(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 ViewRatioCurve;                                           // 0x0268(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          MapMaterial;                                              // 0x0270(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRectangleViewMode : 1;                                   // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	class UTexture2D*                                  MapTexture;                                               // 0x0280(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       GridFont;                                                 // 0x0288(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             GridTextHorizentalArray;                                  // 0x0290(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FString>                             GridTextVerticalArray;                                    // 0x02A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FLinearColor                                ColorLargeGrid;                                           // 0x02B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorSmallGrid;                                           // 0x02C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorText;                                                // 0x02D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorSafetyZone;                                          // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorRedZone;                                             // 0x02F0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThicknessLargeGrid;                                       // 0x0300(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThicknessSmallGrid;                                       // 0x0304(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorPoisonGasWarning;                                    // 0x0308(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDrawGridLine : 1;                                        // 0x0318(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDrawGridText : 1;                                        // 0x0319(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDrawNextPlayzoneGuideLine : 1;                           // 0x031A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x031B(0x0015) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MatInst;                                                  // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MapGridWidget");
		return ptr;
	}


	void UpdateZoomAndWidgetSize(float Zoom, const class Vector2D& WidgetSize);
	void UpdateWidgetSize_UC(const class Vector2D& WidgetSize);
	void UpdateRectangleViewByWidgetSize(const class Vector2D& WidgetSize);
	void UpdateRectangleView();
	class Vector2D UCtoMC(const class Vector2D& UC);
	void SetZoomLevel(float NewZoomLevel);
	void SetImageBrush(class UMaterialInstanceDynamic* NewMatInst);
	void SetCharacterIconPositionAndRotation_UC(const class Vector2D& Pos_UC, float Angle);
	void SetCenter_MC(const class Vector2D& Center);
	class Vector2D MCtoUC(const class Vector2D& MapCoord);
	float GetZoomLevel();
	class Vector2D GetWidgetSize();
	class Vector2D GetWidgetPosition();
	class Vector2D GetScreenOffset();
	void GetMapImageWigetSizeAndImageOffset(class Vector2D* WidgetSize, class Vector2D* ImageOffset);
	struct FString GetCharacterGridVertical();
	struct FString GetCharacterGridTextHorizental();
	void DrawRedZone_UC(const class Vector2D& Center_UC, float Radius_UC);
	void DrawMarker_UC(const class Vector2D& MarkerCenter_UC);
	void CursorUCtoCenterMC(const class Vector2D& UC, class Vector2D* Offest_MC, bool* bUpdate);
	class Vector2D ClampPositionByWidgetSize_UC(const class Vector2D& Positon, const class Vector2D& WidgetSize);
	class Vector2D ClampPosition_UC(const class Vector2D& Positon);
	void AddCenter_UC(const class Vector2D& Offset_UC);
};


// Class TslGame.TslVehicleCommonComponent
// 0x0088 (0x0178 - 0x00F0)
class UTslVehicleCommonComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBreak;                                                  // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRepair;                                                 // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeath;                                                  // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthChange;                                           // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFuelChange;                                             // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      bIsDying : 1;                                             // 0x0140(0x0001) (CPF_Edit, CPF_Net, CPF_EditConst)
	unsigned char                                      bIsBroken : 1;                                            // 0x0140(0x0001) (CPF_Edit, CPF_Net, CPF_EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	float                                              Health;                                                   // 0x0144(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fuel;                                                     // 0x014C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FuelMax;                                                  // 0x0150(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UClass*                                      VehicleExplosionDamageType;                               // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<TEnumAsByte<EDamageTypeCategory>>           CharacterDamageIgnores;                                   // 0x0160(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      VehicleUI;                                                // 0x0170(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleCommonComponent");
		return ptr;
	}


	void SetVehicleHealth(float NewHealth);
	void SetVehicleFuelPercent(float Percent);
	void SetVehicleFuel(float NewFuel);
	void Repair();
	void OnRep_Health(float LastHealth);
	void OnRep_Fuel(float LastFuel);
	void OnRep_Dying();
	void OnRep_Broken();
	bool IsDying();
	bool IsBroken();
	class UClass* GetVehicleUI();
	float GetVehicleHealthPercent();
	float GetVehicleHealth();
	float GetVehicleFuelPercent();
	float GetVehicleFuel();
	float GetVehicleBaseHealth();
	float GetVehicleBaseFuel();
	bool CanIgnoreCharacterDamage(TEnumAsByte<EDamageTypeCategory> DamageTypeCategory);
	void Break();
	void AddVehicleFuel(float Delta);
};


// Class TslGame.VehicleSurfaceAudioData
// 0x0010 (0x0038 - 0x0028)
class UVehicleSurfaceAudioData : public UDataAsset
{
public:
	class UAkAudioEvent*                               EventIn;                                                  // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EventOut;                                                 // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSurfaceAudioData");
		return ptr;
	}

};


// Class TslGame.TslVehicleEffectComponent
// 0x02E0 (0x03D0 - 0x00F0)
class UTslVehicleEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UMeshComponent*                              MeshComponent;                                            // 0x00F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                EngineSoundComponent;                                     // 0x0100(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVehicleEffectInfo                          VehicleEffectInfo;                                        // 0x0108(0x00D8) (CPF_Edit, CPF_DisableEditOnInstance)
	class ATslParticle*                                MufflerEffect;                                            // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                Muffler2Effect;                                           // 0x01E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                BoostEffect;                                              // 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                Boost2Effect;                                             // 0x01F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                DamagedEffect;                                            // 0x0200(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                ExplosionEffect;                                          // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                FrontTrailEffect;                                         // 0x0210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                RearTrailEffect;                                          // 0x0218(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                ThrusterEffect;                                           // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                Thruster2Effect;                                          // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0230(0x001C) MISSED OFFSET
	float                                              TrailSpeedThreshold;                                      // 0x024C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRPMOverride : 1;                                         // 0x0250(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0251(0x000F) MISSED OFFSET
	TMap<TEnumAsByte<ESurfaceEffect>, class UVehicleSurfaceAudioData*> SurfaceAudioMap;                                          // 0x0260(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bUseNewSurfaceAudio : 1;                                  // 0x02B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	TArray<int>                                        MeasuredWheelIndices;                                     // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<int>                                        MeasuredWheelIndicesSlip;                                 // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              SuspenionOffsetForContact;                                // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SurfaceActivationValue;                                   // 0x02DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SurfaceDeactivationValue;                                 // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DT_Multiplier;                                            // 0x02E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinVelocityForSurfaceCheck;                               // 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinSlip;                                                  // 0x02EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinSpin;                                                  // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                VelocityInterpSpeed;                                      // 0x02F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SlipInterpSpeed;                                          // 0x02F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SpinInterpSpeed;                                          // 0x02FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bDebugVisualizedMeasuredWheels : 1;                       // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x77];                                      // 0x0301(0x0077) MISSED OFFSET
	TMap<int, class UMaterialInterface*>               DestroyedMaterialMap;                                     // 0x0378(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              ApplyDestroyedMaterialDelay;                              // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleEffectComponent");
		return ptr;
	}


	void SetVehicleMaterialsToDestroyed();
	void SetEngineSoundRTPC(const struct FString& RTPC, float Value);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnHealthChange(float CurrentHealth, float LastHealth, float HealthMax, bool bIsDying);
	void OnDestroyedImpactEffect(class AActor* DestroyedActor);
	void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	class UAkComponent* GetEngineSoundComponent();
	void ApplyDestoyedMaterialWithDelay();
};


// Class TslGame.TslVehicleHitComponent
// 0x0120 (0x0210 - 0x00F0)
class UTslVehicleHitComponent : public UActorComponent
{
public:
	class UMeshComponent*                              MeshComponent;                                            // 0x00F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              HitCharacterDuration;                                     // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x00FC(0x0054) MISSED OFFSET
	float                                              LeaveCharacterIgnoreDuration;                             // 0x0150(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterHitMinimumVehicleSpeed;                          // 0x0154(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterDamageVelocityUnitMultiplier;                    // 0x0158(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterDamageMassUnitMultiplier;                        // 0x015C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CharacterDamageSpeedCurve;                                // 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CharacterDamageMassCurve;                                 // 0x0168(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumCharacterDamage;                                   // 0x0170(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterLaunchSpeedMultiplier;                           // 0x0174(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumCharacterLaunchSpeed;                              // 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpulseMultiplier;                                 // 0x017C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           VoidPhysicalMaterial;                                     // 0x0180(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactModifier;                                    // 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactModifierUpsideDown;                          // 0x018C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorption;                                  // 0x0190(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorptionUpsideDown;                        // 0x0194(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorptionRider;                             // 0x0198(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorptionRiderUpsideDown;                   // 0x019C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactVehicleDamageMultiplier;                     // 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactRiderDamageMultiplier;                       // 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      VehicleHitDamageType;                                     // 0x01A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B0(0x0004) MISSED OFFSET
	float                                              ExplosionBaseDamage;                                      // 0x01B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionMinimumDamage;                                   // 0x01B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadiusInner;                                     // 0x01BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadiusOuter;                                     // 0x01C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionDamageFalloff;                                   // 0x01C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ExplosionDamageType;                                      // 0x01C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ExplosionDamagePreventionChannel;                         // 0x01D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x01D1(0x000F) MISSED OFFSET
	float                                              ImpulseLimitationSpeedThreshold;                          // 0x01E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CollectTime;                                              // 0x01E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x01E8(0x0010) MISSED OFFSET
	TArray<struct FVehicleDebugHit>                    DebugHitHistory;                                          // 0x01F8(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleHitComponent");
		return ptr;
	}


	void OnSyncHit(const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslVehicleReactionInterface
// 0x0000 (0x0028 - 0x0028)
class UTslVehicleReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleReactionInterface");
		return ptr;
	}


	void OnImpactedByVehicle(const struct FHitResult& Hit, const class Vector3D& Velocity);
};


// Class TslGame.TslVehicleSeatComponent
// 0x0100 (0x01F0 - 0x00F0)
class UTslVehicleSeatComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnRide;                                                   // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLeave;                                                  // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverRide;                                             // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverLeave;                                            // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostDriverRide;                                         // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostDriverLeave;                                        // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<struct FVehicleSeatInfo>                    SeatInfos;                                                // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class UVehicleSeatInteractionComponent*>    Seats;                                                    // 0x0160(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bUseSeatCamera : 1;                                       // 0x0170(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoFlipCheck : 1;                                         // 0x0171(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	float                                              FlipForce;                                                // 0x0174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoEntryAngleCheck : 1;                                   // 0x0178(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	float                                              MinEntryAngle;                                            // 0x017C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDampenPlayerVelocityOnLeave : 1;                         // 0x0180(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	float                                              OnLeaveVelocityMultiplier;                                // 0x0184(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseActiveStabilize : 1;                                  // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	TWeakObjectPtr<class ATslCharacter>                LastDriver;                                               // 0x018C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x5C];                                      // 0x0194(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleSeatComponent");
		return ptr;
	}


	void TryToStabilize();
	void TryToRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void TryToLeave(class ATslCharacter* Rider, bool bForce);
	void TryToFlip();
	void Ride(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void PostDriverRide();
	void PostDriverLeave();
	void OnFuelChange(float CurrentFuel, float LastFuel, float FuelMax);
	void Leave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat, bool bForce);
	void KillAllRiders(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	int GetVehicleSeatIndex(class UVehicleSeatInteractionComponent* Seat);
	TArray<class UVehicleSeatInteractionComponent*> GetSeats();
	class UVehicleSeatInteractionComponent* GetSeat(int SeatIndex);
	TArray<class ATslCharacter*> GetRiders();
	class ATslCharacter* GetLastDriver(float LastDuration);
	class ATslCharacter* GetDriver();
};


// Class TslGame.TslVehicleSyncComponent
// 0x0050 (0x0140 - 0x00F0)
class UTslVehicleSyncComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSyncHit;                                                // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0100(0x0004) MISSED OFFSET
	float                                              MinCorrectionInterval;                                    // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0108(0x0004) MISSED OFFSET
	float                                              SendingToServerIntervalAtClient;                          // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	float                                              SendingReliableHitToServerIntervalAtClient;               // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	float                                              AllowedMaxDistanceSqAtServer;                             // 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StationaryCorrectionIntervalAtClient;                     // 0x0124(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0128(0x0004) MISSED OFFSET
	float                                              StationaryCorrectionSpeedThresholdSq;                     // 0x012C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StationaryCorrectionThresholdDistanceSq;                  // 0x0130(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x0134(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleSyncComponent");
		return ptr;
	}


	void SendServerMoveToClient(int InCorrectionId, const struct FVector_NetQuantize100& ServerLocation, const struct FVector_NetQuantize100& ServerLinearVelocity, const class Vector3D& ServerRotator, const struct FVector_NetQuantize100& ServerAngularVelocity, bool bIsSnap);
	void SendClientMoveToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const class Vector3D& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity);
	void SendClientMoveToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const class Vector3D& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity);
	void SendClientHitToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const class Vector3D& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit);
	void SendClientHitToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const class Vector3D& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit);
	void OnHitAtServer(class AActor* SelfActor, class AActor* OtherActor, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnHitAtClient(class AActor* SelfActor, class AActor* OtherActor, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnDriverRide();
};


// Class TslGame.TslVehicleTempComponent
// 0x0008 (0x00F8 - 0x00F0)
class UTslVehicleTempComponent : public UActorComponent
{
public:
	float                                              TickInterval;                                             // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleTempComponent");
		return ptr;
	}

};


// Class TslGame.TslViewTargetTempComponent
// 0x0018 (0x0108 - 0x00F0)
class UTslViewTargetTempComponent : public UActorComponent
{
public:
	TArray<struct FTempComponentInfo>                  ComponentInfos;                                           // 0x00F0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslViewTargetTempComponent");
		return ptr;
	}


	void AddTempComponentWithDelegate(class USceneComponent* TempComponent, const struct FScriptDelegate& DelegateToCall);
	void AddTempComponent(class USceneComponent* TempComponent);
};


// Class TslGame.TslWeapon_Trajectory
// 0x0180 (0x0B30 - 0x09B0)
class ATslWeapon_Trajectory : public ATslWeapon_Gun
{
public:
	float                                              TrajectoryGravityZ;                                       // 0x09B0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RecoilSpreadScale;                                        // 0x09B4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      FireAtViewPoint : 1;                                      // 0x09B8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09B9(0x0003) MISSED OFFSET
	float                                              DefaultTimerFrequency;                                    // 0x09BC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CrouchSpreadModifier;                                     // 0x09C0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ProneSpreadModifier;                                      // 0x09C4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              WalkSpread;                                               // 0x09C8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RunSpread;                                                // 0x09CC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              JumpSpread;                                               // 0x09D0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	struct FTrajectoryWeaponData                       TrajectoryConfig;                                         // 0x09D8(0x0060) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FRecoilInfo                                 RecoilInfo;                                               // 0x0A38(0x0068) (CPF_Edit, CPF_DisableEditOnInstance)
	class UClass*                                      ImpactTemplate;                                           // 0x0AA0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             TrailFX;                                                  // 0x0AA8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       TrailTargetParam;                                         // 0x0AB0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0AB8(0x0018) MISSED OFFSET
	float                                              WeaponSpread;                                             // 0x0AD0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RecoilModifier_Stand;                                     // 0x0AD4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RecoilModifier_Crouch;                                    // 0x0AD8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RecoilModifier_Prone;                                     // 0x0ADC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              VerticalRecoilMin;                                        // 0x0AE0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              VerticalRecoilMax;                                        // 0x0AE4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0AE8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Trajectory");
		return ptr;
	}


	void SimulateHit_UnReliable(const struct FHitResult& Impact, int RandomSeed, float ReticleSpread, const class Vector3D& RelLocation);
	void SimulateHit_Reliable(const struct FHitResult& Impact, int RandomSeed, float ReticleSpread, const class Vector3D& RelLocation);
	void ServerNotifyMiss(const class Vector3D& ShootDir, int RandomSeed, float ReticleSpread, const struct FAttackId& AttackId);
	void ServerNotifyHit(const struct FHitResult& Impact, const class Vector3D& Origin, const class Vector3D& TraceStart, const class Vector3D& ShootDir, int RandomSeed, float ReticleSpread, float TravelDistance, const struct FAttackId& AttackId, uint32_t HitSeq, const class Vector3D& RelLocation);
	void ServerNotifyCrack(class ATslCharacter* TargetCharacter, const class Vector3D& LocationRelative, float BulletVelocity);
	void OnRep_WeaponSpread(float LastWeaponSpread);
	bool IsBulletInAir();
	struct FTrajectoryWeaponData GetTrajectoryConfig();
	struct FRecoilInfo GetRecoilInfo();
	float GetCurrentStabilityVar();
	float GetCurrentReoveryTarget();
	float GetCurrentRecoilValue();
	class Vector2D GetCurrentRecoilTarget();
	class Rotator GetBulletRotation();
	class Vector3D GetBulletLocation();
};


// Class TslGame.TslWeapon_Melee
// 0x00B8 (0x0830 - 0x0778)
class ATslWeapon_Melee : public ATslWeapon
{
public:
	class UAkAudioEvent*                               AttackSoundAk;                                            // 0x0778(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FMeleeWeaponAnim>                    AttackAnims;                                              // 0x0780(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              Damage;                                                   // 0x0790(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponImpact;                                             // 0x0794(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0798(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EHitCheckType>                         HitCheckType;                                             // 0x07A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07A1(0x0003) MISSED OFFSET
	float                                              AllowedHitRangeLeeway;                                    // 0x07A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactTemplate;                                           // 0x07A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCapsuleComponent*                           HitCapsuleComponent;                                      // 0x07B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x07B8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Melee");
		return ptr;
	}


	void ServerNotifyHit(TArray<struct FHitResult> Impacts, const struct FAttackId& AttackId, uint32_t HitSeq);
	void ServerAttack(int AnimIndex);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnAnimationNotify(const struct FName& NotifyName);
	void ClientHit_Confirmed(const struct FHitResult& Impact);
	void ClientAttack(int AnimIndex);
};


// Class TslGame.TslWeapon_Throwable
// 0x00B0 (0x0828 - 0x0778)
class ATslWeapon_Throwable : public ATslWeapon
{
public:
	struct FThrowableWeaponData                        ThrowableConfig;                                          // 0x0778(0x0068) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x07E0(0x0018) MISSED OFFSET
	TEnumAsByte<EThrowableState>                       ThrowableState;                                           // 0x07F8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07F9(0x0003) MISSED OFFSET
	unsigned char                                      bQuickThrowHigh : 1;                                      // 0x07FC(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData02[0x23];                                      // 0x07FD(0x0023) MISSED OFFSET
	class ATslParticle*                                PinOffEffect;                                             // 0x0820(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Throwable");
		return ptr;
	}


	void ServerStartReady();
	void ServerStartPinOff();
	void ServerForceDropProjectile();
	void ServerFireProjectile(const class Vector3D& RelativeLocation, const class Rotator& ProjectileRotation);
	void Server_SetQuickThrowHigh(bool NewQuickThrowHigh);
	void OnRep_ThrowableState(TEnumAsByte<EThrowableState> LastThrowableState);
	void OnAnimationNotify(const struct FName& NotifyName);
	TEnumAsByte<EThrowableState> GetThrowableState();
	int GetThrowableCountInInventory();
	int GetThrowableCount();
	void ClientNotifyReset();
	void ClientNotifyDrop();
};


// Class TslGame.TslWebPopupInterface
// 0x0000 (0x0028 - 0x0028)
class UTslWebPopupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWebPopupInterface");
		return ptr;
	}


	void ShowWebPopup(const struct FWebPopupParam& Param);
};


// Class TslGame.TslMotorbikeVehicle
// 0x0198 (0x0800 - 0x0668)
class ATslMotorbikeVehicle : public ATslWheeledVehicle
{
public:
	unsigned char                                      bUseKickstandStabilize : 1;                               // 0x0668(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0669(0x0003) MISSED OFFSET
	float                                              MinSuspensionOffsetForContact;                            // 0x066C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bStabilizeOnServer : 1;                                   // 0x0670(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0671(0x0003) MISSED OFFSET
	float                                              KickstandStabilizeDamping;                                // 0x0674(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandMaxAngVelocity;                                  // 0x0678(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultAngularDamping;                                    // 0x067C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandStabilizeTorqueScalar;                           // 0x0680(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandStabilizeRollScalar;                             // 0x0684(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandStabilizeRollMinRange;                           // 0x0688(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinVelocityForStabilizeOverride;                          // 0x068C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       StabilizeBone_Low;                                        // 0x0690(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       StabilizeBone_High;                                       // 0x0698(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Roll;                                               // 0x06A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_RollReturn;                                         // 0x06A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Steer;                                              // 0x06B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Yaw;                                                // 0x06B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Torque;                                             // 0x06C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     StabStaticVector;                                         // 0x06C8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     StabStaticVectorKickstand;                                // 0x06D4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     StabNoDriverVector;                                       // 0x06E0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabX_Velocity_In;                                        // 0x06EC(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabX_Velocity_Out;                                       // 0x06F4(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabX_Pitch_In;                                           // 0x06FC(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabX_Pitch_Out;                                          // 0x0704(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Velocity_In;                                        // 0x070C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Velocity_Out;                                       // 0x0714(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Roll_In;                                            // 0x071C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Roll_Out;                                           // 0x0724(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Pitch_In;                                           // 0x072C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Pitch_Out;                                          // 0x0734(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabTorque_In;                                            // 0x073C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabTorque_Out;                                           // 0x0744(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StabTorque_ForceScalar;                                   // 0x074C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabTorque_Pitch_In;                                      // 0x0750(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabTorque_Pitch_Out;                                     // 0x0758(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseFlipping : 1;                                         // 0x0760(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	float                                              FlippingForce;                                            // 0x0764(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InitialFlipTimer;                                         // 0x0768(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinVelocityForFlipping;                                   // 0x076C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0770(0x0004) MISSED OFFSET
	float                                              ContactAlpha_RiseRate;                                    // 0x0774(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ContactAlpha_FallRate;                                    // 0x0778(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_EngineAudio;                                        // 0x0780(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlF_VelMap;                                       // 0x0788(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlB_VelMap;                                       // 0x0790(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlL_VelMap;                                       // 0x0798(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlR_VelMap;                                       // 0x07A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlQ_VelMap;                                       // 0x07A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlE_VelMap;                                       // 0x07B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControl_FB_Torque;                                     // 0x07B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControl_LR_Torque;                                     // 0x07BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControl_QE_Torque;                                     // 0x07C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bStabilizeInAir : 1;                                      // 0x07C4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	float                                              StabilizeAirPercentage;                                   // 0x07C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x31];                                      // 0x07CC(0x0031) MISSED OFFSET
	unsigned char                                      bKickstandStabilize : 1;                                  // 0x07FD(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMotorbikeVehicle");
		return ptr;
	}


	bool VehicleHasDriver();
	void SetAirControlR(float inFloat);
	void SetAirControlQ(float inFloat);
	void SetAirControlL(float inFloat);
	void SetAirControlF(float inFloat);
	void SetAirControlE(float inFloat);
	void SetAirControlB(float inFloat);
	void ProcessFlipAndStabilize();
	void OnVehicleEjected();
	void OnPostDriverRide();
	void OnPostDriverLeave();
	bool IsUsingActiveStabilize();
	bool IsKickstandActive();
	bool IsFlippingEnabled();
	bool HasContact();
	float GetCOMSteerOffset();
};


// Class TslGame.TslMotorbikeVehicle_Sidecar
// 0x0018 (0x0818 - 0x0800)
class ATslMotorbikeVehicle_Sidecar : public ATslMotorbikeVehicle
{
public:
	float                                              Sidecar_COM_Y_Left;                                       // 0x0800(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Sidecar_COM_Y_Right;                                      // 0x0804(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     Sidecar_StabilizerHigh_StaticCOM;                         // 0x0808(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMotorbikeVehicle_Sidecar");
		return ptr;
	}

};


// Class TslGame.TslMotorbikeVehicle_Standalone
// 0x0000 (0x0800 - 0x0800)
class ATslMotorbikeVehicle_Standalone : public ATslMotorbikeVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMotorbikeVehicle_Standalone");
		return ptr;
	}

};


// Class TslGame.TslWheelEffectType
// 0x0080 (0x00A8 - 0x0028)
class UTslWheelEffectType : public UDataAsset
{
public:
	class UAkAudioEvent*                               Sound;                                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DefaultFxClass;                                           // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ConcreteFxClass;                                          // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DirtFxClass;                                              // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      WaterFxClass;                                             // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      MetalFxClass;                                             // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      WoodFxClass;                                              // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GrassFxClass;                                             // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GlassFxClass;                                             // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      RockFxClass;                                              // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SandFxClass;                                              // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultMinSpeed;                                          // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ConcreteMinSpeed;                                         // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DirtMinSpeed;                                             // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WaterMinSpeed;                                            // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MetalMinSpeed;                                            // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WoodMinSpeed;                                             // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GrassMinSpeed;                                            // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GlassMinSpeed;                                            // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RockMinSpeed;                                             // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SandMinSpeed;                                             // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheelEffectType");
		return ptr;
	}

};


// Class TslGame.UiHelperFunctions
// 0x0000 (0x0028 - 0x0028)
class UUiHelperFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.UiHelperFunctions");
		return ptr;
	}


	TArray<class UWidget*> STATIC_SortWidgetFormPositionY(TArray<class UWidget*> Widgets, bool bDescendingOrder);
	TArray<class UWidget*> STATIC_SortWidgetFormPositionX(TArray<class UWidget*> Widgets, bool bDescendingOrder);
	TArray<struct FTslPlayerMatchResultInfo> STATIC_SortPlayerMatchResultInfosByRanking(TArray<struct FTslPlayerMatchResultInfo> PlayerMatchResultInfos);
	TArray<TScriptInterface<class USlotInterface>> STATIC_SortItem(TArray<TScriptInterface<class USlotInterface>> InItemList);
	bool STATIC_IsWarning(class UUserWidget* Widget);
	bool STATIC_IsThereAnyPlayingAnimation(class UUserWidget* Widget, TArray<class UWidgetAnimation*> AnimationArray);
	bool STATIC_IsLastSpectatedCharacter(class UUserWidget* Widget, class ATslCharacter* Character);
	bool STATIC_IsKickEnableCharacter(class ATslCharacter* Character);
	bool STATIC_IsInNextPlayzone(class UUserWidget* Widget);
	bool STATIC_IsHitted(int State);
	bool STATIC_IsGroggyByTeam(class ATeam* Team);
	bool STATIC_IsBluezoneGpsReset(class UUserWidget* Widget);
	bool STATIC_IsAttacked(int State);
	bool STATIC_HaveDurability(const TScriptInterface<class USlotInterface>& ItemSlot);
	class ATslCharacter* STATIC_GetViewTargetTslCharacter(class UUserWidget* Widget);
	class UClass* STATIC_GetVehicleUI(class APawn* VehiclePawn);
	class UWidget* STATIC_GetUpWidgetByTslFocusableWidget(class UWidget* Widget);
	class ATslSpectatorPawn* STATIC_GetTslSpectatorPawn(class UUserWidget* Widget);
	class ATslHUD* STATIC_GetTslHUD(class UUserWidget* Widget);
	int STATIC_GetTeamId(class ATslCharacter* Character);
	TArray<struct FLinearColor> STATIC_GetTeamColors(int TeamCount);
	TArray<class ATslCharacter*> STATIC_GetSortedReplicateCharactersBySpectatorPawnDistance(class UUserWidget* Widget);
	class UWidget* STATIC_GetRightWidgetByTslFocusableWidget(class UWidget* Widget);
	struct FString STATIC_GetPlayerName(class ATslCharacter* Character);
	class ATslPlayerController* STATIC_GetOwningTslPlayerController(class UUserWidget* Widget);
	class ATslCharacter* STATIC_GetOwningTslCharacter(class UUserWidget* Widget);
	float STATIC_GetNextPlayzoneRadius_BluezoneGPS(class UUserWidget* Widget);
	class Vector3D STATIC_GetNextPlayzonePosition_BluezoneGPS(class UUserWidget* Widget);
	class UWidget* STATIC_GetLeftWidgetByTslFocusableWidget(class UWidget* Widget);
	class ATslCharacter* STATIC_GetLastSpectatedCharacter(class UUserWidget* Widget);
	float STATIC_GetHealthRatioByTeam(class ATeam* Team);
	float STATIC_GetGroggyHealthRatioByTeam(class ATeam* Team);
	float STATIC_GetDurabilityRatio(const TScriptInterface<class USlotInterface>& ItemSlot);
	class UWidget* STATIC_GetDownWidgetByTslFocusableWidget(class UWidget* Widget);
	float STATIC_GetCurrentPlayzoneRadius_BluezoneGPS(class UUserWidget* Widget);
	class Vector3D STATIC_GetCurrentPlayzonePosition_BluezoneGPS(class UUserWidget* Widget);
	int STATIC_GetCharacterStateByTeam(class ATeam* Team);
	float STATIC_GetBluezoneWarningTime(class UUserWidget* Widget);
	float STATIC_GetBluezoneReleaseTime(class UUserWidget* Widget);
	int STATIC_GetBluezoneGpsState(class UUserWidget* Widget);
	void STATIC_DrawDottedLine(const class Vector2D& PositionA, const class Vector2D& PositionB, float DottedLength, float DottedInterval, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
};


// Class TslGame.UmgBaseWidget
// 0x0018 (0x0258 - 0x0240)
class UUmgBaseWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0240(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.UmgBaseWidget");
		return ptr;
	}


	void HandleMainPrepass(class UWidget* Widget);
};


// Class TslGame.BluezoneGpsBaseWidget
// 0x0368 (0x05C0 - 0x0258)
class UBluezoneGpsBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      BluezoneGaugeImageBinder;                                 // 0x0258(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  BluezoneTimeTextBinder;                                   // 0x0280(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  MovingAnimationBinder;                                    // 0x02A0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FUmgWidgetBinder_Animation>          WarningAnimationList;                                     // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FUmgWidgetBinder_Animation>          ReleasingTextAnimationList;                               // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FUmgWidgetBinder_Animation                  EnterNextPlayzoneAnimBinder;                              // 0x02E0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  LeaveNextPlayzoneAnimBinder;                              // 0x0300(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  WidgetEmergingAnimBinder;                                 // 0x0320(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  WidgetVanishingAminBinder;                                // 0x0340(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       PlayZoneStartParmName;                                    // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BluezoneEndParamName;                                     // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ColorMultiplyParmName;                                    // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                InNextPlayzoneColorMultiply;                              // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       WarningTimeTextFormat;                                    // 0x0388(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ReleaseTimeText;                                          // 0x03A0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FSequence_Float                             BluezoneResetSequence;                                    // 0x03B8(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	struct FSequence_Float                             PlayzoneResetSequence;                                    // 0x0458(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	struct FSequence_Float                             PlayerIconResetSequence;                                  // 0x04F8(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0598(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BluezoneGpsBaseWidget");
		return ptr;
	}


	void OnNotifyRestrictingPlayArea();
	void OnNotifyNextGasIn(const class Vector3D& PoisonGasWarningPosition, float PoisonGasWarningRadius);
};


// Class TslGame.InteractionBaseWidget
// 0x01B8 (0x0410 - 0x0258)
class UInteractionBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Border                     MainLayer;                                                // 0x0258(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  InteractionMessageTextBinder;                             // 0x0278(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Border                     InteractionMessageTextBgBinder;                           // 0x0298(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  AdditionalTextBinder;                                     // 0x02B8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      SuitableWeaponImageBinder;                                // 0x02D8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              SuitableWeaponImageHeight;                                // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	struct FUmgWidgetBinder_Image                      KeyImageBinder;                                           // 0x0308(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  InteractionKeyTextBinder;                                 // 0x0330(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AdditionalMessageBlinkingBinder;                          // 0x0350(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AdditionalMessageNormalBinder;                            // 0x0370(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ShowAnimationBinder;                                      // 0x0390(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  HiddenAnimationBinder;                                    // 0x03B0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_WidgetSwitcher             InteractionInputMethodSwitcherBinder;                     // 0x03D0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       InteractionKeyName;                                       // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x03F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractionBaseWidget");
		return ptr;
	}

};


// Class TslGame.LifeGaugeBaseWidget
// 0x0120 (0x0378 - 0x0258)
class ULifeGaugeBaseWidget : public UUmgBaseWidget
{
public:
	class UTslHealthGaugeData*                         LifeGaugeColorData;                                       // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      LifeGaugeImageBinder;                                     // 0x0260(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       LifeGaugeRatioValueParamName;                             // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LifeGaugeColorParamName;                                  // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      HealAmountImageBinder;                                    // 0x0298(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Overlay                    HitEffectLayer;                                           // 0x02C0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       HealAmountRatioValueParamName;                            // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HealAmountRatioSartParamName;                             // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HealAmountRatioEndParamName;                              // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HealAmountColorParamName;                                 // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 HealEffectTimeCurve;                                      // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      HitEffectClass;                                           // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Item_Heal_FirstAid;                                       // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Item_Heal_MedKit;                                         // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  WarningAnimationBinder;                                   // 0x0320(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  GroggyAnimationBinder;                                    // 0x0340(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0360(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LifeGaugeBaseWidget");
		return ptr;
	}


	void OnNotifyHit(float Damage, TEnumAsByte<EDamageTypeCategory> DamageType);
	void OnNotifyHeal(float StartHealth, float GoalHealth, float MaxHealth);
};


// Class TslGame.LifeGaugeHitEffectBaseWidget
// 0x0098 (0x02F0 - 0x0258)
class ULifeGaugeHitEffectBaseWidget : public UUmgBaseWidget
{
public:
	TArray<struct FGaugeAlphaCurveType>                AlphaCurveList;                                           // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FUmgWidgetBinder_Image                      HitEffectImage;                                           // 0x0268(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       BaseColorParamName;                                       // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ColorLerpParamName;                                       // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BrightAlphaParamName;                                     // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HitEffectAlphaParamName;                                  // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HitEffectStartParamName;                                  // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HitEffectEndParamName;                                    // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x02C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LifeGaugeHitEffectBaseWidget");
		return ptr;
	}

};


// Class TslGame.WeaponSlotBaseWidget
// 0x02C8 (0x0520 - 0x0258)
class UWeaponSlotBaseWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      bListInSlot : 1;                                          // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	int                                                WeaponIndex;                                              // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      WeaponIconImageBinder;                                    // 0x0260(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_SizeBox                    WeaponIconImageSizeBoxBinder;                             // 0x0288(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       WeaponIconTextureParmName;                                // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       WeaponIconColorParmName;                                  // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                WeaponColor_Normal;                                       // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                WeaponColor_Unarmed;                                      // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  ScaleUpAnimBinder;                                        // 0x02D8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ScaleDownAnimBinder;                                      // 0x02F8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FColorBlindColorSet                         WeaponColorSet_NoReload;                                  // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  WeaponHandsOnLoadedAmmoCountTextBinder;                   // 0x0328(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  WeaponListLoadedAmmoCountTextBinder;                      // 0x0348(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AmmoIncreasingAnimBinder;                                 // 0x0368(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AmmoDecreasingAnimBinder;                                 // 0x0388(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  WeaponHandsOnUnloadedAmmoCountTextBinder;                 // 0x03A8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  UnloadedAmmoIncreasingAnimBinder;                         // 0x03C8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  UnloadedAmmoDecreasingAnimBinder;                         // 0x03E8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      WeaponHandsOnAmmoIconBinder;                              // 0x0408(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       AmmoTexParamName;                                         // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_TextBlock                  WeaponFiringModeTextBinder;                               // 0x0438(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_VerticalBox                ZeroingDistanceBlockBinder;                               // 0x0458(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  ZeroingdistanceTextBinder;                                // 0x0478(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ZeroDistIncreasingAnimBinder;                             // 0x0498(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ZeroDistDecreasingAnimBinder;                             // 0x04B8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ZeroingTextFormat;                                        // 0x04D8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ZeroingNA;                                                // 0x04F0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0508(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponSlotBaseWidget");
		return ptr;
	}

};


// Class TslGame.WeaponSlotHudBaseWidget
// 0x01F8 (0x0450 - 0x0258)
class UWeaponSlotHudBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_UserWidget                 CurrentWeaponSlotWidgetBinder;                            // 0x0258(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeInWeaponSlotAnimBinder;                               // 0x0278(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutWeaponSlotAnimBinder;                              // 0x0298(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeInUnarmedWeaponSlotAminBinder;                        // 0x02B8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutUnarmedWeaponSlotAminBinder;                       // 0x02D8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FUmgWidgetBinder_UserWidget>         WeaponSlotWidgetBinderList;                               // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FUmgWidgetBinder_Border                     WeaponSlotListBorderBinder;                               // 0x0308(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeInSlotListAminBinder;                                 // 0x0328(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutSlotListAminBinder;                                // 0x0348(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	float                                              SlotOffsetMultiply;                                       // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SlotPadding;                                              // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSequence_Float                             MovingSequence;                                           // 0x0370(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0410(0x0030) MISSED OFFSET
	struct FTimerHandle                                FinishTimer;                                              // 0x0440(0x0008) (CPF_Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponSlotHudBaseWidget");
		return ptr;
	}


	void OnNotifyWeaponUnarm(bool bIsUnarmed);
	void OnNotifyWeaponChange(int WeaponIndex, float Duration);
	void OnNotifyWeaponArmed();
	void OnMovingStarted();
	void OnMovingFinished();
};


// Class TslGame.VehicleRiderComponent
// 0x0050 (0x0140 - 0x00F0)
class UVehicleRiderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	int                                                SeatIndex;                                                // 0x00F8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x00FC(0x0034) MISSED OFFSET
	class APawn*                                       LastVehiclePawn;                                          // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleRiderComponent");
		return ptr;
	}

};


// Class TslGame.ParachuteVehicleSeatActor
// 0x0000 (0x0418 - 0x0418)
class AParachuteVehicleSeatActor : public AVehicleSeatActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicleSeatActor");
		return ptr;
	}

};


// Class TslGame.TslVehicleSeatActor
// 0x0008 (0x0420 - 0x0418)
class ATslVehicleSeatActor : public AVehicleSeatActor
{
public:
	TEnumAsByte<ERiderType>                            RiderType;                                                // 0x0418(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleSeatActor");
		return ptr;
	}

};


// Class TslGame.TslMotoSeatActor
// 0x0000 (0x0420 - 0x0420)
class ATslMotoSeatActor : public ATslVehicleSeatActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMotoSeatActor");
		return ptr;
	}


	bool IsEntryAllowed();
	void HandleFlipAndKickstand();
};


// Class TslGame.VivoxResponse
// 0x0070 (0x0098 - 0x0028)
class UVivoxResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxResponse");
		return ptr;
	}

};


// Class TslGame.SignInResponse
// 0x0030 (0x00C8 - 0x0098)
class USignInResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SignInResponse");
		return ptr;
	}

};


// Class TslGame.ChannelResponse
// 0x0050 (0x00E8 - 0x0098)
class UChannelResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0098(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ChannelResponse");
		return ptr;
	}

};


// Class TslGame.KeyRevokeResponse
// 0x0020 (0x00B8 - 0x0098)
class UKeyRevokeResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.KeyRevokeResponse");
		return ptr;
	}

};


// Class TslGame.KeyAddResponse
// 0x0030 (0x00C8 - 0x0098)
class UKeyAddResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.KeyAddResponse");
		return ptr;
	}

};


// Class TslGame.VivoxComponent
// 0x00D0 (0x01C0 - 0x00F0)
class UVivoxComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVoiceChatUpdated;                                       // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FVivoxConnectionInfo                        ConnectionInfo;                                           // 0x0108(0x0020) (CPF_Net)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	float                                              ResetFailureDelaySeconds;                                 // 0x0130(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0134(0x000C) MISSED OFFSET
	float                                              UpdatePositionIntervalSeconds;                            // 0x0140(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0144(0x0014) MISSED OFFSET
	struct FString                                     TeamChannelUrl;                                           // 0x0158(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     GlobalChannelUrl;                                         // 0x0168(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x38];                                      // 0x0178(0x0038) MISSED OFFSET
	float                                              SuddenMovementDistance;                                   // 0x01B0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              SuddenMovementModifier;                                   // 0x01B4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              SuddenMovementModifierDuration;                           // 0x01B8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              SuddenMovementModifierRestoreDuration;                    // 0x01BC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxComponent");
		return ptr;
	}


	void UpdatePosition();
	void SetVoiceChannelType(TEnumAsByte<EVivoxChannelType> ChannelType);
	void SetLocalVoiceOutputMuted(bool bIsMuted);
	void SetLocalVoiceInputMuted(bool bIsMuted);
	void ServerTestAccessToken();
	void ServerLogin();
	void ServerJoinTeamChannel();
	void ServerJoinGlobalChannel();
	void ResetTeamChannelJoinState();
	void ResetLoginState();
	void ResetGlobalChannelJoinState();
	void ResetConnectionState();
	void RefreshDevices();
	TEnumAsByte<EVivoxChannelType> GetVoiceChannelType();
	bool GetLocalVoiceOutputMuted();
	bool GetLocalVoiceInputMuted();
	void ClientLogin(const struct FString& AccessToken);
	void ClientJoinTeamChannel(const struct FString& AccessToken);
	void ClientJoinGlobalChannel(const struct FString& AccessToken);
	void ApplyTimedVolumeModifier(TEnumAsByte<EVivoxChannelType> ChannelType, float NewModifier, float Duration, float RestoreDuration);
};


// Class TslGame.VivoxManager
// 0x00F0 (0x0118 - 0x0028)
class UVivoxManager : public UObject
{
public:
	class UWorld*                                      World;                                                    // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FVivoxConnectionInfo                        ConnectionInfo;                                           // 0x0038(0x0020)
	unsigned char                                      bUseEphmeralChannel : 1;                                  // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     AuthId;                                                   // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AuthPwd;                                                  // 0x0070(0x0010) (CPF_ZeroConstructor)
	int64_t                                            AccessTokenExpirationTime;                                // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Issuer;                                                   // 0x0088(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Key;                                                      // 0x0098(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
	class USignInResponse*                             SignIn;                                                   // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UKeyAddResponse*                             KeyAdd;                                                   // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UKeyRevokeResponse*                          KeyRevoke;                                                // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UChannelResponse*>                    Channels;                                                 // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<class ATslPlayerController*>                PlayerControllers;                                        // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                ProximalMaxRange;                                         // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ProximalClampingDistance;                                 // 0x0104(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ProximalDistanceModel;                                    // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x010C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxManager");
		return ptr;
	}


	void OnRevokeKeySuccess(class UVivoxResponse* Response);
	void OnRevokeKeyFail(class UVivoxResponse* Response);
	void OnChannelSuccess(class UVivoxResponse* Response);
	void OnChannelFail(class UVivoxResponse* Response);
	void OnAddKeySuccess(class UVivoxResponse* Response);
	void OnAddKeyFail(class UVivoxResponse* Response);
};


// Class TslGame.WeaponAnimInfoComponent
// 0x0060 (0x0150 - 0x00F0)
class UWeaponAnimInfoComponent : public UActorComponent
{
public:
	struct FName                                       WeaponAttachPointPistol;                                  // 0x00F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifle;                                   // 0x00F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointThrowable;                               // 0x0100(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointMelee;                                   // 0x0108(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0110(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Primary;                               // 0x0118(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Secondary;                             // 0x0120(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Sidearm;                               // 0x0128(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Melee;                                 // 0x0130(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Thrown;                                // 0x0138(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       WeaponLeftHandIKAttachPoint;                              // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponAnimInfoComponent");
		return ptr;
	}


	void SetAccessorySlot(class UTslAccessoryComponent* NewAccessoryComponent, TEnumAsByte<EAccessorySlot> Slot);
	bool HasWeaponLeftHandIKSocket(class ATslWeapon* Weapon);
	struct FTransform GetWeaponLeftHandIKTransform(class ATslWeapon* Weapon);
	struct FTransform GetWeaponHandIK_Right(class ATslWeapon* Weapon);
	struct FTransform GetWeaponHandIK_Left(class ATslWeapon* Weapon);
	class ATslWeapon* GetCurrentWeapon();
	class UTslAccessoryComponent* GetAccessorySlot(TEnumAsByte<EAccessorySlot> Slot);
};


// Class TslGame.CharacterWeaponAnimInfoComponent
// 0x0038 (0x0188 - 0x0150)
class UCharacterWeaponAnimInfoComponent : public UWeaponAnimInfoComponent
{
public:
	struct FName                                       WeaponAttachPointPistolDriving;                           // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointPistolSitting;                           // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleDriving;                            // 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleSitting;                            // 0x0168(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleAim;                                // 0x0170(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointThrowableDriving;                        // 0x0178(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointMeleeDriving;                            // 0x0180(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterWeaponAnimInfoComponent");
		return ptr;
	}

};


// Class TslGame.WeaponClone
// 0x0018 (0x0040 - 0x0028)
class UWeaponClone : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class ATslWeapon*                                  ClonedWeapon;                                             // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponClone");
		return ptr;
	}


	void Update();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
