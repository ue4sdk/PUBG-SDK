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

// Function ToolTipGauageWidget.ToolTipGauageWidget_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          BeginGap                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndGap                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCompareMode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UToolTipGauageWidget_C::Update(float BeginGap, float EndGap, bool bCompareMode)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3c41af9c);

	UToolTipGauageWidget_C_Update_Params params;
	params.BeginGap = BeginGap;
	params.EndGap = EndGap;
	params.bCompareMode = bCompareMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipGauageWidget.ToolTipGauageWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UToolTipGauageWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x41d41576);

	UToolTipGauageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipGauageWidget.ToolTipGauageWidget_C.ExecuteUbergraph_ToolTipGauageWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UToolTipGauageWidget_C::ExecuteUbergraph_ToolTipGauageWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x73db36a2);

	UToolTipGauageWidget_C_ExecuteUbergraph_ToolTipGauageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
