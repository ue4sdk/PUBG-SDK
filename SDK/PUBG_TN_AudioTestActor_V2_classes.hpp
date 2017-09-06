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

// BlueprintGeneratedClass TN_AudioTestActor_V2.TN_AudioTestActor_V2_C
// 0x0050 (0x03F0 - 0x03A0)
class ATN_AudioTestActor_V2_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAkComponent*                                Ak;                                                       // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APlayerPawn_v2_C*                            ParentRef;                                                // 0x03C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UAkAudioEvent*>                       AkEventTable;                                             // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UW_AudioTest_C*                              WidgetRef;                                                // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SelectIndex;                                              // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TriggerRate;                                              // 0x03EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_AudioTestActor_V2.TN_AudioTestActor_V2_C");
		return ptr;
	}


	void PrintDistance(float DistanceInMeters);
	void PlayAudioRetrigger();
	void Retrigger();
	void PrintText(const struct FString& InText);
	void SetSwitch(const struct FString& Group, const struct FString& Param);
	void SetNextSound(bool bForward);
	void Destroy();
	void PlayAudio();
	void Initialize(class APlayerPawn_v2_C* Parent);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_TN_AudioTestActor_V2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
