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

// Function InventoryBaseWidget.InventoryBaseWidget_C.UpdateDragDragDroppingItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem*                   DroppingItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInventoryBaseWidget_C::UpdateDragDragDroppingItem(class UItem* DroppingItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryBaseWidget.InventoryBaseWidget_C.UpdateDragDragDroppingItem");

	UInventoryBaseWidget_C_UpdateDragDragDroppingItem_Params params;
	params.DroppingItem = DroppingItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryBaseWidget.InventoryBaseWidget_C.SetInventoryWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInventoryWidget_C*      Inventory                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInventoryBaseWidget_C::SetInventoryWidget(class UInventoryWidget_C* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryBaseWidget.InventoryBaseWidget_C.SetInventoryWidget");

	UInventoryBaseWidget_C_SetInventoryWidget_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryBaseWidget.InventoryBaseWidget_C.ExecuteUbergraph_InventoryBaseWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInventoryBaseWidget_C::ExecuteUbergraph_InventoryBaseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryBaseWidget.InventoryBaseWidget_C.ExecuteUbergraph_InventoryBaseWidget");

	UInventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryBaseWidget.InventoryBaseWidget_C.RefreshFocus__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryBaseWidget_C::RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryBaseWidget.InventoryBaseWidget_C.RefreshFocus__DelegateSignature");

	UInventoryBaseWidget_C_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
