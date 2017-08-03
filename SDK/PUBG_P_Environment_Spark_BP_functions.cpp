// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AP_Environment_Spark_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.UserConstructionScript");

	AP_Environment_Spark_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AP_Environment_Spark_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.ReceiveBeginPlay");

	AP_Environment_Spark_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 Velocity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AP_Environment_Spark_BP_C::BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const class Vector3D& Location, const class Vector3D& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature");

	AP_Environment_Spark_BP_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.ExecuteUbergraph_P_Environment_Spark_BP
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AP_Environment_Spark_BP_C::ExecuteUbergraph_P_Environment_Spark_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Environment_Spark_BP.P_Environment_Spark_BP_C.ExecuteUbergraph_P_Environment_Spark_BP");

	AP_Environment_Spark_BP_C_ExecuteUbergraph_P_Environment_Spark_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
