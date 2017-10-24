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

// Function MessageWidget.MessageWidget_C.ClearMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessageWidget_C::ClearMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.ClearMessage");

	UMessageWidget_C_ClearMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageWidget.MessageWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMessageWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.Construct");

	UMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageWidget.MessageWidget_C.O_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessageWidget_C::O_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.O_1");

	UMessageWidget_C_O_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageWidget_C::ExecuteUbergraph_MessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget");

	UMessageWidget_C_ExecuteUbergraph_MessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageWidget.MessageWidget_C.MessageEnd__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageWidget_C::MessageEnd__DelegateSignature(class UMessageWidget_C* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.MessageEnd__DelegateSignature");

	UMessageWidget_C_MessageEnd__DelegateSignature_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
