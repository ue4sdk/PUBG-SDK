#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReplayTimeline.ReplayTimeline_C.ClearKillEventItems
struct UReplayTimeline_C_ClearKillEventItems_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.CreateGetKillEventsTimer
struct UReplayTimeline_C_CreateGetKillEventsTimer_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.UpdatePlayPauseBtns
struct UReplayTimeline_C_UpdatePlayPauseBtns_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.SetVisibleCtrls
struct UReplayTimeline_C_SetVisibleCtrls_Params
{
	bool                                               bVisible;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.OnSpeedDown
struct UReplayTimeline_C_OnSpeedDown_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnSpeedUp
struct UReplayTimeline_C_OnSpeedUp_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnPlay
struct UReplayTimeline_C_OnPlay_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnPause
struct UReplayTimeline_C_OnPause_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnTogglePause
struct UReplayTimeline_C_OnTogglePause_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.SetEnableUI
struct UReplayTimeline_C_SetEnableUI_Params
{
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.HideKillEvents
struct UReplayTimeline_C_HideKillEvents_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.ShowKillEvents
struct UReplayTimeline_C_ShowKillEvents_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.SetCurTimeSpeed
struct UReplayTimeline_C_SetCurTimeSpeed_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.FloatToSeconds
struct UReplayTimeline_C_FloatToSeconds_Params
{
	float                                              InputTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       TextTime;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function ReplayTimeline.ReplayTimeline_C.UpdateTimeline
struct UReplayTimeline_C_UpdateTimeline_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.Construct
struct UReplayTimeline_C_Construct_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.Tick
struct UReplayTimeline_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.GetKillEventsDone
struct UReplayTimeline_C_GetKillEventsDone_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReplayTimeline_C_BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.GetKillEvents
struct UReplayTimeline_C_GetKillEvents_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.Destruct
struct UReplayTimeline_C_Destruct_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.ExecuteUbergraph_ReplayTimeline
struct UReplayTimeline_C_ExecuteUbergraph_ReplayTimeline_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
