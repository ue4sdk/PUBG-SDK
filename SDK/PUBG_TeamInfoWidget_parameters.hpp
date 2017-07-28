#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TeamInfoWidget.TeamInfoWidget_C.OnMainPrepass
struct UTeamInfoWidget_C_OnMainPrepass_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.OnPrepassUpdateGauge
struct UTeamInfoWidget_C_OnPrepassUpdateGauge_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.On_InfoIcon_Prepass_1
struct UTeamInfoWidget_C_On_InfoIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.On_TeamInfoIconLayer_Prepass_1
struct UTeamInfoWidget_C_On_TeamInfoIconLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.CheckTeamInstanceValid
struct UTeamInfoWidget_C_CheckTeamInstanceValid_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.UpdateMapMarkerVisibility
struct UTeamInfoWidget_C_UpdateMapMarkerVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.On_MarkerImage_Prepass_1
struct UTeamInfoWidget_C_On_MarkerImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.On_TeamNameBorder_Prepass_1
struct UTeamInfoWidget_C_On_TeamNameBorder_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.IsOffline
struct UTeamInfoWidget_C_IsOffline_Params
{
	bool                                               bOffline;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.On_SpeakingImage_Prepass_1
struct UTeamInfoWidget_C_On_SpeakingImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.UpdateVivoxChat
struct UTeamInfoWidget_C_UpdateVivoxChat_Params
{
	struct FString                                     UniqueId;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsTeamChannel;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsSpeaking;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Energy;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.BindVoiceEvent
struct UTeamInfoWidget_C_BindVoiceEvent_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.OnPrepass_HPGaugeVisibility
struct UTeamInfoWidget_C_OnPrepass_HPGaugeVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.IsDead
struct UTeamInfoWidget_C_IsDead_Params
{
	bool                                               Dead;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.GetVisibility_1
struct UTeamInfoWidget_C_GetVisibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.GetRideVehicleType
struct UTeamInfoWidget_C_GetRideVehicleType_Params
{
	TEnumAsByte<ETeamVehicleType>                      Vehicle;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.GetGroggyHealthPercent
struct UTeamInfoWidget_C_GetGroggyHealthPercent_Params
{
	float                                              GroggyHealthPercent;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.GetIcon
struct UTeamInfoWidget_C_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TeamInfoWidget.TeamInfoWidget_C.IsGroggy
struct UTeamInfoWidget_C_IsGroggy_Params
{
	bool                                               bGroggy;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.GetLifePercent
struct UTeamInfoWidget_C_GetLifePercent_Params
{
	float                                              HealthPercent;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.UpdateGauge
struct UTeamInfoWidget_C_UpdateGauge_Params
{
};

// Function TeamInfoWidget.TeamInfoWidget_C.GetCharacterName
struct UTeamInfoWidget_C_GetCharacterName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TeamInfoWidget.TeamInfoWidget_C.GetFillColor
struct UTeamInfoWidget_C_GetFillColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.OnVoiceChat
struct UTeamInfoWidget_C_OnVoiceChat_Params
{
	bool                                               bSeaking;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Energy;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TeamInfoWidget.TeamInfoWidget_C.On Animation Start
struct UTeamInfoWidget_C_On_Animation_Start_Params
{
};

// Function TeamInfoWidget.TeamInfoWidget_C.OnAnimationFinish
struct UTeamInfoWidget_C_OnAnimationFinish_Params
{
};

// Function TeamInfoWidget.TeamInfoWidget_C.Destruct
struct UTeamInfoWidget_C_Destruct_Params
{
};

// Function TeamInfoWidget.TeamInfoWidget_C.Construct
struct UTeamInfoWidget_C_Construct_Params
{
};

// Function TeamInfoWidget.TeamInfoWidget_C.ExecuteUbergraph_TeamInfoWidget
struct UTeamInfoWidget_C_ExecuteUbergraph_TeamInfoWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
