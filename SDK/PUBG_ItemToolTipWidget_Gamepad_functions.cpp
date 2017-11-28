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

// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.UpdateItemSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USlotBaseWidget_C*       NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Gamepad_C::UpdateItemSlot(class USlotBaseWidget_C* NewParam)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x95edfffd);

	UItemToolTipWidget_Gamepad_C_UpdateItemSlot_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.OnInputY
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Gamepad_C::OnInputY()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd2d57e4d);

	UItemToolTipWidget_Gamepad_C_OnInputY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.OnInputA
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Gamepad_C::OnInputA()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6310f825);

	UItemToolTipWidget_Gamepad_C_OnInputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.On_InteractText_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Gamepad_C::On_InteractText_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x146838e1);

	UItemToolTipWidget_Gamepad_C_On_InteractText_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Gamepad_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3ca51950);

	UItemToolTipWidget_Gamepad_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.NewFunction_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Gamepad_C::NewFunction_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x45c637f);

	UItemToolTipWidget_Gamepad_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.InputB
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Gamepad_C::InputB()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x82052429);

	UItemToolTipWidget_Gamepad_C_InputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.DisableAxis
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Axis                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Gamepad_C::DisableAxis(float Axis)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb6d9ebc2);

	UItemToolTipWidget_Gamepad_C_DisableAxis_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.DiableAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Gamepad_C::DiableAction()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa54bf8a8);

	UItemToolTipWidget_Gamepad_C_DiableAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.SetupInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Gamepad_C::SetupInput()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xab6adbe6);

	UItemToolTipWidget_Gamepad_C_SetupInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.InitWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemToolTipWidget_Gamepad_C::InitWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x51f8e71);

	UItemToolTipWidget_Gamepad_C_InitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemToolTipWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2fb68b4e);

	UItemToolTipWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Gamepad.ItemToolTipWidget_Gamepad_C.ExecuteUbergraph_ItemToolTipWidget_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemToolTipWidget_Gamepad_C::ExecuteUbergraph_ItemToolTipWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4e93a03b);

	UItemToolTipWidget_Gamepad_C_ExecuteUbergraph_ItemToolTipWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
