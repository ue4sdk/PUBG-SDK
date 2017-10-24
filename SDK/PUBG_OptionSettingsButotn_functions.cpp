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

// Function OptionSettingsButotn.OptionSettingsButotn_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UOptionSettingsButotn_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.GetText_1");

	UOptionSettingsButotn_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionSettingsButotn.OptionSettingsButotn_C.GetColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UOptionSettingsButotn_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.GetColorAndOpacity_1");

	UOptionSettingsButotn_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionSettingsButotn.OptionSettingsButotn_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionSettingsButotn_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UOptionSettingsButotn_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSettingsButotn.OptionSettingsButotn_C.ExecuteUbergraph_OptionSettingsButotn
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionSettingsButotn_C::ExecuteUbergraph_OptionSettingsButotn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.ExecuteUbergraph_OptionSettingsButotn");

	UOptionSettingsButotn_C_ExecuteUbergraph_OptionSettingsButotn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSettingsButotn.OptionSettingsButotn_C.OnButtonDown__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionSettingsButotn_C::OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.OnButtonDown__DelegateSignature");

	UOptionSettingsButotn_C_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
