#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
struct UWheeledVehicleMovementComponent_SetUseAutoGears_Params
{
	bool                                               bUseAuto;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
struct UWheeledVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              Throttle;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
struct UWheeledVehicleMovementComponent_SetTargetGear_Params
{
	int                                                GearNum;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bImmediate;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
struct UWheeledVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              Steering;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
struct UWheeledVehicleMovementComponent_SetHandbrakeInput_Params
{
	bool                                               bNewHandbrake;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
struct UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
struct UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params
{
	int                                                GroupFlags;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
struct UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
struct UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params
{
	int                                                GroupFlags;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
struct UWheeledVehicleMovementComponent_SetGearUp_Params
{
	bool                                               bNewGearUp;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
struct UWheeledVehicleMovementComponent_SetGearDown_Params
{
	bool                                               bNewGearDown;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
struct UWheeledVehicleMovementComponent_SetBrakeInput_Params
{
	float                                              Brake;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
struct UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
struct UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params
{
	int                                                GroupFlags;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
struct UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
struct UWheeledVehicleMovementComponent_ServerUpdateState_Params
{
	float                                              InSteeringInput;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InThrottleInput;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InBrakeInput;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InHandbrakeInput;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentGear;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured
struct UWheeledVehicleMovementComponent_OnRep_TirePunctured_Params
{
	TArray<bool>                                       LastTirePunctured;                                        // (CPF_Parm, CPF_ZeroConstructor)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
struct UWheeledVehicleMovementComponent_GetUseAutoGears_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
struct UWheeledVehicleMovementComponent_GetTargetGear_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
struct UWheeledVehicleMovementComponent_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
struct UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
struct UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
struct UWheeledVehicleMovementComponent_GetCurrentGear_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.IsInAir
struct UVehicleWheel_IsInAir_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
struct UVehicleWheel_GetSuspensionOffset_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetSteerAngle
struct UVehicleWheel_GetSteerAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetRotationAngle
struct UVehicleWheel_GetRotationAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetLongitudinalSlip
struct UVehicleWheel_GetLongitudinalSlip_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetLateralSlip
struct UVehicleWheel_GetLateralSlip_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
struct UVehicleAnimInstance_GetVehicle_Params
{
	class AWheeledVehicle*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
struct USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params
{
	float                                              SteerAngle;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WheelIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
struct USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params
{
	float                                              DriveTorque;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WheelIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
struct USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params
{
	float                                              BrakeTorque;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WheelIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
