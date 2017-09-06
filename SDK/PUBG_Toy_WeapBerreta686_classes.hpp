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

// BlueprintGeneratedClass Toy_WeapBerreta686.Toy_WeapBerreta686_C
// 0x0008 (0x0C08 - 0x0C00)
class AToy_WeapBerreta686_C : public AWeapBerreta686_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C00(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Toy_WeapBerreta686.Toy_WeapBerreta686_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Toy_WeapBerreta686(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
