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

// BlueprintGeneratedClass Powerup_Painkillers.Powerup_Painkillers_C
// 0x0010 (0x03F8 - 0x03E8)
class APowerup_Painkillers_C : public APowerup_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                Timer2Handle;                                             // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Powerup_Painkillers.Powerup_Painkillers_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent_1();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Powerup_Painkillers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
