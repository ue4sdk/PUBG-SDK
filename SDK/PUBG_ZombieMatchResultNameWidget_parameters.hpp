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

// Function ZombieMatchResultNameWidget.ZombieMatchResultNameWidget_C.UpdatePlayerMatchResultInfo
struct UZombieMatchResultNameWidget_C_UpdatePlayerMatchResultInfo_Params
{
	struct FTslPlayerMatchResultInfo                   TslPlayerMatchResultInfo;                                 // (CPF_Parm)
	bool                                               IsFirst;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
