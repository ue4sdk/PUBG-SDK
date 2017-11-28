#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DefaultRifleSetting.DefaultRifleSetting_C.UserConstructionScript
struct ADefaultRifleSetting_C_UserConstructionScript_Params
{
};

// Function DefaultRifleSetting.DefaultRifleSetting_C.ReceiveTick
struct ADefaultRifleSetting_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DefaultRifleSetting.DefaultRifleSetting_C.ExecuteUbergraph_DefaultRifleSetting
struct ADefaultRifleSetting_C_ExecuteUbergraph_DefaultRifleSetting_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
