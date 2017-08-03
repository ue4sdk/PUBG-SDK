#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PoisonFogPrefab.PoisonFogPrefab_C
// 0x0058 (0x0400 - 0x03A8)
class APoisonFogPrefab_C : public APoisonEffectBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        Toxic_Cylinder_outer_Depth;                               // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Toxic_Cylinder_outer;                                     // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Toxic_Cylinder_Inner_Depth;                               // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Toxic_Cylinder_Inner;                                     // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _____0_Intensity_994F1CA04776742938FE4BBD159E80E3;        // 0x03D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_994F1CA04776742938FE4BBD159E80E3;       // 0x03D4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          АР„З|·xЗ_1;                                               // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Center;                                                   // 0x03E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x03EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APostProcessVolume*                          PPVolume;                                                 // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class UMaterial*                                   PPMaterial;                                               // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PoisonFogPrefab.PoisonFogPrefab_C");
		return ptr;
	}


	void UserConstructionScript();
	void АР„З|·xЗ_();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void SetRadius(float* Radius);
	void SetCenter(class Vector3D* Center);
	void ExecuteUbergraph_PoisonFogPrefab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
