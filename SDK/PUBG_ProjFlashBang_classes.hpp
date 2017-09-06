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

// BlueprintGeneratedClass ProjFlashBang.ProjFlashBang_C
// 0x0058 (0x0520 - 0x04C8)
class AProjFlashBang_C : public ATslProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             Audio1;                                                   // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslCharacter*                               LocalShooterCharacter;                                    // 0x04D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     ExplodeLocation;                                          // 0x04E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FlashbangEffectClass;                                     // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UAkAudioEvent*>                       TinnitusSoundAks;                                         // 0x04F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              MinPower;                                                 // 0x0508(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 AnglePower;                                               // 0x0510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 DistancePower;                                            // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjFlashBang.ProjFlashBang_C");
		return ptr;
	}


	void GetFlashBangDistance(float* FlashBangDistance);
	void GetCameraToFlashBangAngle(float* Angle);
	void GetTinnitusSoundIndex(int* Index);
	void SpawnFlashBangCaputeEffect(class ACharacter* ShooterCharacter);
	void SpawnFlashBangEffect(float FlashBangDistance);
	void PlayTinnitusSound(int Index);
	void UserConstructionScript();
	void OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExplodeBP(class Vector3D* Location, class Rotator* Rotation, struct FHitResult* Impact, float* Radius);
	void BreakLoop();
	void ExecuteUbergraph_ProjFlashBang(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
