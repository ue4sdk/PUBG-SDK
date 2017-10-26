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

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.AddStackCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AddCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::AddStackCount(int AddCount)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x58aeaf61);

	UStackCountHandlingPopupWidget_C_AddStackCount_Params params;
	params.AddCount = AddCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb56cd850);

	UStackCountHandlingPopupWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.FocusOnInputAmountText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::FocusOnInputAmountText()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x159d963f);

	UStackCountHandlingPopupWidget_C_FocusOnInputAmountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.On_InputAmountText_Prepass
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::On_InputAmountText_Prepass(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x183f98e5);

	UStackCountHandlingPopupWidget_C_On_InputAmountText_Prepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxButtonText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UStackCountHandlingPopupWidget_C::GetMaxButtonText()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc4330360);

	UStackCountHandlingPopupWidget_C_GetMaxButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AInventory*              Inventory                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::GetInventory(class AInventory** Inventory)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8f017cd3);

	UStackCountHandlingPopupWidget_C_GetInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.UpdateItemName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::UpdateItemName(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x67e5b5d8);

	UStackCountHandlingPopupWidget_C_UpdateItemName_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UStackCountHandlingPopupWidget_C::GetMaxCount()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5cb09a2a);

	UStackCountHandlingPopupWidget_C_GetMaxCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnItemDropOtherContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::OnItemDropOtherContainer(class UItem* Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf48c6f79);

	UStackCountHandlingPopupWidget_C_OnItemDropOtherContainer_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SetPopup
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPopupStyle>       PopupStyle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UStackCountHandlingPopupWidget_C::SetPopup(TEnumAsByte<EPopupStyle> PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbc8ff9f9);

	UStackCountHandlingPopupWidget_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5a998b80);

	UStackCountHandlingPopupWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x112724e);

	UStackCountHandlingPopupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> Container                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> OtherContainer                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::CustomEvent_1(const TScriptInterface<class USlotContainerInterface>& Container, const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1d574c96);

	UStackCountHandlingPopupWidget_C_CustomEvent_1_Params params;
	params.Container = Container;
	params.Slot = Slot;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x76d7f312);

	UStackCountHandlingPopupWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe0e61ff9);

	UStackCountHandlingPopupWidget_C_BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb49b27e);

	UStackCountHandlingPopupWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe454a058);

	UStackCountHandlingPopupWidget_C_BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1ee6e40e);

	UStackCountHandlingPopupWidget_C_BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf7d049fb);

	UStackCountHandlingPopupWidget_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SubmitEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::SubmitEvent(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5d94ecd5);

	UStackCountHandlingPopupWidget_C_SubmitEvent_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Close Popup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::Close_Popup()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x500920a3);

	UStackCountHandlingPopupWidget_C_Close_Popup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6a0ed26d);

	UStackCountHandlingPopupWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Custom Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::Custom_Event_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd8b26942);

	UStackCountHandlingPopupWidget_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.XBoxOneOk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::XBoxOneOk()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x644ed5aa);

	UStackCountHandlingPopupWidget_C_XBoxOneOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3a77bb14);

	UStackCountHandlingPopupWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnWidgetInputB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::OnWidgetInputB()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc8fb9cda);

	UStackCountHandlingPopupWidget_C_OnWidgetInputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnWidgetMoveLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::OnWidgetMoveLeft()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd04daad4);

	UStackCountHandlingPopupWidget_C_OnWidgetMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::CustomEvent_3()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd15257c4);

	UStackCountHandlingPopupWidget_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::CustomEvent_4()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xab4fdd5b);

	UStackCountHandlingPopupWidget_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStackCountHandlingPopupWidget_C::CustomEvent_5()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x854d62f2);

	UStackCountHandlingPopupWidget_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ExecuteUbergraph_StackCountHandlingPopupWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::ExecuteUbergraph_StackCountHandlingPopupWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd8a24781);

	UStackCountHandlingPopupWidget_C_ExecuteUbergraph_StackCountHandlingPopupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
