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

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd1fbc982);

	USectionTitleWidget_Gamepad_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetSubFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSubFocus                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::SetSubFocus(bool bSubFocus)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xae98bf71);

	USectionTitleWidget_Gamepad_C_SetSubFocus_Params params;
	params.bSubFocus = bSubFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bFocus                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::SetFocus(bool bFocus)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x50bd8f31);

	USectionTitleWidget_Gamepad_C_SetFocus_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.GetFocusMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* FocusMaterial                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::GetFocusMaterial(class UMaterialInstanceDynamic** FocusMaterial)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x632170a2);

	USectionTitleWidget_Gamepad_C_GetFocusMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusMaterial != nullptr)
		*FocusMaterial = params.FocusMaterial;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USectionTitleWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xaa427e50);

	USectionTitleWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf99bc562);

	USectionTitleWidget_Gamepad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.ExecuteUbergraph_SectionTitleWidget_Gamepad
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::ExecuteUbergraph_SectionTitleWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x64e240a4);

	USectionTitleWidget_Gamepad_C_ExecuteUbergraph_SectionTitleWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
