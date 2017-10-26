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

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemAttachment
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsAttachment                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::IsDragDroppingItemAttachment(bool* IsAttachment)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x89f7d5e4);

	UTslItemDragDropOperation_C_IsDragDroppingItemAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttachment != nullptr)
		*IsAttachment = params.IsAttachment;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsWeapon                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::IsDragDroppingItemWeapon(bool* IsWeapon)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x26744a9f);

	UTslItemDragDropOperation_C_IsDragDroppingItemWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWeapon != nullptr)
		*IsWeapon = params.IsWeapon;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsInEquipment
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::IsInEquipment(bool* NewParam)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdcea16a2);

	UTslItemDragDropOperation_C_IsInEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetCurrentOtherContainer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class USlotContainerInterface> OtherContainer                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::GetCurrentOtherContainer(TScriptInterface<class USlotContainerInterface>* OtherContainer)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8b04e18b);

	UTslItemDragDropOperation_C_GetCurrentOtherContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OtherContainer != nullptr)
		*OtherContainer = params.OtherContainer;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.LeaveOtherContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTslItemDragDropOperation_C::LeaveOtherContainer()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4ea68e73);

	UTslItemDragDropOperation_C_LeaveOtherContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.EnterOtherContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> NewOtherContainer              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::EnterOtherContainer(const TScriptInterface<class USlotContainerInterface>& NewOtherContainer)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfb5653c0);

	UTslItemDragDropOperation_C_EnterOtherContainer_Params params;
	params.NewOtherContainer = NewOtherContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsEnableAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsEnableAction                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::IsEnableAction(bool* IsEnableAction)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb7e2da8c);

	UTslItemDragDropOperation_C_IsEnableAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnableAction != nullptr)
		*IsEnableAction = params.IsEnableAction;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetActionName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragDropOperation_C::GetActionName(struct FName* ActionName)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe69a1f9a);

	UTslItemDragDropOperation_C_GetActionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Options                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UTslItemDragDropOperation_C::GetOptions(struct FString* Options)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x626029);

	UTslItemDragDropOperation_C_GetOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
