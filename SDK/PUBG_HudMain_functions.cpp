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

// Function HudMain.HudMain_C.BindEventForShowReplayTimeline
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::BindEventForShowReplayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.BindEventForShowReplayTimeline");

	UHudMain_C_BindEventForShowReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ShowReplayTimeLine
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::ShowReplayTimeLine(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.ShowReplayTimeLine");

	UHudMain_C_ShowReplayTimeLine_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.SetHUDForIngameReplayMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::SetHUDForIngameReplayMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.SetHUDForIngameReplayMenu");

	UHudMain_C_SetHUDForIngameReplayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.BindEventForMapClosing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::BindEventForMapClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.BindEventForMapClosing");

	UHudMain_C_BindEventForMapClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnKey_ReplayMenuOrEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape");

	UHudMain_C_OnKey_ReplayMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.InitForReplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::InitForReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.InitForReplay");

	UHudMain_C_InitForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnToggleOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnToggleOption");

	UHudMain_C_OnToggleOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.On_Name_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::On_Name_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.On_Name_Prepass_1");

	UHudMain_C_On_Name_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.UpdateReplayTimeline
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::UpdateReplayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.UpdateReplayTimeline");

	UHudMain_C_UpdateReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleBattleList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnToggleBattleList()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnToggleBattleList");

	UHudMain_C_OnToggleBattleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapHide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnMapHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnMapHide");

	UHudMain_C_OnMapHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapShow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnMapShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnMapShow");

	UHudMain_C_OnMapShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapReleased
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnKey_MapReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_MapReleased");

	UHudMain_C_OnKey_MapReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnKey_MapPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_MapPressed");

	UHudMain_C_OnKey_MapPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnShowCarePackageItemList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnShowCarePackageItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnShowCarePackageItemList");

	UHudMain_C_OnShowCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.GetMiniMapType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  MiniMapype                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::GetMiniMapType(int Index, class UClass** MiniMapype)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.GetMiniMapType");

	UHudMain_C_GetMiniMapType_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiniMapype != nullptr)
		*MiniMapype = params.MiniMapype;
}


// Function HudMain.HudMain_C.On_BlueZoneGpsWidget_RoundType_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::On_BlueZoneGpsWidget_RoundType_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.On_BlueZoneGpsWidget_RoundType_Prepass_1");

	UHudMain_C_On_BlueZoneGpsWidget_RoundType_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsShowMapOrInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsShow                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::IsShowMapOrInventory(bool* bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.IsShowMapOrInventory");

	UHudMain_C_IsShowMapOrInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsShow != nullptr)
		*bIsShow = params.bIsShow;
}


// Function HudMain.HudMain_C.Get_Spectating_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHudMain_C::Get_Spectating_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_Spectating_Text_1");

	UHudMain_C_Get_Spectating_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnPrepass_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::OnPrepass_2(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnPrepass_2");

	UHudMain_C_OnPrepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.On_CharacterCanvas_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::On_CharacterCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.On_CharacterCanvas_Prepass_1");

	UHudMain_C_On_CharacterCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnTogglePlayerList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnTogglePlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnTogglePlayerList");

	UHudMain_C_OnTogglePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_KeyInfo_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHudMain_C::Get_KeyInfo_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_KeyInfo_Text_1");

	UHudMain_C_Get_KeyInfo_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.On_SpectatingKeyInfo_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::On_SpectatingKeyInfo_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.On_SpectatingKeyInfo_Prepass_1");

	UHudMain_C_On_SpectatingKeyInfo_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsCharacterAlive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsAlive                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::IsCharacterAlive(bool* IsAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.IsCharacterAlive");

	UHudMain_C_IsCharacterAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAlive != nullptr)
		*IsAlive = params.IsAlive;
}


// Function HudMain.HudMain_C.OnToggleInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Bold                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::OnToggleInventory(bool Bold)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnToggleInventory");

	UHudMain_C_OnToggleInventory_Params params;
	params.Bold = Bold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.On_InventoryShowHiddenCanvas_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::On_InventoryShowHiddenCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.On_InventoryShowHiddenCanvas_Prepass_1");

	UHudMain_C_On_InventoryShowHiddenCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_TextBlock_1_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHudMain_C::Get_TextBlock_1_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_TextBlock_1_Text_1");

	UHudMain_C_Get_TextBlock_1_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.On_OnlySpectating_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::On_OnlySpectating_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.On_OnlySpectating_Prepass_1");

	UHudMain_C_On_OnlySpectating_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnPrepass_1");

	UHudMain_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnPrepass_VisibilityOnMatchState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::OnPrepass_VisibilityOnMatchState(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnPrepass_VisibilityOnMatchState");

	UHudMain_C_OnPrepass_VisibilityOnMatchState_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.On_BaseCanvas_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::On_BaseCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.On_BaseCanvas_Prepass_1");

	UHudMain_C_On_BaseCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.GetBoostRatio
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UHudMain_C::GetBoostRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.GetBoostRatio");

	UHudMain_C_GetBoostRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnNitifyHit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DamagePercent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EDamageTypeCategory> DamageTypeCategory             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::OnNitifyHit(float DamagePercent, TEnumAsByte<EDamageTypeCategory> DamageTypeCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnNitifyHit");

	UHudMain_C_OnNitifyHit_Params params;
	params.DamagePercent = DamagePercent;
	params.DamageTypeCategory = DamageTypeCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_ParachuteText_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHudMain_C::Get_ParachuteText_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_ParachuteText_Visibility_1");

	UHudMain_C_Get_ParachuteText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_VisibilityOnMatchState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHudMain_C::Get_VisibilityOnMatchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_VisibilityOnMatchState");

	UHudMain_C_Get_VisibilityOnMatchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnDisplaySystemMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESystemMessageType> MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_Parm)

void UHudMain_C::OnDisplaySystemMessage(TEnumAsByte<ESystemMessageType> MessageType, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnDisplaySystemMessage");

	UHudMain_C_OnDisplaySystemMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnDisplayKilledMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (CPF_Parm)

void UHudMain_C::OnDisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnDisplayKilledMessage");

	UHudMain_C_OnDisplayKilledMessage_Params params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnButtonClick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButotnName                     (CPF_Parm, CPF_ZeroConstructor)

void UHudMain_C::OnButtonClick(const struct FString& ButotnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnButtonClick");

	UHudMain_C_OnButtonClick_Params params;
	params.ButotnName = ButotnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_HealthBar_FillColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UHudMain_C::Get_HealthBar_FillColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_HealthBar_FillColorAndOpacity_1");

	UHudMain_C_Get_HealthBar_FillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnKey_SystemMenuOrEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape");

	UHudMain_C_OnKey_SystemMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_Vehicle_Health_Ratio
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UHudMain_C::Get_Vehicle_Health_Ratio()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_Vehicle_Health_Ratio");

	UHudMain_C_Get_Vehicle_Health_Ratio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.GetFillColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UHudMain_C::GetFillColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.GetFillColorAndOpacity_1");

	UHudMain_C_GetFillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_DebugInformation_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHudMain_C::Get_DebugInformation_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_DebugInformation_Text_1");

	UHudMain_C_Get_DebugInformation_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnToggleMap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnToggleMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnToggleMap");

	UHudMain_C_OnToggleMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_ToggleInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnKey_ToggleInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_ToggleInventory");

	UHudMain_C_OnKey_ToggleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_PlayerCoordinate_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHudMain_C::Get_PlayerCoordinate_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_PlayerCoordinate_Text_1");

	UHudMain_C_Get_PlayerCoordinate_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_NumPlayersLeft_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHudMain_C::Get_NumPlayersLeft_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_NumPlayersLeft_Text_1");

	UHudMain_C_Get_NumPlayersLeft_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_Health_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHudMain_C::Get_Health_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_Health_Text_1");

	UHudMain_C_Get_Health_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_HealthMax_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHudMain_C::Get_HealthMax_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Get_HealthMax_Text_1");

	UHudMain_C_Get_HealthMax_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.GetHpRatio
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UHudMain_C::GetHpRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.GetHpRatio");

	UHudMain_C_GetHpRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnPossessPawnChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::OnPossessPawnChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnPossessPawnChange");

	UHudMain_C_OnPossessPawnChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.InitializeHUD
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::InitializeHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.InitializeHUD");

	UHudMain_C_InitializeHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHudMain_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Construct");

	UHudMain_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnShowWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WidgetName                     (CPF_Parm, CPF_ZeroConstructor)
// bool                           bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::OnShowWidget(const struct FString& WidgetName, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnShowWidget");

	UHudMain_C_OnShowWidget_Params params;
	params.WidgetName = WidgetName;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.HideMapForReplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::HideMapForReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.HideMapForReplay");

	UHudMain_C_HideMapForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CheckReplayTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::CheckReplayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.CheckReplayTimer");

	UHudMain_C_CheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CreateCheckReplayTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::CreateCheckReplayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.CreateCheckReplayTimer");

	UHudMain_C_CreateCheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Tick");

	UHudMain_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ExecuteUbergraph_HudMain
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::ExecuteUbergraph_HudMain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.ExecuteUbergraph_HudMain");

	UHudMain_C_ExecuteUbergraph_HudMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHudMain_C::ButtonClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature");

	UHudMain_C_ButtonClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
