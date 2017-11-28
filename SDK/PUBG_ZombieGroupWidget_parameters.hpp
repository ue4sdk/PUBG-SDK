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

// Function ZombieGroupWidget.ZombieGroupWidget_C.CreateObserverMatchResultInfoWidget
struct UZombieGroupWidget_C_CreateObserverMatchResultInfoWidget_Params
{
};

// Function ZombieGroupWidget.ZombieGroupWidget_C.AddPlayerMatchResultInfo
struct UZombieGroupWidget_C_AddPlayerMatchResultInfo_Params
{
	struct FTslPlayerMatchResultInfo                   TslPlayerMatchResultInfo;                                 // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
