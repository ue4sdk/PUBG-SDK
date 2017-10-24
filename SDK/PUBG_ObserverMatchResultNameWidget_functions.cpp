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

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.SetSmall
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSmall                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameWidget_C::SetSmall(bool bSmall)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.SetSmall");

	UObserverMatchResultNameWidget_C_SetSmall_Params params;
	params.bSmall = bSmall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_Kills_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameWidget_C::On_Kills_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_Kills_Prepass_1");

	UObserverMatchResultNameWidget_C_On_Kills_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.GetPlayerNameFontSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            FontSize                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameWidget_C::GetPlayerNameFontSize(int* FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.GetPlayerNameFontSize");

	UObserverMatchResultNameWidget_C_GetPlayerNameFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FontSize != nullptr)
		*FontSize = params.FontSize;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.GetKillFontSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            FontSize                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameWidget_C::GetKillFontSize(int* FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.GetKillFontSize");

	UObserverMatchResultNameWidget_C_GetKillFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FontSize != nullptr)
		*FontSize = params.FontSize;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_Slash_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameWidget_C::On_Slash_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_Slash_Prepass_1");

	UObserverMatchResultNameWidget_C_On_Slash_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_PlayerName_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameWidget_C::On_PlayerName_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_PlayerName_Prepass_1");

	UObserverMatchResultNameWidget_C_On_PlayerName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_KillCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameWidget_C::On_KillCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_KillCount_Prepass_1");

	UObserverMatchResultNameWidget_C_On_KillCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverMatchResultNameWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.OnPrepass_1");

	UObserverMatchResultNameWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
