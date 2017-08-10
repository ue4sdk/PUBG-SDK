#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.39 Test Server) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterStudio_Default.CharacterStudio_Default_C
// 0x0000 (0x0420 - 0x0420)
class ACharacterStudio_Default_C : public ACharacterStudio
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterStudio_Default.CharacterStudio_Default_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
