// PLAYERUNKNOWN BattleGrounds () SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InteractionWidget.InteractionWidget_C.On_InteractionInputMethodSwitcher_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::On_InteractionInputMethodSwitcher_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.On_InteractionInputMethodSwitcher_Prepass_1");

	UInteractionWidget_C_On_InteractionInputMethodSwitcher_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.GetInteractionComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UInteractionInterface> InteractionComponent           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::GetInteractionComponent(TScriptInterface<class UInteractionInterface>* InteractionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetInteractionComponent");

	UInteractionWidget_C_GetInteractionComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InteractionComponent != nullptr)
		*InteractionComponent = params.InteractionComponent;
}


// Function InteractionWidget.InteractionWidget_C.On_InteractionText_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::On_InteractionText_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.On_InteractionText_Prepass_1");

	UInteractionWidget_C_On_InteractionText_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.On_AdditionalMessageLayer_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::On_AdditionalMessageLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.On_AdditionalMessageLayer_Prepass_1");

	UInteractionWidget_C_On_AdditionalMessageLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.OnPrepass_SuitableWeaponImageVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::OnPrepass_SuitableWeaponImageVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.OnPrepass_SuitableWeaponImageVisibility");

	UInteractionWidget_C_OnPrepass_SuitableWeaponImageVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.GetInteractionText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UInteractionWidget_C::GetInteractionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetInteractionText");

	UInteractionWidget_C_GetInteractionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractionWidget.InteractionWidget_C.OnPrepass_GetInteractionInfoVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::OnPrepass_GetInteractionInfoVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.OnPrepass_GetInteractionInfoVisibility");

	UInteractionWidget_C_OnPrepass_GetInteractionInfoVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.SetVehicleInteractionCondition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Vehicle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::SetVehicleInteractionCondition(class AActor* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.SetVehicleInteractionCondition");

	UInteractionWidget_C_SetVehicleInteractionCondition_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.GetInteractionInfoShadowOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UInteractionWidget_C::GetInteractionInfoShadowOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetInteractionInfoShadowOpacity");

	UInteractionWidget_C_GetInteractionInfoShadowOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractionWidget.InteractionWidget_C.GetInteractInfoOpacityText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UInteractionWidget_C::GetInteractInfoOpacityText()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetInteractInfoOpacityText");

	UInteractionWidget_C_GetInteractInfoOpacityText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractionWidget.InteractionWidget_C.GetInteractInfoOpacityKey
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UInteractionWidget_C::GetInteractInfoOpacityKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetInteractInfoOpacityKey");

	UInteractionWidget_C_GetInteractInfoOpacityKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractionWidget.InteractionWidget_C.GetAdditionalMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   MessageText                    (CPF_Parm, CPF_OutParm)

void UInteractionWidget_C::GetAdditionalMessage(struct FText* MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetAdditionalMessage");

	UInteractionWidget_C_GetAdditionalMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageText != nullptr)
		*MessageText = params.MessageText;
}


// Function InteractionWidget.InteractionWidget_C.GetAmmoWeaponItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWeaponItem*             WeaponItem                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::GetAmmoWeaponItem(class UWeaponItem** WeaponItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetAmmoWeaponItem");

	UInteractionWidget_C_GetAmmoWeaponItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponItem != nullptr)
		*WeaponItem = params.WeaponItem;
}


// Function InteractionWidget.InteractionWidget_C.GetWeaponIconVisible
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInteractionWidget_C::GetWeaponIconVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetWeaponIconVisible");

	UInteractionWidget_C_GetWeaponIconVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractionWidget.InteractionWidget_C.GetAttachableWeaponItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWeaponItem*             WeaponItem                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::GetAttachableWeaponItem(class UWeaponItem** WeaponItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetAttachableWeaponItem");

	UInteractionWidget_C_GetAttachableWeaponItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponItem != nullptr)
		*WeaponItem = params.WeaponItem;
}


// Function InteractionWidget.InteractionWidget_C.GetProperWeaponIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteractionWidget_C::GetProperWeaponIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetProperWeaponIcon");

	UInteractionWidget_C_GetProperWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.IsInteractionItemAttachToCurrentWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Attachable                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::IsInteractionItemAttachToCurrentWeapon(bool* Attachable)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.IsInteractionItemAttachToCurrentWeapon");

	UInteractionWidget_C_IsInteractionItemAttachToCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attachable != nullptr)
		*Attachable = params.Attachable;
}


// Function InteractionWidget.InteractionWidget_C.GetObjectNameText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UInteractionWidget_C::GetObjectNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetObjectNameText");

	UInteractionWidget_C_GetObjectNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractionWidget.InteractionWidget_C.GetVerbText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UInteractionWidget_C::GetVerbText()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetVerbText");

	UInteractionWidget_C_GetVerbText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractionWidget.InteractionWidget_C.GetKeyNameText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UInteractionWidget_C::GetKeyNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.GetKeyNameText");

	UInteractionWidget_C_GetKeyNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractionWidget.InteractionWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.Tick");

	UInteractionWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInteractionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.Construct");

	UInteractionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UInteractionWidget_C::BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UInteractionWidget_C_BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.ExecuteUbergraph_InteractionWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionWidget_C::ExecuteUbergraph_InteractionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.ExecuteUbergraph_InteractionWidget");

	UInteractionWidget_C_ExecuteUbergraph_InteractionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
