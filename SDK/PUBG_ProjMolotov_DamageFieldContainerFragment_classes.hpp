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

// BlueprintGeneratedClass ProjMolotov_DamageFieldContainerFragment.ProjMolotov_DamageFieldContainerFragment_C
// 0x0008 (0x03E8 - 0x03E0)
class AProjMolotov_DamageFieldContainerFragment_C : public ATslDamageFieldContainer
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjMolotov_DamageFieldContainerFragment.ProjMolotov_DamageFieldContainerFragment_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
