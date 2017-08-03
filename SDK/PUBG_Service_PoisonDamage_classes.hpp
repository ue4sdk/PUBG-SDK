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

// BlueprintGeneratedClass Service_PoisonDamage.Service_PoisonDamage_C
// 0x0018 (0x00B0 - 0x0098)
class UService_PoisonDamage_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                EverySecondTimer;                                         // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class ABattleRoyaleModeController*                 ModeController;                                           // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Service_PoisonDamage.Service_PoisonDamage_C");
		return ptr;
	}


	void TakeDamageToCharacter(class ATslCharacter* Character, float SafetyRadius, const class Vector3D& SafetyPosition);
	void EverySecond();
	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_Service_PoisonDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
