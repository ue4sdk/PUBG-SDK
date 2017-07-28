#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleSeatBase_Moto.VehicleSeatBase_Moto_C
// 0x0024 (0x0444 - 0x0420)
class AVehicleSeatBase_Moto_C : public ATslMotoSeatActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            VehicleSeatInteractionCollision;                          // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UInteractionComponent*                       Interaction;                                              // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastInteractionTime;                                      // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleSeatBase_Moto.VehicleSeatBase_Moto_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature(class ATslCharacter* OtherCharacter);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_VehicleSeatBase_Moto(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
