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

// BlueprintGeneratedClass Item_JerryCan.Item_JerryCan_C
// 0x0008 (0x01C8 - 0x01C0)
class UItem_JerryCan_C : public UCastableItem
{
public:
	unsigned char                                      bIsProcessing : 1;                                        // 0x01C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Fuel;                                                     // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_JerryCan.Item_JerryCan_C");
		return ptr;
	}


	void SendSystemMessage(class ATslCharacter* PlayerController, const struct FText& Message);
	bool IsCastable(class ATslCharacter** Character);
	void Refule(class APawn* Vehicle);
	bool UseBy(class ATslCharacter** Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
