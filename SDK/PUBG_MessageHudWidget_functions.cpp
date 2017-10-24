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

// Function MessageHudWidget.MessageHudWidget_C.CreateGamePlayMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_Parm)
// TEnumAsByte<ETextJustify>      TextAlignment                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TextSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseFade_In                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkAudioEvent*           Sound                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNewSystemMessageWidget_C* MessageWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::CreateGamePlayMessage(const struct FText& Message, TEnumAsByte<ETextJustify> TextAlignment, int TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.CreateGamePlayMessage");

	UMessageHudWidget_C_CreateGamePlayMessage_Params params;
	params.Message = Message;
	params.TextAlignment = TextAlignment;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.bUseFade_In = bUseFade_In;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWidget != nullptr)
		*MessageWidget = params.MessageWidget;
}


// Function MessageHudWidget.MessageHudWidget_C.OnDisplayMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkAudioEvent*           Sound                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::OnDisplayMessage(TEnumAsByte<ESystemMessageType> MessageType, const struct FText& Message, float Duration, class UAkAudioEvent* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.OnDisplayMessage");

	UMessageHudWidget_C_OnDisplayMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;
	params.Duration = Duration;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.CreateKillMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDeathMessage           DeathMessage                   (CPF_Parm)
// TEnumAsByte<ETextJustify>      TextAlignment                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateColor             TextColor                      (CPF_Parm)
// int                            TextSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseFade_In                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNewSystemMessageWidget_C* MessageWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::CreateKillMessage(const struct FDeathMessage& DeathMessage, TEnumAsByte<ETextJustify> TextAlignment, const struct FSlateColor& TextColor, int TextSize, float Duration, bool bUseFade_In, class UNewSystemMessageWidget_C** MessageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.CreateKillMessage");

	UMessageHudWidget_C_CreateKillMessage_Params params;
	params.DeathMessage = DeathMessage;
	params.TextAlignment = TextAlignment;
	params.TextColor = TextColor;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.bUseFade_In = bUseFade_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWidget != nullptr)
		*MessageWidget = params.MessageWidget;
}


// Function MessageHudWidget.MessageHudWidget_C.CreateSystemMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_Parm)
// TEnumAsByte<ETextJustify>      TextAlignment                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateColor             TextColor                      (CPF_Parm)
// int                            TextSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseFade_In                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkAudioEvent*           Sound                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNewSystemMessageWidget_C* MessageWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::CreateSystemMessage(const struct FText& Message, TEnumAsByte<ETextJustify> TextAlignment, const struct FSlateColor& TextColor, int TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.CreateSystemMessage");

	UMessageHudWidget_C_CreateSystemMessage_Params params;
	params.Message = Message;
	params.TextAlignment = TextAlignment;
	params.TextColor = TextColor;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.bUseFade_In = bUseFade_In;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWidget != nullptr)
		*MessageWidget = params.MessageWidget;
}


// Function MessageHudWidget.MessageHudWidget_C.OnDisplayKilledMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (CPF_Parm)

void UMessageHudWidget_C::OnDisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.OnDisplayKilledMessage");

	UMessageHudWidget_C_OnDisplayKilledMessage_Params params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.OnDisplaySystemMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)

void UMessageHudWidget_C::OnDisplaySystemMessage(TEnumAsByte<ESystemMessageType> MessageType, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.OnDisplaySystemMessage");

	UMessageHudWidget_C_OnDisplaySystemMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.InitializeMessageHUD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessageHudWidget_C::InitializeMessageHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.InitializeMessageHUD");

	UMessageHudWidget_C_InitializeMessageHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMessageHudWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.Construct");

	UMessageHudWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.ExecuteUbergraph_MessageHudWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageHudWidget_C::ExecuteUbergraph_MessageHudWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageHudWidget.MessageHudWidget_C.ExecuteUbergraph_MessageHudWidget");

	UMessageHudWidget_C_ExecuteUbergraph_MessageHudWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
