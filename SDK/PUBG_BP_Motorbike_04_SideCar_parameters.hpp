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

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ProcessCamera
struct ABP_Motorbike_04_SideCar_C_ProcessCamera_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.Process_FuelConsumption
struct ABP_Motorbike_04_SideCar_C_Process_FuelConsumption_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InitCache
struct ABP_Motorbike_04_SideCar_C_InitCache_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.UserConstructionScript
struct ABP_Motorbike_04_SideCar_C_UserConstructionScript_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveBeginPlay
struct ABP_Motorbike_04_SideCar_C_ReceiveBeginPlay_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveTick
struct ABP_Motorbike_04_SideCar_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8
struct ABP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8_Params
{
	float                                              AxisValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14
struct ABP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14_Params
{
	float                                              AxisValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.OnDeath_Event_1
struct ABP_Motorbike_04_SideCar_C_OnDeath_Event_1_Params
{
	float                                              KillingDamage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class ATslPlayerState*                             PlayerInstigator;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ExecuteUbergraph_BP_Motorbike_04_SideCar
struct ABP_Motorbike_04_SideCar_C_ExecuteUbergraph_BP_Motorbike_04_SideCar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
