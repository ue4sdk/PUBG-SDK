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

// Function MessageWidget.MessageWidget_C.ClearMessage
struct UMessageWidget_C_ClearMessage_Params
{
};

// Function MessageWidget.MessageWidget_C.Construct
struct UMessageWidget_C_Construct_Params
{
};

// Function MessageWidget.MessageWidget_C.O_1
struct UMessageWidget_C_O_1_Params
{
};

// Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget
struct UMessageWidget_C_ExecuteUbergraph_MessageWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MessageWidget.MessageWidget_C.MessageEnd__DelegateSignature
struct UMessageWidget_C_MessageEnd__DelegateSignature_Params
{
	class UMessageWidget_C*                            Message;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
