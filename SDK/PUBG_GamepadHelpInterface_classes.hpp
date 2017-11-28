#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GamepadHelpInterface.GamepadHelpInterface_C
// 0x0000 (0x0028 - 0x0028)
class UGamepadHelpInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xaf31717f);
		return ptr;
	}


	void GetGamePadHelpWidgetClass(class UClass** GuideClass);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
