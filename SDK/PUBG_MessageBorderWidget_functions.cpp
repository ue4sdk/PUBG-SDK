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

// Function MessageBorderWidget.MessageBorderWidget_C.RemoveMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        DeleteMessage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageBorderWidget_C::RemoveMessage(class UMessageWidget_C* DeleteMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBorderWidget.MessageBorderWidget_C.RemoveMessage");

	UMessageBorderWidget_C_RemoveMessage_Params params;
	params.DeleteMessage = DeleteMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBorderWidget.MessageBorderWidget_C.AddMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageBorderWidget_C::AddMessage(class UMessageWidget_C* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBorderWidget.MessageBorderWidget_C.AddMessage");

	UMessageBorderWidget_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBorderWidget.MessageBorderWidget_C.DisplayKilledMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (CPF_Parm)

void UMessageBorderWidget_C::DisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBorderWidget.MessageBorderWidget_C.DisplayKilledMessage");

	UMessageBorderWidget_C_DisplayKilledMessage_Params params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
