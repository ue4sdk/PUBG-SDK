#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VehicleBase.VehicleBase_C.TickIndicators
struct AVehicleBase_C_TickIndicators_Params
{
};

// Function VehicleBase.VehicleBase_C.TickDynamicCamera
struct AVehicleBase_C_TickDynamicCamera_Params
{
};

// Function VehicleBase.VehicleBase_C.TickBrakeSoundTest
struct AVehicleBase_C_TickBrakeSoundTest_Params
{
};

// Function VehicleBase.VehicleBase_C.TickThrottleSoundTest
struct AVehicleBase_C_TickThrottleSoundTest_Params
{
};

// Function VehicleBase.VehicleBase_C.TickBoostSoundTest
struct AVehicleBase_C_TickBoostSoundTest_Params
{
};

// Function VehicleBase.VehicleBase_C.TickFuelConsumption
struct AVehicleBase_C_TickFuelConsumption_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleBase.VehicleBase_C.TickBasicInfoCaching
struct AVehicleBase_C_TickBasicInfoCaching_Params
{
};

// Function VehicleBase.VehicleBase_C.TickWheelCaching
struct AVehicleBase_C_TickWheelCaching_Params
{
};

// Function VehicleBase.VehicleBase_C.TickWheelSound
struct AVehicleBase_C_TickWheelSound_Params
{
};

// Function VehicleBase.VehicleBase_C.OnRep_IsBrakeEngaged
struct AVehicleBase_C_OnRep_IsBrakeEngaged_Params
{
};

// Function VehicleBase.VehicleBase_C.OnRep_isLightsOn
struct AVehicleBase_C_OnRep_isLightsOn_Params
{
};

// Function VehicleBase.VehicleBase_C.UserConstructionScript
struct AVehicleBase_C_UserConstructionScript_Params
{
};

// Function VehicleBase.VehicleBase_C.InpActEvt_Handbrake_K2Node_InputActionEvent_4
struct AVehicleBase_C_InpActEvt_Handbrake_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function VehicleBase.VehicleBase_C.InpActEvt_Handbrake_K2Node_InputActionEvent_3
struct AVehicleBase_C_InpActEvt_Handbrake_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function VehicleBase.VehicleBase_C.ToggleLights
struct AVehicleBase_C_ToggleLights_Params
{
};

// Function VehicleBase.VehicleBase_C.BrakeLampOn
struct AVehicleBase_C_BrakeLampOn_Params
{
};

// Function VehicleBase.VehicleBase_C.BrakeLampOff
struct AVehicleBase_C_BrakeLampOff_Params
{
};

// Function VehicleBase.VehicleBase_C.ReceiveTick
struct AVehicleBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8
struct AVehicleBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8_Params
{
	float                                              AxisValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleBase.VehicleBase_C.ReceiveBeginPlay
struct AVehicleBase_C_ReceiveBeginPlay_Params
{
};

// Function VehicleBase.VehicleBase_C.TurnOffLight
struct AVehicleBase_C_TurnOffLight_Params
{
	float                                              KillingDamage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class ATslPlayerState*                             PlayerInstigator;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16
struct AVehicleBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16_Params
{
	float                                              AxisValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VehicleBase.VehicleBase_C.EventFuelConsumption
struct AVehicleBase_C_EventFuelConsumption_Params
{
};

// Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase
struct AVehicleBase_C_ExecuteUbergraph_VehicleBase_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
