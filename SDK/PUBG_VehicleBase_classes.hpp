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

// BlueprintGeneratedClass VehicleBase.VehicleBase_C
// 0x01BC (0x0824 - 0x0668)
class AVehicleBase_C : public ATslWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0668(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        BoostLight;                                               // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        LowFuelLight;                                             // 0x0678(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        TailLamp_3;                                               // 0x0680(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        TailLamp_2;                                               // 0x0688(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         HeadLamp_3;                                               // 0x0690(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         HeadLamp_2;                                               // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x06A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x06A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x06B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x06B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                              // 0x06C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactModifier;                                           // 0x06C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactAbsorption;                                         // 0x06CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactModifierUpsideDown;                                 // 0x06D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactAbsorptionUpsideDown;                               // 0x06D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FuelConsumptionModifierBoost;                             // 0x06D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactAbsorptionPassenger;                                // 0x06DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactAbsorptionPassengerUpsideDown;                      // 0x06E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LaunchVelocityFactorOnHitCharacter;                       // 0x06E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsLightsOn : 1;                                           // 0x06E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsBrakeEngaging : 1;                                      // 0x06E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsReverseEngaging : 1;                                    // 0x06EA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsHandBraking : 1;                                        // 0x06EB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BrakeLightIntensity_On;                                   // 0x06EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BrakeLightIntensity_Off;                                  // 0x06F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadius_Inner;                                    // 0x06F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadius_Outer;                                    // 0x06F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DamageCurve;                                              // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Throttle;                                                 // 0x0708(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FuelConsumptionCurve;                                     // 0x0710(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FuelEfficiency;                                           // 0x0718(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	class UTslWheeledVehicleMovement*                  TslWheeledVehicleMovementRef;                             // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslPlayerController*                        DriveControllerrRef;                                      // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      WheelsLatSlip_1;                                          // 0x0730(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsLongSlip_1;                                         // 0x0740(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              FuelConsumptionModifierIdle;                              // 0x0750(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedKPH_1;                                               // 0x0754(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      WheelsSuspensionOffset_1;                                 // 0x0758(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UPhysicalMaterial*>                   WheelsContactSurface_1;                                   // 0x0768(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsRotationSpeed;                                      // 0x0778(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsSuspensionMaxDrop_1;                                // 0x0788(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsSuspensionMaxRaise_1;                               // 0x0798(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              RPM_1;                                                    // 0x07A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestBoostingAKEvent : 1;                                  // 0x07AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestBoostingAKEvent_prev : 1;                             // 0x07AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestThrottlingAKEvent : 1;                                // 0x07AE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestThrottlingAKEvent_prev : 1;                           // 0x07AF(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestSteeringAKEvent : 1;                                  // 0x07B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestSteeringAKEvent_prev : 1;                             // 0x07B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x07B2(0x0002) MISSED OFFSET
	float                                              Brake_1;                                                  // 0x07B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestBrakingAKEvent : 1;                                   // 0x07B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07B9(0x0007) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   TestWheelsContactSurface_prev_1;                          // 0x07C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      TestBrakingAKEvent_prev : 1;                              // 0x07D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	TArray<float>                                      WheelsSuspensionOffsetNorm;                               // 0x07D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsWaterDepth_1;                                       // 0x07E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              FlatTireCount_1;                                          // 0x07F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseDynamicCamera : 1;                                    // 0x07FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	class Vector3D                                     LastVelocity;                                             // 0x0800(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     Acceleration;                                             // 0x080C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTickFuelIndicator : 1;                                   // 0x0818(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTickBoostIndicator : 1;                                  // 0x0819(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x081A(0x0002) MISSED OFFSET
	float                                              LowFuelLevel;                                             // 0x081C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LastFuelConsumptionTime;                                  // 0x0820(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleBase.VehicleBase_C");
		return ptr;
	}


	void TickIndicators();
	void TickDynamicCamera();
	void TickBrakeSoundTest();
	void TickThrottleSoundTest();
	void TickBoostSoundTest();
	void TickFuelConsumption(float DeltaSeconds);
	void TickBasicInfoCaching();
	void TickWheelCaching();
	void TickWheelSound();
	void OnRep_IsBrakeEngaged();
	void OnRep_isLightsOn();
	void UserConstructionScript();
	void InpActEvt_Handbrake_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Handbrake_K2Node_InputActionEvent_3(const struct FKey& Key);
	void ToggleLights();
	void BrakeLampOn();
	void BrakeLampOff();
	void ReceiveTick(float* DeltaSeconds);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8(float AxisValue);
	void ReceiveBeginPlay();
	void TurnOffLight(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16(float AxisValue);
	void EventFuelConsumption();
	void ExecuteUbergraph_VehicleBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
