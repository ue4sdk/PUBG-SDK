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

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.IsTeamMatch
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsTeamMatch                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::IsTeamMatch(bool* bIsTeamMatch)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x16644a1f);

	UInGameMenuWidget_Gamepad_C_IsTeamMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTeamMatch != nullptr)
		*bIsTeamMatch = params.bIsTeamMatch;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.NavigateButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::NavigateButton(class UWidget* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x82c6d6b2);

	UInGameMenuWidget_Gamepad_C_NavigateButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UInGameMenuWidget_Gamepad_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfeec8e89);

	UInGameMenuWidget_Gamepad_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.IsPCOnly
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::IsPCOnly(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4d3d9b2a);

	UInGameMenuWidget_Gamepad_C_IsPCOnly_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.IsGamepadOnly
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::IsGamepadOnly(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3ef0203e);

	UInGameMenuWidget_Gamepad_C_IsGamepadOnly_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.GetVersionText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UInGameMenuWidget_Gamepad_C::GetVersionText_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe1de23e);

	UInGameMenuWidget_Gamepad_C_GetVersionText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.QuitGame
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::QuitGame(EPopupButtonID ButtonID)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdac504b4);

	UInGameMenuWidget_Gamepad_C_QuitGame_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.GoToLobby
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::GoToLobby(EPopupButtonID ButtonID)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1200932a);

	UInGameMenuWidget_Gamepad_C_GoToLobby_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x51aeaad6);

	UInGameMenuWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.OnHiddenWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::OnHiddenWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x70e70c98);

	UInGameMenuWidget_Gamepad_C_OnHiddenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x45f0c6c1);

	UInGameMenuWidget_Gamepad_C_BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::CustomEvent_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdf0761fe);

	UInGameMenuWidget_Gamepad_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::CustomEvent_2()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb904e795);

	UInGameMenuWidget_Gamepad_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9a9bd816);

	UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf128d00c);

	UInGameMenuWidget_Gamepad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.OpenGamepadOption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::OpenGamepadOption()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x33940c67);

	UInGameMenuWidget_Gamepad_C_OpenGamepadOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd3f4e4b);

	UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_392_OnNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UInGameMenuWidget_Gamepad_C::BndEvt__Resume_K2Node_ComponentBoundEvent_392_OnNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x65a6463);

	UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_392_OnNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__SETTINGS_K2Node_ComponentBoundEvent_401_OnNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UInGameMenuWidget_Gamepad_C::BndEvt__SETTINGS_K2Node_ComponentBoundEvent_401_OnNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x262f256c);

	UInGameMenuWidget_Gamepad_C_BndEvt__SETTINGS_K2Node_ComponentBoundEvent_401_OnNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_411_OnNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UInGameMenuWidget_Gamepad_C::BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_411_OnNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdac9ac21);

	UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_411_OnNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_422_OnNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UInGameMenuWidget_Gamepad_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_422_OnNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xda7307af);

	UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_422_OnNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__SETTINGS_K2Node_ComponentBoundEvent_43_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__SETTINGS_K2Node_ComponentBoundEvent_43_OnGamepadA__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xde458970);

	UInGameMenuWidget_Gamepad_C_BndEvt__SETTINGS_K2Node_ComponentBoundEvent_43_OnGamepadA__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_52_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__Resume_K2Node_ComponentBoundEvent_52_OnGamepadA__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb9e984a0);

	UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_52_OnGamepadA__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_70_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_70_OnGamepadA__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x17f288de);

	UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_70_OnGamepadA__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnGamepadA__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x648c32b2);

	UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnGamepadA__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_0_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__Resume_K2Node_ComponentBoundEvent_0_OnGamepadB__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa3aa9274);

	UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_0_OnGamepadB__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__SETTINGS_K2Node_ComponentBoundEvent_1_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__SETTINGS_K2Node_ComponentBoundEvent_1_OnGamepadB__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x30fa6f53);

	UInGameMenuWidget_Gamepad_C_BndEvt__SETTINGS_K2Node_ComponentBoundEvent_1_OnGamepadB__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_2_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_2_OnGamepadB__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7b9fafd0);

	UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_2_OnGamepadB__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2103d325);

	UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xad32d70e);

	UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.ExecuteUbergraph_InGameMenuWidget_Gamepad
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::ExecuteUbergraph_InGameMenuWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x431d0c85);

	UInGameMenuWidget_Gamepad_C_ExecuteUbergraph_InGameMenuWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.TestDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::TestDispatcher__DelegateSignature(bool NewParam)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9ef4f343);

	UInGameMenuWidget_Gamepad_C_TestDispatcher__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
