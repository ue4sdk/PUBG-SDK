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

// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanPlugin.StructBoneOverride
// 0x0010
struct FStructBoneOverride
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Density;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TestRadius;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct OceanPlugin.WaveParameter
// 0x0014
struct FWaveParameter
{
	float                                              Rotation;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Length;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Amplitude;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Steepness;                                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeScale;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct OceanPlugin.WaveSetParameters
// 0x00A0
struct FWaveSetParameters
{
	struct FWaveParameter                              Wave01;                                                   // 0x0000(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FWaveParameter                              Wave02;                                                   // 0x0014(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FWaveParameter                              Wave03;                                                   // 0x0028(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FWaveParameter                              Wave04;                                                   // 0x003C(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FWaveParameter                              Wave05;                                                   // 0x0050(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FWaveParameter                              Wave06;                                                   // 0x0064(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FWaveParameter                              Wave07;                                                   // 0x0078(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FWaveParameter                              Wave08;                                                   // 0x008C(0x0014) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct OceanPlugin.TimeDate
// 0x001C
struct FTimeDate
{
	int                                                Millisecond;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Second;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Minute;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Hour;                                                     // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Day;                                                      // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Month;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Year;                                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
