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

// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.IsFocusable
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::IsFocusable()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xad559421);

	UEquipmentWidget_Gamepad_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Down
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::Down()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdef98823);

	UEquipmentWidget_Gamepad_C_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetDownWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* UEquipmentWidget_Gamepad_C::GetDownWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x46d61885);

	UEquipmentWidget_Gamepad_C_GetDownWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetFocusingChildWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* UEquipmentWidget_Gamepad_C::GetFocusingChildWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd9f213f9);

	UEquipmentWidget_Gamepad_C_GetFocusingChildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetLeftWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* UEquipmentWidget_Gamepad_C::GetLeftWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x534010d2);

	UEquipmentWidget_Gamepad_C_GetLeftWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetRightWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* UEquipmentWidget_Gamepad_C::GetRightWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6bffb94d);

	UEquipmentWidget_Gamepad_C_GetRightWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetUpWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* UEquipmentWidget_Gamepad_C::GetUpWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc729888e);

	UEquipmentWidget_Gamepad_C_GetUpWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InputA
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::InputA()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf6881bc6);

	UEquipmentWidget_Gamepad_C_InputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InputB
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::InputB()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd085a15d);

	UEquipmentWidget_Gamepad_C_InputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InputLB
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::InputLB()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe42b93bb);

	UEquipmentWidget_Gamepad_C_InputLB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InputLT
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::InputLT()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x90582f1d);

	UEquipmentWidget_Gamepad_C_InputLT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InputRB
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::InputRB()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe58b7625);

	UEquipmentWidget_Gamepad_C_InputRB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InputRT
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::InputRT()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x395edac3);

	UEquipmentWidget_Gamepad_C_InputRT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InputX
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::InputX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xec76c2e7);

	UEquipmentWidget_Gamepad_C_InputX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InputY
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::InputY()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc674487e);

	UEquipmentWidget_Gamepad_C_InputY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.IsFocus
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::IsFocus()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7fcaa0dd);

	UEquipmentWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Left
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::Left()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x74e9fce4);

	UEquipmentWidget_Gamepad_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Right
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::Right()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5ff6d9db);

	UEquipmentWidget_Gamepad_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.SetFocus
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewFocus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::SetFocus(bool NewFocus)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6967950b);

	UEquipmentWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Up
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::Up()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf440d64c);

	UEquipmentWidget_Gamepad_C_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.ProcessScroll
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUp                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::ProcessScroll(bool bIsUp, float Time)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc814ab9d);

	UEquipmentWidget_Gamepad_C_ProcessScroll_Params params;
	params.bIsUp = bIsUp;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetItemByEquipSlotId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EEquipSlotID                   EquipSlotID                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UInventorySlotBaseWidget_C* Array_Element                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::GetItemByEquipSlotId(EEquipSlotID EquipSlotID, class UInventorySlotBaseWidget_C** Array_Element)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdc30162);

	UEquipmentWidget_Gamepad_C_GetItemByEquipSlotId_Params params;
	params.EquipSlotID = EquipSlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.SaveFocusSlotId
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EEquipSlotID                   FocusSlotId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::SaveFocusSlotId(EEquipSlotID FocusSlotId)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x759b3cf7);

	UEquipmentWidget_Gamepad_C_SaveFocusSlotId_Params params;
	params.FocusSlotId = FocusSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnItemFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> Container                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::OnItemFocus(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& Container)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb831e09f);

	UEquipmentWidget_Gamepad_C_OnItemFocus_Params params;
	params.Slot = Slot;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InitFocusableWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::InitFocusableWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xafa8f4eb);

	UEquipmentWidget_Gamepad_C_InitFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnDownScrollReleased
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::OnDownScrollReleased()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5c37e70e);

	UEquipmentWidget_Gamepad_C_OnDownScrollReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnDownScrollPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::OnDownScrollPressed()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x97eb6a0b);

	UEquipmentWidget_Gamepad_C_OnDownScrollPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnUpScrollReleased
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::OnUpScrollReleased()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa1f85aa1);

	UEquipmentWidget_Gamepad_C_OnUpScrollReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnUpScrollPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::OnUpScrollPressed()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa8684382);

	UEquipmentWidget_Gamepad_C_OnUpScrollPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::OnUp()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x44394f63);

	UEquipmentWidget_Gamepad_C_OnUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnDown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::OnDown()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfe92b868);

	UEquipmentWidget_Gamepad_C_OnDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.SetupInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::SetupInput()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8132a322);

	UEquipmentWidget_Gamepad_C_SetupInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnChildSlotRefresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::OnChildSlotRefresh()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x31be1bdf);

	UEquipmentWidget_Gamepad_C_OnChildSlotRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.FindFirstFocusableChildWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::FindFirstFocusableChildWidget(class UUserWidget** NewParam)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x72e98982);

	UEquipmentWidget_Gamepad_C_FindFirstFocusableChildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetRealChildDownWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             DownWidget                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::GetRealChildDownWidget(class UUserWidget** DownWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x365ae781);

	UEquipmentWidget_Gamepad_C_GetRealChildDownWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownWidget != nullptr)
		*DownWidget = params.DownWidget;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetRealChildUpWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             UpWidget                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::GetRealChildUpWidget(class UUserWidget** UpWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x78247492);

	UEquipmentWidget_Gamepad_C_GetRealChildUpWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpWidget != nullptr)
		*UpWidget = params.UpWidget;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetRealChildRightWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             RightWidget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::GetRealChildRightWidget(class UUserWidget** RightWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x51567ea1);

	UEquipmentWidget_Gamepad_C_GetRealChildRightWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightWidget != nullptr)
		*RightWidget = params.RightWidget;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetRealChildLeftWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             LeftWidget                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::GetRealChildLeftWidget(class UUserWidget** LeftWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbd53009e);

	UEquipmentWidget_Gamepad_C_GetRealChildLeftWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftWidget != nullptr)
		*LeftWidget = params.LeftWidget;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.GetChildLeftWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::GetChildLeftWidget(class UUserWidget** NewParam)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb9136e1a);

	UEquipmentWidget_Gamepad_C_GetChildLeftWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.InitializeEquipWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::InitializeEquipWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfa02eceb);

	UEquipmentWidget_Gamepad_C_InitializeEquipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.MainPrepass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::MainPrepass(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2f9e4810);

	UEquipmentWidget_Gamepad_C_MainPrepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnItemDragLeave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::OnItemDragLeave()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5876f43c);

	UEquipmentWidget_Gamepad_C_OnItemDragLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnItemDragEnter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::OnItemDragEnter(class UItem* Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x407dd9b3);

	UEquipmentWidget_Gamepad_C_OnItemDragEnter_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEquipmentWidget_Gamepad_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf93fcfcb);

	UEquipmentWidget_Gamepad_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe9e4fbda);

	UEquipmentWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnDragEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x87de6298);

	UEquipmentWidget_Gamepad_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnDragLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x48486e7);

	UEquipmentWidget_Gamepad_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x126ff181);

	UEquipmentWidget_Gamepad_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x13075ba8);

	UEquipmentWidget_Gamepad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEquipmentWidget_Gamepad_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xaf8a4cde);

	UEquipmentWidget_Gamepad_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEquipmentWidget_Gamepad_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x67317371);

	UEquipmentWidget_Gamepad_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Head_K2Node_ComponentBoundEvent_0_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Head_K2Node_ComponentBoundEvent_0_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x74ccd006);

	UEquipmentWidget_Gamepad_C_BndEvt__Head_K2Node_ComponentBoundEvent_0_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_2_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Backpack_K2Node_ComponentBoundEvent_2_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdde76100);

	UEquipmentWidget_Gamepad_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_2_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__TorsoArmor_K2Node_ComponentBoundEvent_5_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__TorsoArmor_K2Node_ComponentBoundEvent_5_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x333dbff7);

	UEquipmentWidget_Gamepad_C_BndEvt__TorsoArmor_K2Node_ComponentBoundEvent_5_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Belt_K2Node_ComponentBoundEvent_9_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Belt_K2Node_ComponentBoundEvent_9_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7192f038);

	UEquipmentWidget_Gamepad_C_BndEvt__Belt_K2Node_ComponentBoundEvent_9_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Eyes_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Eyes_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7c524adf);

	UEquipmentWidget_Gamepad_C_BndEvt__Eyes_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Mask_K2Node_ComponentBoundEvent_20_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Mask_K2Node_ComponentBoundEvent_20_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc3cb7528);

	UEquipmentWidget_Gamepad_C_BndEvt__Mask_K2Node_ComponentBoundEvent_20_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Torso_K2Node_ComponentBoundEvent_27_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Torso_K2Node_ComponentBoundEvent_27_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x497389e);

	UEquipmentWidget_Gamepad_C_BndEvt__Torso_K2Node_ComponentBoundEvent_27_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Outer_K2Node_ComponentBoundEvent_35_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Outer_K2Node_ComponentBoundEvent_35_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x92a04423);

	UEquipmentWidget_Gamepad_C_BndEvt__Outer_K2Node_ComponentBoundEvent_35_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Hands_K2Node_ComponentBoundEvent_44_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Hands_K2Node_ComponentBoundEvent_44_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x17852c80);

	UEquipmentWidget_Gamepad_C_BndEvt__Hands_K2Node_ComponentBoundEvent_44_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Leg_K2Node_ComponentBoundEvent_54_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Leg_K2Node_ComponentBoundEvent_54_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x507cdc91);

	UEquipmentWidget_Gamepad_C_BndEvt__Leg_K2Node_ComponentBoundEvent_54_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.BndEvt__Feet_K2Node_ComponentBoundEvent_65_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::BndEvt__Feet_K2Node_ComponentBoundEvent_65_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x925a5751);

	UEquipmentWidget_Gamepad_C_BndEvt__Feet_K2Node_ComponentBoundEvent_65_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.ExecuteUbergraph_EquipmentWidget_Gamepad
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::ExecuteUbergraph_EquipmentWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x476fa8d5);

	UEquipmentWidget_Gamepad_C_ExecuteUbergraph_EquipmentWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.On__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquipmentWidget_Gamepad_C::On__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x80f79107);

	UEquipmentWidget_Gamepad_C_On__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnChildFocusSlotID__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EEquipSlotID                   EquipSlotID                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::OnChildFocusSlotID__DelegateSignature(EEquipSlotID EquipSlotID)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfc6e8cb0);

	UEquipmentWidget_Gamepad_C_OnChildFocusSlotID__DelegateSignature_Params params;
	params.EquipSlotID = EquipSlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnChildSlotFocus__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquipmentWidget_Gamepad_C::OnChildSlotFocus__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x20711f09);

	UEquipmentWidget_Gamepad_C_OnChildSlotFocus__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
