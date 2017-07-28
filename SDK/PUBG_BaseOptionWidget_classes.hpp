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

// WidgetBlueprintGeneratedClass BaseOptionWidget.BaseOptionWidget_C
// 0x0000 (0x0240 - 0x0240)
class UBaseOptionWidget_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseOptionWidget.BaseOptionWidget_C");
		return ptr;
	}


	void IsKeyUp(bool* Keyup);
	void IsEnableApply(bool* bResult);
	void OnReset();
	void IsChanged(bool* bChanged);
	void OnDefault();
	void OnApply();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
