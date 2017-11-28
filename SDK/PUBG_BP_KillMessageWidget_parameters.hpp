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

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetMessageColorAndOpacity
struct UBP_KillMessageWidget_C_SetMessageColorAndOpacity_Params
{
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetFontStyleAndSize
struct UBP_KillMessageWidget_C_SetFontStyleAndSize_Params
{
	class UTextBlock*                                  Text;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Style;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Size;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetLayoutTo
struct UBP_KillMessageWidget_C_SetLayoutTo_Params
{
	bool                                               bIsHighlight;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage_Implementation
struct UBP_KillMessageWidget_C_SetDeathMessage_Implementation_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage
struct UBP_KillMessageWidget_C_SetDeathMessage_Params
{
	struct FDeathMessage*                              InDeathMessage;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.ExecuteUbergraph_BP_KillMessageWidget
struct UBP_KillMessageWidget_C_ExecuteUbergraph_BP_KillMessageWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
