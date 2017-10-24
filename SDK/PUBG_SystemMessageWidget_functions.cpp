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

// Function SystemMessageWidget.SystemMessageWidget_C.AddMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USystemMessageWidget_C::AddMessage(class UMessageWidget_C* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function SystemMessageWidget.SystemMessageWidget_C.AddMessage");

	USystemMessageWidget_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SystemMessageWidget.SystemMessageWidget_C.DisplaySystemMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)

void USystemMessageWidget_C::DisplaySystemMessage(TEnumAsByte<ESystemMessageType> MessageType, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function SystemMessageWidget.SystemMessageWidget_C.DisplaySystemMessage");

	USystemMessageWidget_C_DisplaySystemMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
