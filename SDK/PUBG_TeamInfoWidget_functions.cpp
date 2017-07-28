// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeamInfoWidget.TeamInfoWidget_C.OnMainPrepass
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::OnMainPrepass(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnMainPrepass");

	UTeamInfoWidget_C_OnMainPrepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.OnPrepassUpdateGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::OnPrepassUpdateGauge(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnPrepassUpdateGauge");

	UTeamInfoWidget_C_OnPrepassUpdateGauge_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_InfoIcon_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_InfoIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_InfoIcon_Prepass_1");

	UTeamInfoWidget_C_On_InfoIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_TeamInfoIconLayer_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_TeamInfoIconLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_TeamInfoIconLayer_Prepass_1");

	UTeamInfoWidget_C_On_TeamInfoIconLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.CheckTeamInstanceValid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::CheckTeamInstanceValid(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.CheckTeamInstanceValid");

	UTeamInfoWidget_C_CheckTeamInstanceValid_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.UpdateMapMarkerVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::UpdateMapMarkerVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.UpdateMapMarkerVisibility");

	UTeamInfoWidget_C_UpdateMapMarkerVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_MarkerImage_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_MarkerImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_MarkerImage_Prepass_1");

	UTeamInfoWidget_C_On_MarkerImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_TeamNameBorder_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_TeamNameBorder_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_TeamNameBorder_Prepass_1");

	UTeamInfoWidget_C_On_TeamNameBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.IsOffline
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bOffline                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::IsOffline(bool* bOffline)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.IsOffline");

	UTeamInfoWidget_C_IsOffline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOffline != nullptr)
		*bOffline = params.bOffline;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On_SpeakingImage_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::On_SpeakingImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On_SpeakingImage_Prepass_1");

	UTeamInfoWidget_C_On_SpeakingImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.UpdateVivoxChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UniqueId                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           bIsTeamChannel                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsSpeaking                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Energy                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::UpdateVivoxChat(const struct FString& UniqueId, bool bIsTeamChannel, bool bIsSpeaking, float Energy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.UpdateVivoxChat");

	UTeamInfoWidget_C_UpdateVivoxChat_Params params;
	params.UniqueId = UniqueId;
	params.bIsTeamChannel = bIsTeamChannel;
	params.bIsSpeaking = bIsSpeaking;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.BindVoiceEvent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::BindVoiceEvent(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.BindVoiceEvent");

	UTeamInfoWidget_C_BindVoiceEvent_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.OnPrepass_HPGaugeVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::OnPrepass_HPGaugeVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnPrepass_HPGaugeVisibility");

	UTeamInfoWidget_C_OnPrepass_HPGaugeVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.IsDead
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Dead                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::IsDead(bool* Dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.IsDead");

	UTeamInfoWidget_C_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dead != nullptr)
		*Dead = params.Dead;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UTeamInfoWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetVisibility_1");

	UTeamInfoWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetRideVehicleType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ETeamVehicleType>  Vehicle                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::GetRideVehicleType(TEnumAsByte<ETeamVehicleType>* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetRideVehicleType");

	UTeamInfoWidget_C_GetRideVehicleType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vehicle != nullptr)
		*Vehicle = params.Vehicle;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetGroggyHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          GroggyHealthPercent            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::GetGroggyHealthPercent(float* GroggyHealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetGroggyHealthPercent");

	UTeamInfoWidget_C_GetGroggyHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroggyHealthPercent != nullptr)
		*GroggyHealthPercent = params.GroggyHealthPercent;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTeamInfoWidget_C::GetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetIcon");

	UTeamInfoWidget_C_GetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeamInfoWidget.TeamInfoWidget_C.IsGroggy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bGroggy                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::IsGroggy(bool* bGroggy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.IsGroggy");

	UTeamInfoWidget_C_IsGroggy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bGroggy != nullptr)
		*bGroggy = params.bGroggy;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetLifePercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          HealthPercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::GetLifePercent(float* HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetLifePercent");

	UTeamInfoWidget_C_GetLifePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function TeamInfoWidget.TeamInfoWidget_C.UpdateGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::UpdateGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.UpdateGauge");

	UTeamInfoWidget_C_UpdateGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetCharacterName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTeamInfoWidget_C::GetCharacterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetCharacterName");

	UTeamInfoWidget_C_GetCharacterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeamInfoWidget.TeamInfoWidget_C.GetFillColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UTeamInfoWidget_C::GetFillColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.GetFillColor");

	UTeamInfoWidget_C_GetFillColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeamInfoWidget.TeamInfoWidget_C.OnVoiceChat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSeaking                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Energy                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::OnVoiceChat(bool bSeaking, float Energy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnVoiceChat");

	UTeamInfoWidget_C_OnVoiceChat_Params params;
	params.bSeaking = bSeaking;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.On Animation Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::On_Animation_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.On Animation Start");

	UTeamInfoWidget_C_On_Animation_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.OnAnimationFinish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::OnAnimationFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.OnAnimationFinish");

	UTeamInfoWidget_C_OnAnimationFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.Destruct");

	UTeamInfoWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.Construct");

	UTeamInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoWidget.TeamInfoWidget_C.ExecuteUbergraph_TeamInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoWidget_C::ExecuteUbergraph_TeamInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoWidget.TeamInfoWidget_C.ExecuteUbergraph_TeamInfoWidget");

	UTeamInfoWidget_C_ExecuteUbergraph_TeamInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
