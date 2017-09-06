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

// BlueprintGeneratedClass ProjMolotov_DamageFieldContainer.ProjMolotov_DamageFieldContainer_C
// 0x0008 (0x03E8 - 0x03E0)
class AProjMolotov_DamageFieldContainer_C : public ATslDamageFieldContainer
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjMolotov_DamageFieldContainer.ProjMolotov_DamageFieldContainer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
