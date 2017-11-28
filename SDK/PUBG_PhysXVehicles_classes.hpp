#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PhysXVehicles.WheeledVehicle
// 0x0010 (0x0420 - 0x0410)
class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWheeledVehicleMovementComponent*            VehicleMovement;                                          // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc020a8e2);
		return ptr;
	}

};


// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0170 (0x03D0 - 0x0260)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	unsigned char                                      bDeprecatedSpringOffsetMode : 1;                          // 0x0268(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<bool>                                       TirePunctured;                                            // 0x0270(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FWheelSetup>                         WheelSetups;                                              // 0x0280(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Mass;                                                     // 0x0290(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x0294(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChassisWidth;                                             // 0x0298(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChassisHeight;                                            // 0x029C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReverseAsBrake;                                          // 0x02A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              DragArea;                                                 // 0x02A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              EstimatedMaxEngineSpeed;                                  // 0x02A8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              MaxEngineRPM;                                             // 0x02AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugDragMagnitude;                                       // 0x02B0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x02B4(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              MinNormalizedTireLoad;                                    // 0x02C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinNormalizedTireLoadFiltered;                            // 0x02C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxNormalizedTireLoad;                                    // 0x02C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxNormalizedTireLoadFiltered;                            // 0x02CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThresholdLongitudinalSpeed;                               // 0x02D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LowForwardSpeedSubStepCount;                              // 0x02D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HighForwardSpeedSubStepCount;                             // 0x02D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	TArray<class UVehicleWheel*>                       Wheels;                                                   // 0x02E0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData04[0x18];                                      // 0x02F0(0x0018) MISSED OFFSET
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	float                                              RVOAvoidanceRadius;                                       // 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RVOAvoidanceHeight;                                       // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AvoidanceConsiderationRadius;                             // 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RVOSteeringStep;                                          // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RVOThrottleStep;                                          // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x0334(0x000C) (CPF_IsPlainOldData)
	struct FReplicatedVehicleState                     ReplicatedState;                                          // 0x0340(0x0014) (CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	float                                              RawSteeringInput;                                         // 0x0358(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RawThrottleInput;                                         // 0x035C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RawBrakeInput;                                            // 0x0360(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bRawHandbrakeInput : 1;                                   // 0x0364(0x0001) (CPF_Transient)
	unsigned char                                      bRawGearUpInput : 1;                                      // 0x0364(0x0001) (CPF_Transient)
	unsigned char                                      bRawGearDownInput : 1;                                    // 0x0364(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	float                                              SteeringInput;                                            // 0x0368(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x036C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              BrakeInput;                                               // 0x0370(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x0374(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              IdleBrakeInput;                                           // 0x0378(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StopThreshold;                                            // 0x037C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WrongDirectionThreshold;                                  // 0x0380(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVehicleInputRate                           ThrottleInputRate;                                        // 0x0384(0x0008) (CPF_Edit)
	struct FVehicleInputRate                           BrakeInputRate;                                           // 0x038C(0x0008) (CPF_Edit)
	struct FVehicleInputRate                           HandbrakeInputRate;                                       // 0x0394(0x0008) (CPF_Edit)
	struct FVehicleInputRate                           SteeringInputRate;                                        // 0x039C(0x0008) (CPF_Edit)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x03A4(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData08[0x2B];                                      // 0x03A5(0x002B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9734c826);
		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear);
	void OnRep_TirePunctured(TArray<bool> LastTirePunctured);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};


// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0160 (0x0530 - 0x03D0)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleEngineData                          EngineSetup;                                              // 0x03D0(0x0090) (CPF_Edit)
	struct FVehicleDifferential4WData                  DifferentialSetup;                                        // 0x0460(0x001C) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FVehicleTransmissionData                    TransmissionSetup;                                        // 0x0480(0x0030) (CPF_Edit)
	struct FRuntimeFloatCurve                          SteeringCurve;                                            // 0x04B0(0x0078) (CPF_Edit)
	float                                              AckermannAccuracy;                                        // 0x0528(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x052C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x79fe4edd);
		return ptr;
	}

};


// Class PhysXVehicles.VehicleWheel
// 0x00E0 (0x0108 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                                 CollisionMesh;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bDontCreateShape;                                         // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bAutoAdjustCollisionSize;                                 // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x0034(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              ShapeRadius;                                              // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShapeWidth;                                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mass;                                                     // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRate;                                              // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SteerAngle;                                               // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAffectedByHandbrake;                                     // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class UTireType*                                   TireType;                                                 // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTireConfig*                                 TireConfig;                                               // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LatStiffMaxLoad;                                          // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LatStiffValue;                                            // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LongStiffValue;                                           // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionForceOffset;                                    // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionForceOffsetX;                                   // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SuspensionTravelDir;                                      // 0x007C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     TireForceOffset;                                          // 0x0088(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              SuspensionMaxRaise;                                       // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionMaxDrop;                                        // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionNaturalFrequency;                               // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionDampingRatio;                                   // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBrakeTorque;                                           // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHandBrakeTorque;                                       // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     QueryChannel;                                             // 0x00AC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            VehicleSim;                                               // 0x00B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                WheelIndex;                                               // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLongSlip;                                            // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLatSlip;                                             // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugNormalizedTireLoad;                                  // 0x00C4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C8(0x0004) MISSED OFFSET
	float                                              DebugWheelTorque;                                         // 0x00CC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLongForce;                                           // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLatForce;                                            // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x00D8(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     OldLocation;                                              // 0x00E4(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x00F0(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x00FC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe7a8a289);
		return ptr;
	}


	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
	float GetLongitudinalSlip();
	float GetLateralSlip();
};


// Class PhysXVehicles.VehicleAnimInstance
// 0x0518 (0x0890 - 0x0378)
class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x4F8];                                     // 0x0378(0x04F8) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                          // 0x0870(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bUseSupsensionInterpolation;                              // 0x0878(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0879(0x0003) MISSED OFFSET
	float                                              VehicleSuspensionInterpSpeed_ContactUpwards;              // 0x087C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VehicleSuspensionInterpSpeed_Contact;                     // 0x0880(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VehicleSuspensionInterpSpeed_NoContact;                   // 0x0884(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0888(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xff9361ca);
		return ptr;
	}


	class AWheeledVehicle* GetVehicle();
};


// Class PhysXVehicles.TireConfig
// 0x0020 (0x0050 - 0x0030)
class UTireConfig : public UDataAsset
{
public:
	float                                              FrictionScale;                                            // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FTireConfigMaterialFriction>         TireFrictionScales;                                       // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc209385c);
		return ptr;
	}

};


// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000 (0x03D0 - 0x03D0)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbbbe156c);
		return ptr;
	}


	void SetSteerAngle(float SteerAngle, int WheelIndex);
	void SetDriveTorque(float DriveTorque, int WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int WheelIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
