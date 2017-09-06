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

// BlueprintGeneratedClass Toy_WeapMk14.Toy_WeapMk14_C
// 0x0008 (0x0C08 - 0x0C00)
class AToy_WeapMk14_C : public AWeapMk14_C
{
public:
	class UArrowComponent*                             ZeroArrow_1;                                              // 0x0C00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Toy_WeapMk14.Toy_WeapMk14_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
