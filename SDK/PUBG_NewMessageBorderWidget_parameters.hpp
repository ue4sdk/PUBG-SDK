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

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.TickMove
struct UNewMessageBorderWidget_C_TickMove_Params
{
	float                                              Time;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.UpdatePositionInfo
struct UNewMessageBorderWidget_C_UpdatePositionInfo_Params
{
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.IsFull
struct UNewMessageBorderWidget_C_IsFull_Params
{
	bool                                               Full;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.SetSizeRule
struct UNewMessageBorderWidget_C_SetSizeRule_Params
{
	TEnumAsByte<ESlateSizeRule>                        TopSize;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESlateSizeRule>                        BottomSize;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.OnRemoveMessage
struct UNewMessageBorderWidget_C_OnRemoveMessage_Params
{
	class UNewSystemMessageWidget_C*                   SystemMessageWidget;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.AddMessage
struct UNewMessageBorderWidget_C_AddMessage_Params
{
	class UNewSystemMessageWidget_C*                   Message;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.DisplayKilledMessage
struct UNewMessageBorderWidget_C_DisplayKilledMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (CPF_Parm)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Construct
struct UNewMessageBorderWidget_C_Construct_Params
{
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Tick
struct UNewMessageBorderWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.ExecuteUbergraph_NewMessageBorderWidget
struct UNewMessageBorderWidget_C_ExecuteUbergraph_NewMessageBorderWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
