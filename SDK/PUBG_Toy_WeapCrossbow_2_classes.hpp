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

// BlueprintGeneratedClass Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C
// 0x0010 (0x0C13 - 0x0C03)
class AToy_WeapCrossbow_1_C : public AWeapCrossbow_1_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C08(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TEnumAsByte<ENUM_CrossbowState>                    CurrentState_1;                                           // 0x0C10(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ENUM_CrossbowState>                    LastState_1;                                              // 0x0C11(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bWantsToReload_1 : 1;                                     // 0x0C12(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ServerSetAmmoState(TEnumAsByte<ENUM_CrossbowState>* NewAmmoState);
	void ExecuteUbergraph_Toy_WeapCrossbow_2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
