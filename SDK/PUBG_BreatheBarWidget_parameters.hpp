#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BreatheBarWidget.BreatheBarWidget_C.IsUnderwater
struct UBreatheBarWidget_C_IsUnderwater_Params
{
	bool                                               bIsWater;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BreatheBarWidget.BreatheBarWidget_C.GetTslCharacter
struct UBreatheBarWidget_C_GetTslCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BreatheBarWidget.BreatheBarWidget_C.GetBreathImageColor
struct UBreatheBarWidget_C_GetBreathImageColor_Params
{
	float                                              Ratio;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BreatheBarWidget.BreatheBarWidget_C.OnPrepass_1
struct UBreatheBarWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BreatheBarWidget.BreatheBarWidget_C.UpdateBreathGauge
struct UBreatheBarWidget_C_UpdateBreathGauge_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BreatheBarWidget.BreatheBarWidget_C.GetBreathRatio
struct UBreatheBarWidget_C_GetBreathRatio_Params
{
	float                                              Breath;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BreatheBarWidget.BreatheBarWidget_C.OnStartBuff
struct UBreatheBarWidget_C_OnStartBuff_Params
{
	struct FName                                       BuffName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStart;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BreatheBarWidget.BreatheBarWidget_C.Construct
struct UBreatheBarWidget_C_Construct_Params
{
};

// Function BreatheBarWidget.BreatheBarWidget_C.Tick
struct UBreatheBarWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BreatheBarWidget.BreatheBarWidget_C.ExecuteUbergraph_BreatheBarWidget
struct UBreatheBarWidget_C_ExecuteUbergraph_BreatheBarWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
