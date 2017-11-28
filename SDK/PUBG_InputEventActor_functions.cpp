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

// Function InputEventActor.InputEventActor_C.ProcessEnableInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInputEventActor_C::ProcessEnableInput(class APlayerController* OwningPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb40b6e19);

	AInputEventActor_C_ProcessEnableInput_Params params;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInputEventActor_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7079e50c);

	AInputEventActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AInputEventActor_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x44143c92);

	AInputEventActor_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AInputEventActor_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb61babcd);

	AInputEventActor_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.ExecuteUbergraph_InputEventActor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInputEventActor_C::ExecuteUbergraph_InputEventActor(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc850b13e);

	AInputEventActor_C_ExecuteUbergraph_InputEventActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.OnInputAction__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FKey                    Key                            (CPF_Parm)

void AInputEventActor_C::OnInputAction__DelegateSignature(bool bPressed, const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe1dd1ce1);

	AInputEventActor_C_OnInputAction__DelegateSignature_Params params;
	params.bPressed = bPressed;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
