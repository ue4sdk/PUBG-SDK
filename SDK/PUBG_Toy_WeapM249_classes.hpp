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

// BlueprintGeneratedClass Toy_WeapM249.Toy_WeapM249_C
// 0x0008 (0x0C08 - 0x0C00)
class AToy_WeapM249_C : public AWeapM249_C
{
public:
	class UArrowComponent*                             ZeroArrow_1;                                              // 0x0C00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Toy_WeapM249.Toy_WeapM249_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
