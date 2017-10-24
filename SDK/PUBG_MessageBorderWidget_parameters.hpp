#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MessageBorderWidget.MessageBorderWidget_C.RemoveMessage
struct UMessageBorderWidget_C_RemoveMessage_Params
{
	class UMessageWidget_C*                            DeleteMessage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MessageBorderWidget.MessageBorderWidget_C.AddMessage
struct UMessageBorderWidget_C_AddMessage_Params
{
	class UMessageWidget_C*                            Message;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MessageBorderWidget.MessageBorderWidget_C.DisplayKilledMessage
struct UMessageBorderWidget_C_DisplayKilledMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
