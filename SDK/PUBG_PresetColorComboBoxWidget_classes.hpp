#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C
	// 0x0000 (0x0290 - 0x0290)
	class UPresetColorComboBoxWidget_C : public UQualityComboBox_C {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x2f86559d);
			return ptr;
		}


		class UWidget* On_ComboBox_GenerateWidget_1(struct FString* Item);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
