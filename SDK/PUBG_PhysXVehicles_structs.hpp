#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PhysXVehicles.WheelSetup
// 0x0028
struct FWheelSetup
{
	class UClass*                                      WheelClass;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PuncturedWheelClass;                                      // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AdditionalOffset;                                         // 0x0018(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// 0x0014
struct FReplicatedVehicleState
{
	float                                              SteeringInput;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BrakeInput;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentGear;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleInputRate
// 0x0008
struct FVehicleInputRate
{
	float                                              RiseRate;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FallRate;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleEngineData
// 0x0090
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                              // 0x0000(0x0078) (CPF_Edit)
	float                                              MaxRPM;                                                   // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MOI;                                                      // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateFullThrottle;                                  // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchEngaged;                     // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchDisengaged;                  // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// 0x001C
struct FVehicleDifferential4WData
{
	TEnumAsByte<EVehicleDifferential4W>                DifferentialType;                                         // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FrontRearSplit;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontLeftRightSplit;                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RearLeftRightSplit;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CentreBias;                                               // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontBias;                                                // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RearBias;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleGearData
// 0x000C
struct FVehicleGearData
{
	float                                              Ratio;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DownRatio;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpRatio;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// 0x0030
struct FVehicleTransmissionData
{
	bool                                               bUseGearAutoBox;                                          // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GearSwitchTime;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GearAutoBoxLatency;                                       // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalRatio;                                               // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVehicleGearData>                    ForwardGears;                                             // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              ReverseGearRatio;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NeutralGearUpRatio;                                       // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClutchStrength;                                           // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// 0x0010
struct FTireConfigMaterialFriction
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// 0x0020 (0x04E0 - 0x04C0)
struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x04C0(0x0020) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.PhysXWheelState
// 0x001C
struct FPhysXWheelState
{
	float                                              LongitudinalSlip;                                         // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LateralSlip;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspSpringForce;                                          // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TireFriction;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInAir;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              RotationSpeed;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// 0x0018 (0x0088 - 0x0070)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
