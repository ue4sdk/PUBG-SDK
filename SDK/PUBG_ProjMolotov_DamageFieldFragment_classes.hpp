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

// BlueprintGeneratedClass ProjMolotov_DamageFieldFragment.ProjMolotov_DamageFieldFragment_C
// 0x0008 (0x03E0 - 0x03D8)
class AProjMolotov_DamageFieldFragment_C : public ATslDamageField
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjMolotov_DamageFieldFragment.ProjMolotov_DamageFieldFragment_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
