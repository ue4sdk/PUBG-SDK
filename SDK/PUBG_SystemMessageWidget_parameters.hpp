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

// Function SystemMessageWidget.SystemMessageWidget_C.AddMessage
struct USystemMessageWidget_C_AddMessage_Params
{
	class UMessageWidget_C*                            Message;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SystemMessageWidget.SystemMessageWidget_C.DisplaySystemMessage
struct USystemMessageWidget_C_DisplaySystemMessage_Params
{
	TEnumAsByte<ESystemMessageType>                    MessageType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Message;                                                  // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
