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

// BlueprintGeneratedClass Toy_WeapWinchester.Toy_WeapWinchester_C
// 0x0008 (0x0C08 - 0x0C00)
class AToy_WeapWinchester_C : public AWeapWinchester_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C00(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Toy_WeapWinchester.Toy_WeapWinchester_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Toy_WeapWinchester(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
