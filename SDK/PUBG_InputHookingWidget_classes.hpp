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

// WidgetBlueprintGeneratedClass InputHookingWidget.InputHookingWidget_C
// 0x0000 (0x0288 - 0x0288)
class UInputHookingWidget_C : public UBlockInputUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputHookingWidget.InputHookingWidget_C");
		return ptr;
	}


	void OnInputAxis(float Scale);
	void OnInputAction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
