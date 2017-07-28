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

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_TslHealthGaugeBpWidget_C_1_Prepass_1
struct UMapCharacterIconWidget_C_On_TslHealthGaugeBpWidget_C_1_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_HealthGaugeLayer_Prepass_1
struct UMapCharacterIconWidget_C_On_HealthGaugeLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.OnPrepass_3
struct UMapCharacterIconWidget_C_OnPrepass_3_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.SetObserving
struct UMapCharacterIconWidget_C_SetObserving_Params
{
	bool                                               bOserver;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetTslCharacter
struct UMapCharacterIconWidget_C_GetTslCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.OnPrepass_2
struct UMapCharacterIconWidget_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_Icon_MouseButtonDown_1
struct UMapCharacterIconWidget_C_On_Icon_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.SetState
struct UMapCharacterIconWidget_C_SetState_Params
{
	int                                                State;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.OnMainPrepass
struct UMapCharacterIconWidget_C_OnMainPrepass_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.SetAngle
struct UMapCharacterIconWidget_C_SetAngle_Params
{
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetName
struct UMapCharacterIconWidget_C_GetName_Params
{
	struct FText                                       PlayerName;                                               // (CPF_Parm, CPF_OutParm)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_PlayerName_Prepass_1
struct UMapCharacterIconWidget_C_On_PlayerName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.On_Icon_Prepass_1
struct UMapCharacterIconWidget_C_On_Icon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetRotation_MC
struct UMapCharacterIconWidget_C_GetRotation_MC_Params
{
	float                                              Rotatoin;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.GetPosition_MC
struct UMapCharacterIconWidget_C_GetPosition_MC_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.Construct
struct UMapCharacterIconWidget_C_Construct_Params
{
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
struct UMapCharacterIconWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MapCharacterIconWidget.MapCharacterIconWidget_C.ExecuteUbergraph_MapCharacterIconWidget
struct UMapCharacterIconWidget_C_ExecuteUbergraph_MapCharacterIconWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
