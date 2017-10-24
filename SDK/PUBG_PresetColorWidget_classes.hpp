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

// WidgetBlueprintGeneratedClass PresetColorWidget.PresetColorWidget_C
// 0x0028 (0x0268 - 0x0240)
class UPresetColorWidget_C : public UUserWidget
{
public:
	struct FText                                       DisplayName;                                              // 0x0240(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                Color;                                                    // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PresetColorWidget.PresetColorWidget_C");
		return ptr;
	}


	struct FLinearColor GetContentColorAndOpacity_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
