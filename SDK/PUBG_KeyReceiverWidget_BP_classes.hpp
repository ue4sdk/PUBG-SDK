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

// WidgetBlueprintGeneratedClass KeyReceiverWidget_BP.KeyReceiverWidget_BP_C
// 0x0000 (0x0318 - 0x0318)
class UKeyReceiverWidget_BP_C : public UTslKeyReceiverWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyReceiverWidget_BP.KeyReceiverWidget_BP_C");
		return ptr;
	}


	struct FLinearColor GetBorderColorAndOpacity();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
