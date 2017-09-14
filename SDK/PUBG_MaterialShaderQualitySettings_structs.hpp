#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality
{
	EMobileCSMQuality__NoFiltering = 0,
	EMobileCSMQuality__PCF_1x1     = 1,
	EMobileCSMQuality__PCF_2x2     = 2,
	EMobileCSMQuality__EMobileCSMQuality_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0006
struct FMaterialQualityOverrides
{
	unsigned char                                      bEnableOverride : 1;                                      // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bForceFullyRough : 1;                                     // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bForceNonMetal : 1;                                       // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bForceDisableLMDirectionality : 1;                        // 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bForceLQReflections : 1;                                  // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<EMobileCSMQuality>                     MobileCSMQuality;                                         // 0x0005(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
