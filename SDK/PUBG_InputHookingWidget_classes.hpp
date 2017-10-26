#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass InputHookingWidget.InputHookingWidget_C
	// 0x0000 (0x0290 - 0x0290)
	class UInputHookingWidget_C : public UBlockInputUserWidget {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x59b10aff);
			return ptr;
		}


		void OnInputAxis(float Scale);
		void OnInputAction();
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
