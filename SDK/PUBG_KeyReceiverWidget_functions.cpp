// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyDown");

	UKeyReceiverWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKey
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::UpdateKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKey");

	UKeyReceiverWidget_C_UpdateKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.GetButtonSltateText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UKeyReceiverWidget_C::GetButtonSltateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.GetButtonSltateText");

	UKeyReceiverWidget_C_GetButtonSltateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown");

	UKeyReceiverWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnMouseButtonUp_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp_1");

	UKeyReceiverWidget_C_OnMouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonDown_1");

	UKeyReceiverWidget_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UKeyReceiverWidget_C::GetColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_2");

	UKeyReceiverWidget_C_GetColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusReceived");

	UKeyReceiverWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnMouseButtonUp");

	UKeyReceiverWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.Keyup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UKeyReceiverWidget_C::Keyup(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.Keyup");

	UKeyReceiverWidget_C_Keyup_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.KeyDown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Input                          (CPF_Parm)

void UKeyReceiverWidget_C::KeyDown(const struct FKey& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.KeyDown");

	UKeyReceiverWidget_C_KeyDown_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyUp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UKeyReceiverWidget_C::UpdateKeyUp(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyUp");

	UKeyReceiverWidget_C_UpdateKeyUp_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyDown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UKeyReceiverWidget_C::UpdateKeyDown(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeyDown");

	UKeyReceiverWidget_C_UpdateKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.IsInputKeyDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           KeyDown                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyReceiverWidget_C::IsInputKeyDown(bool* KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.IsInputKeyDown");

	UKeyReceiverWidget_C_IsInputKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyDown != nullptr)
		*KeyDown = params.KeyDown;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeyReceiverWidget_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnKeyUp");

	UKeyReceiverWidget_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UKeyReceiverWidget_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.GetColorAndOpacity_1");

	UKeyReceiverWidget_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnApplyKeyChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::OnApplyKeyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnApplyKeyChanged");

	UKeyReceiverWidget_C_OnApplyKeyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeySlotWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::UpdateKeySlotWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.UpdateKeySlotWidget");

	UKeyReceiverWidget_C_UpdateKeySlotWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.GetDownedKeyName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UKeyReceiverWidget_C::GetDownedKeyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.GetDownedKeyName");

	UKeyReceiverWidget_C_GetDownedKeyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.Construct");

	UKeyReceiverWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)

void UKeyReceiverWidget_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnFocusLost");

	UKeyReceiverWidget_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UKeyReceiverWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature");

	UKeyReceiverWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.ExecuteUbergraph_KeyReceiverWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyReceiverWidget_C::ExecuteUbergraph_KeyReceiverWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.ExecuteUbergraph_KeyReceiverWidget");

	UKeyReceiverWidget_C_ExecuteUbergraph_KeyReceiverWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnSettingLastDownedKey__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslInputKey            TslInputKey                    (CPF_Parm)

void UKeyReceiverWidget_C::OnSettingLastDownedKey__DelegateSignature(const struct FTslInputKey& TslInputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnSettingLastDownedKey__DelegateSignature");

	UKeyReceiverWidget_C_OnSettingLastDownedKey__DelegateSignature_Params params;
	params.TslInputKey = TslInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyReceiverWidget.KeyReceiverWidget_C.OnSlotButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EKeyState>         KeyState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            OriginKey                      (CPF_Parm)
// struct FTslInputKey            LastDownedKey                  (CPF_Parm)

void UKeyReceiverWidget_C::OnSlotButtonClicked__DelegateSignature(TEnumAsByte<EKeyState> KeyState, const struct FTslInputKey& OriginKey, const struct FTslInputKey& LastDownedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget.KeyReceiverWidget_C.OnSlotButtonClicked__DelegateSignature");

	UKeyReceiverWidget_C_OnSlotButtonClicked__DelegateSignature_Params params;
	params.KeyState = KeyState;
	params.OriginKey = OriginKey;
	params.LastDownedKey = LastDownedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
