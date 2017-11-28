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

// Function BP_KillMessageListWidget.BP_KillMessageListWidget_C.AddKillMessage
struct UBP_KillMessageListWidget_C_AddKillMessage_Params
{
	struct FDeathMessage                               Input;                                                    // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_KillMessageListWidget.BP_KillMessageListWidget_C.UpdateMessageListWidget
struct UBP_KillMessageListWidget_C_UpdateMessageListWidget_Params
{
};

// Function BP_KillMessageListWidget.BP_KillMessageListWidget_C.ExecuteUbergraph_BP_KillMessageListWidget
struct UBP_KillMessageListWidget_C_ExecuteUbergraph_BP_KillMessageListWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
