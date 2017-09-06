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

// BlueprintGeneratedClass Toy_WeapNagantM1895.Toy_WeapNagantM1895_C
// 0x0008 (0x0B78 - 0x0B70)
class AToy_WeapNagantM1895_C : public AWeapNagantM1895_C
{
public:
	class UArrowComponent*                             ZeroArrow_1;                                              // 0x0B70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Toy_WeapNagantM1895.Toy_WeapNagantM1895_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
