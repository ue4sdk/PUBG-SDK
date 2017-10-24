#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ObserverTagManagerWidget.ObserverTagManagerWidget_C
// 0x0018 (0x0258 - 0x0240)
class UObserverTagManagerWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class UPlayerHeadWidget_C*>                 PlayerHeadWidgets;                                        // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObserverTagManagerWidget.ObserverTagManagerWidget_C");
		return ptr;
	}


	void RemoveReplicateCharacter(TArray<class ATslCharacter*>* Characters);
	void AddReplicateCharacter(TArray<class ATslCharacter*>* Characters);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_ObserverTagManagerWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
