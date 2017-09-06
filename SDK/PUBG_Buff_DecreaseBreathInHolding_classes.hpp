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

// BlueprintGeneratedClass Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C
// 0x0010 (0x0418 - 0x0408)
class ABuff_DecreaseBreathInHolding_C : public ACharacterBreathBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void TickBuff();
	void ExecuteUbergraph_Buff_DecreaseBreathInHolding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
