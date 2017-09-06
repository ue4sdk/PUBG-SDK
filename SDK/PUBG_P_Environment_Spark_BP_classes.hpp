#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Environment_Spark_BP.P_Environment_Spark_BP_C
// 0x0078 (0x0490 - 0x0418)
class AP_Environment_Spark_BP_C : public ATslParticleEnvironment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class Vector3D                                     SpawnBoxMax;                                              // 0x0420(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     SpawnBoxMin;                                              // 0x042C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Color;                                                    // 0x0438(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnRate;                                                // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnRateLow;                                             // 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     SizeMax;                                                  // 0x044C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     SizeMin;                                                  // 0x0458(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VelocityMax;                                              // 0x0464(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     VelocityMin;                                              // 0x0470(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Lifetime;                                                 // 0x047C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LifeTimeLow;                                              // 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               SparkSoundAk;                                             // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass P_Environment_Spark_BP.P_Environment_Spark_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const class Vector3D& Location, const class Vector3D& Velocity);
	void ExecuteUbergraph_P_Environment_Spark_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
