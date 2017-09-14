#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// 0x0048 (0x0070 - 0x0028)
class ULightPropagationVolumeBlendable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FLightPropagationVolumeSettings             Settings;                                                 // 0x0030(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	float                                              BlendWeight;                                              // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
