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

// Function MessageHudWidget.MessageHudWidget_C.CreateGamePlayMessage
struct UMessageHudWidget_C_CreateGamePlayMessage_Params
{
	struct FText                                       Message;                                                  // (CPF_Parm)
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TextSize;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseFade_In;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNewSystemMessageWidget_C*                   MessageWidget;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MessageHudWidget.MessageHudWidget_C.OnDisplayMessage
struct UMessageHudWidget_C_OnDisplayMessage_Params
{
	TEnumAsByte<ESystemMessageType>                    MessageType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Message;                                                  // (CPF_Parm)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MessageHudWidget.MessageHudWidget_C.CreateKillMessage
struct UMessageHudWidget_C_CreateKillMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (CPF_Parm)
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateColor                                 TextColor;                                                // (CPF_Parm)
	int                                                TextSize;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseFade_In;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNewSystemMessageWidget_C*                   MessageWidget;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MessageHudWidget.MessageHudWidget_C.CreateSystemMessage
struct UMessageHudWidget_C_CreateSystemMessage_Params
{
	struct FText                                       Message;                                                  // (CPF_Parm)
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateColor                                 TextColor;                                                // (CPF_Parm)
	int                                                TextSize;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseFade_In;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNewSystemMessageWidget_C*                   MessageWidget;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MessageHudWidget.MessageHudWidget_C.OnDisplayKilledMessage
struct UMessageHudWidget_C_OnDisplayKilledMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (CPF_Parm)
};

// Function MessageHudWidget.MessageHudWidget_C.OnDisplaySystemMessage
struct UMessageHudWidget_C_OnDisplaySystemMessage_Params
{
	TEnumAsByte<ESystemMessageType>                    MessageType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Message;                                                  // (CPF_Parm)
};

// Function MessageHudWidget.MessageHudWidget_C.InitializeMessageHUD
struct UMessageHudWidget_C_InitializeMessageHUD_Params
{
};

// Function MessageHudWidget.MessageHudWidget_C.Construct
struct UMessageHudWidget_C_Construct_Params
{
};

// Function MessageHudWidget.MessageHudWidget_C.ExecuteUbergraph_MessageHudWidget
struct UMessageHudWidget_C_ExecuteUbergraph_MessageHudWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
