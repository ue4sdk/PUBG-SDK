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

// BlueprintGeneratedClass Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C
// 0x0014 (0x0414 - 0x0400)
class ABuff_FinalSpreadReduce_C : public ATslBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalSpreadFactor;                                        // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartBuffBlueprint();
	void StopBuffBlueprint(bool* bCanceled);
	void ExecuteUbergraph_Buff_FinalSpreadReduce(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
