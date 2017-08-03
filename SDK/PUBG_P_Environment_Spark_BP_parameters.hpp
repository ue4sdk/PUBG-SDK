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

// Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.UserConstructionScript
struct AP_Environment_Spark_BP_C_UserConstructionScript_Params
{
};

// Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.ReceiveBeginPlay
struct AP_Environment_Spark_BP_C_ReceiveBeginPlay_Params
{
};

// Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
struct AP_Environment_Spark_BP_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmitterTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Velocity;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.ExecuteUbergraph_P_Environment_Spark_BP
struct AP_Environment_Spark_BP_C_ExecuteUbergraph_P_Environment_Spark_BP_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
