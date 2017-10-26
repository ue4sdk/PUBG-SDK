#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass OptionTitleWidget.OptionTitleWidget_C
	// 0x0018 (0x0258 - 0x0240)
	class UOptionTitleWidget_C : public UUserWidget {
	public:
		struct FText                                       DisplayTitleText;                                         // 0x0240(0x0018) (CPF_Edit, CPF_BlueprintVisible)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x1256e211);
			return ptr;
		}


		struct FText GetText_1();
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
