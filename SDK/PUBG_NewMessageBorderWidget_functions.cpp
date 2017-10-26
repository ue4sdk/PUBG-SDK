// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.TickMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::TickMove(float Time)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa59a91d1);

	UNewMessageBorderWidget_C_TickMove_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.UpdatePositionInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewMessageBorderWidget_C::UpdatePositionInfo()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x52eaa653);

	UNewMessageBorderWidget_C_UpdatePositionInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.IsFull
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Full                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::IsFull(bool* Full)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x978aa83a);

	UNewMessageBorderWidget_C_IsFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Full != nullptr)
		*Full = params.Full;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.SetSizeRule
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateSizeRule>    TopSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ESlateSizeRule>    BottomSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::SetSizeRule(TEnumAsByte<ESlateSizeRule> TopSize, TEnumAsByte<ESlateSizeRule> BottomSize)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5b5d98d6);

	UNewMessageBorderWidget_C_SetSizeRule_Params params;
	params.TopSize = TopSize;
	params.BottomSize = BottomSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.OnRemoveMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNewSystemMessageWidget_C* SystemMessageWidget            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::OnRemoveMessage(class UNewSystemMessageWidget_C* SystemMessageWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x897aba57);

	UNewMessageBorderWidget_C_OnRemoveMessage_Params params;
	params.SystemMessageWidget = SystemMessageWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.AddMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNewSystemMessageWidget_C* Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::AddMessage(class UNewSystemMessageWidget_C* Message)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf425ee63);

	UNewMessageBorderWidget_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.DisplayKilledMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (CPF_Parm)

void UNewMessageBorderWidget_C::DisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2817d65f);

	UNewMessageBorderWidget_C_DisplayKilledMessage_Params params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewMessageBorderWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6d8db878);

	UNewMessageBorderWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3717747a);

	UNewMessageBorderWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.ExecuteUbergraph_NewMessageBorderWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewMessageBorderWidget_C::ExecuteUbergraph_NewMessageBorderWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x70c525e4);

	UNewMessageBorderWidget_C_ExecuteUbergraph_NewMessageBorderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
