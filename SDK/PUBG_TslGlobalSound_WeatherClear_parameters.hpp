#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.UserConstructionScript
struct ATslGlobalSound_WeatherClear_C_UserConstructionScript_Params
{
};

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveBeginPlay
struct ATslGlobalSound_WeatherClear_C_ReceiveBeginPlay_Params
{
};

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveEndPlay
struct ATslGlobalSound_WeatherClear_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ExecuteUbergraph_TslGlobalSound_WeatherClear
struct ATslGlobalSound_WeatherClear_C_ExecuteUbergraph_TslGlobalSound_WeatherClear_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
