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

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc948edd4);

	UBigEquipmentSlotWidget_Gamepad_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotContainer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3f1bd9a2);

	UBigEquipmentSlotWidget_Gamepad_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsOn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::IsSlotOn_Bp(bool* IsOn)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa84d4ad9);

	UBigEquipmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.IsFocus
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBigEquipmentSlotWidget_Gamepad_C::IsFocus()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x92648f89);

	UBigEquipmentSlotWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.SetFocus
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool*                          NewFocus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBigEquipmentSlotWidget_Gamepad_C::SetFocus(bool* NewFocus)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x320135cf);

	UBigEquipmentSlotWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetItem_Bp
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetItem_Bp(class UItem** Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x57e12dd5);

	UBigEquipmentSlotWidget_Gamepad_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetDurability
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Durability                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetDurability(float* Durability)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6ae7ae38);

	UBigEquipmentSlotWidget_Gamepad_C_GetDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Durability != nullptr)
		*Durability = params.Durability;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurationNumber
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::UpdateDurationNumber(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x80c74e67);

	UBigEquipmentSlotWidget_Gamepad_C_UpdateDurationNumber_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurabilityGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::UpdateDurabilityGauge(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9cd342be);

	UBigEquipmentSlotWidget_Gamepad_C_UpdateDurabilityGauge_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurabilityVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::UpdateDurabilityVisibility(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6ea4ac6d);

	UBigEquipmentSlotWidget_Gamepad_C_UpdateDurabilityVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBigEquipmentSlotWidget_Gamepad_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdded6d79);

	UBigEquipmentSlotWidget_Gamepad_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.HaveDurability
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::HaveDurability(bool* Result)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3c1908c4);

	UBigEquipmentSlotWidget_Gamepad_C_HaveDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetDurabilityPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          DurabilityPercent              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetDurabilityPercent(float* DurabilityPercent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3b2ee59b);

	UBigEquipmentSlotWidget_Gamepad_C_GetDurabilityPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DurabilityPercent != nullptr)
		*DurabilityPercent = params.DurabilityPercent;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xacc5b3d4);

	UBigEquipmentSlotWidget_Gamepad_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBigEquipmentSlotWidget_Gamepad_C::GetSlotName()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xecfa2920);

	UBigEquipmentSlotWidget_Gamepad_C_GetSlotName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnUpdateItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::OnUpdateItem(class UItem** Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5ae6596e);

	UBigEquipmentSlotWidget_Gamepad_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBigEquipmentSlotWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5ed787a6);

	UBigEquipmentSlotWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_BigEquipmentSlotWidget_Gamepad
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::ExecuteUbergraph_BigEquipmentSlotWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf59c0481);

	UBigEquipmentSlotWidget_Gamepad_C_ExecuteUbergraph_BigEquipmentSlotWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnChildSlotFocus__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::OnChildSlotFocus__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x33c8bddd);

	UBigEquipmentSlotWidget_Gamepad_C_OnChildSlotFocus__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
