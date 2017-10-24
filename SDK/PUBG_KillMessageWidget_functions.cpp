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

// Function KillMessageWidget.KillMessageWidget_C.SetKillMessageFont
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillMessageWidget_C::SetKillMessageFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.SetKillMessageFont");

	UKillMessageWidget_C_SetKillMessageFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.OnPrepass_1");

	UKillMessageWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.SetKillMessageText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillMessageWidget_C::SetKillMessageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.SetKillMessageText");

	UKillMessageWidget_C_SetKillMessageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.GetNumStartTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            NumStartTeam                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::GetNumStartTeam(int* NumStartTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.GetNumStartTeam");

	UKillMessageWidget_C_GetNumStartTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumStartTeam != nullptr)
		*NumStartTeam = params.NumStartTeam;
}


// Function KillMessageWidget.KillMessageWidget_C.On_AlivePlayer_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::On_AlivePlayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.On_AlivePlayer_Prepass_1");

	UKillMessageWidget_C_On_AlivePlayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.On_MyKills_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::On_MyKills_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.On_MyKills_Prepass_1");

	UKillMessageWidget_C_On_MyKills_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.GetBrushColor_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UKillMessageWidget_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.GetBrushColor_1");

	UKillMessageWidget_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.GetTeamAlive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Alive                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::GetTeamAlive(int* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.GetTeamAlive");

	UKillMessageWidget_C_GetTeamAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;
}


// Function KillMessageWidget.KillMessageWidget_C.Get_AlivePlayer_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UKillMessageWidget_C::Get_AlivePlayer_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.Get_AlivePlayer_Text_1");

	UKillMessageWidget_C_Get_AlivePlayer_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.GetAlivePlayerNum
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            AlivePlayer                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::GetAlivePlayerNum(int* AlivePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.GetAlivePlayerNum");

	UKillMessageWidget_C_GetAlivePlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AlivePlayer != nullptr)
		*AlivePlayer = params.AlivePlayer;
}


// Function KillMessageWidget.KillMessageWidget_C.GetKillNum
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            KillNum                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::GetKillNum(int* KillNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.GetKillNum");

	UKillMessageWidget_C_GetKillNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KillNum != nullptr)
		*KillNum = params.KillNum;
}


// Function KillMessageWidget.KillMessageWidget_C.Get_Killer_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UKillMessageWidget_C::Get_Killer_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.Get_Killer_Visibility_1");

	UKillMessageWidget_C_Get_Killer_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.Get_Insert2_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UKillMessageWidget_C::Get_Insert2_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.Get_Insert2_Visibility_1");

	UKillMessageWidget_C_Get_Insert2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.Get_Insert_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UKillMessageWidget_C::Get_Insert_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.Get_Insert_Visibility_1");

	UKillMessageWidget_C_Get_Insert_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.GetFadeInAnimation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::GetFadeInAnimation(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.GetFadeInAnimation");

	UKillMessageWidget_C_GetFadeInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function KillMessageWidget.KillMessageWidget_C.GetFadeOutAnimation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::GetFadeOutAnimation(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.GetFadeOutAnimation");

	UKillMessageWidget_C_GetFadeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function KillMessageWidget.KillMessageWidget_C.InitializeKillMessageText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillMessageWidget_C::InitializeKillMessageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.InitializeKillMessageText");

	UKillMessageWidget_C_InitializeKillMessageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.IsVictimTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsTeam                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::IsVictimTeam(bool* IsTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.IsVictimTeam");

	UKillMessageWidget_C_IsVictimTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTeam != nullptr)
		*IsTeam = params.IsTeam;
}


// Function KillMessageWidget.KillMessageWidget_C.IsKillerTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsTeam                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::IsKillerTeam(bool* IsTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.IsKillerTeam");

	UKillMessageWidget_C_IsKillerTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTeam != nullptr)
		*IsTeam = params.IsTeam;
}


// Function KillMessageWidget.KillMessageWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKillMessageWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.Construct");

	UKillMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.ExecuteUbergraph_KillMessageWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillMessageWidget_C::ExecuteUbergraph_KillMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillMessageWidget.KillMessageWidget_C.ExecuteUbergraph_KillMessageWidget");

	UKillMessageWidget_C_ExecuteUbergraph_KillMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
