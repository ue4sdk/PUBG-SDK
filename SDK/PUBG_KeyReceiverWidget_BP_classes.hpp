#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass KeyReceiverWidget_BP.KeyReceiverWidget_BP_C
	// 0x0000 (0x0318 - 0x0318)
	class UKeyReceiverWidget_BP_C : public UTslKeyReceiverWidget {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xcc92edf7);
			return ptr;
		}


		struct FLinearColor GetBorderColorAndOpacity();
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
