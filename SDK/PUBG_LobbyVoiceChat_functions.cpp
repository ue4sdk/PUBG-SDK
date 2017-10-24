// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyVoiceChat.LobbyVoiceChat_C.OnVoiceChatUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UniqueId                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           bIsTeamChannel                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsSpeaking                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Energy                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyVoiceChat_C::OnVoiceChatUpdated(const struct FString& UniqueId, bool bIsTeamChannel, bool bIsSpeaking, float Energy)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyVoiceChat.LobbyVoiceChat_C.OnVoiceChatUpdated");

	ULobbyVoiceChat_C_OnVoiceChatUpdated_Params params;
	params.UniqueId = UniqueId;
	params.bIsTeamChannel = bIsTeamChannel;
	params.bIsSpeaking = bIsSpeaking;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyVoiceChat.LobbyVoiceChat_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULobbyVoiceChat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyVoiceChat.LobbyVoiceChat_C.Construct");

	ULobbyVoiceChat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyVoiceChat.LobbyVoiceChat_C.ExecuteUbergraph_LobbyVoiceChat
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyVoiceChat_C::ExecuteUbergraph_LobbyVoiceChat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyVoiceChat.LobbyVoiceChat_C.ExecuteUbergraph_LobbyVoiceChat");

	ULobbyVoiceChat_C_ExecuteUbergraph_LobbyVoiceChat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
