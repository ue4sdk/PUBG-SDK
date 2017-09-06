#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_AudioTest.W_AudioTest_C.SetDistance
struct UW_AudioTest_C_SetDistance_Params
{
	float                                              DistanceInMeters;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function W_AudioTest.W_AudioTest_C.SetText
struct UW_AudioTest_C_SetText_Params
{
	struct FString                                     InText;                                                   // (CPF_Parm, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
