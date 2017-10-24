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

// Function LobbyVoiceChat.LobbyVoiceChat_C.OnVoiceChatUpdated
struct ULobbyVoiceChat_C_OnVoiceChatUpdated_Params
{
	struct FString                                     UniqueId;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsTeamChannel;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsSpeaking;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Energy;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyVoiceChat.LobbyVoiceChat_C.Construct
struct ULobbyVoiceChat_C_Construct_Params
{
};

// Function LobbyVoiceChat.LobbyVoiceChat_C.ExecuteUbergraph_LobbyVoiceChat
struct ULobbyVoiceChat_C_ExecuteUbergraph_LobbyVoiceChat_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
