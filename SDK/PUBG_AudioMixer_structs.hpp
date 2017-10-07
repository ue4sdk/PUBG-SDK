#pragma once

// PlayerUnknown's Battlegrounds (2.6.30.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AudioMixer.ESourceEffectFilter
enum class ESourceEffectFilter : uint8_t
{
	ESourceEffectFilter__LowPass   = 0,
	ESourceEffectFilter__HighPass  = 1,
	ESourceEffectFilter__BandPass  = 2,
	ESourceEffectFilter__LowShelf  = 3,
	ESourceEffectFilter__HighShelf = 4,
	ESourceEffectFilter__ESourceEffectFilter_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SoundEffectLowPassFilterSettings
// 0x0008
struct FSoundEffectLowPassFilterSettings
{
	float                                              CutoffFrequency;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Q;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AudioMixer.SourceEffectFilterSettings
// 0x0010
struct FSourceEffectFilterSettings
{
	TEnumAsByte<ESourceEffectFilter>                   FilterType;                                               // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GainDb;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CutoffFrequency;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Q;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AudioMixer.SubmixEffectEQSettings
// 0x0001
struct FSubmixEffectEQSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
