#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass SlotBaseWidget.SlotBaseWidget_C
	// 0x0010 (0x0250 - 0x0240)
	class USlotBaseWidget_C : public UUserWidget {
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
		class UAkAudioEvent*                               MouseOverSound;                                           // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xc7c3b27b);
			return ptr;
		}


		void IsPlayCharacterPickupAnim(bool* bIsPickup);
		void IsCharacterCasting(bool* IsCasting);
		void PlaySoundAk(class UAkAudioEvent* SoundAk);
		void Construct();
		void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
		void ExecuteUbergraph_SlotBaseWidget(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
