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

// BlueprintGeneratedClass M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C
// 0x0030 (0x0418 - 0x03E8)
class AM_Flashbang_Blind_01_BP_C : public ATslPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _____1______0_AFF6D5134D79CE6B543B1D8991A51AF6;           // 0x03F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____1__Direction_AFF6D5134D79CE6B543B1D8991A51AF6;       // 0x03FC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          АР„З|·xЗ_2;                                               // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _____0______0_2FD5CA0D48A747A9C536689E48D8A2F7;           // 0x0408(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_2FD5CA0D48A747A9C536689E48D8A2F7;       // 0x040C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          АР„З|·xЗ_1;                                               // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void АР„З|·xЗ_();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_M_Flashbang_Blind_01_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
