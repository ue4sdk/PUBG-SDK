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

// BlueprintGeneratedClass WeapKar98k.WeapKar98k_C
// 0x0010 (0x0C08 - 0x0BF8)
class AWeapKar98k_C : public ADefaultRifleSetting_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UArrowComponent*                             ZeroArrow;                                                // 0x0C00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapKar98k.WeapKar98k_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WeapKar98k(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
