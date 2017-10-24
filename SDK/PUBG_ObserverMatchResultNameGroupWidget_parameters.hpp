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

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.GetLineCount
struct UObserverMatchResultNameGroupWidget_C_GetLineCount_Params
{
	int                                                LineCount;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_TextBlock_4_Prepass_1
struct UObserverMatchResultNameGroupWidget_C_On_TextBlock_4_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.SetSmall
struct UObserverMatchResultNameGroupWidget_C_SetSmall_Params
{
	bool                                               bSmall;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_GroupLayer_Prepass_1
struct UObserverMatchResultNameGroupWidget_C_On_GroupLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_Octa_Prepass_1
struct UObserverMatchResultNameGroupWidget_C_On_Octa_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_Hexa_Prepass_1
struct UObserverMatchResultNameGroupWidget_C_On_Hexa_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_Squad_Prepass_1
struct UObserverMatchResultNameGroupWidget_C_On_Squad_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.On_SoloOrDuo_Prepass_1
struct UObserverMatchResultNameGroupWidget_C_On_SoloOrDuo_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.Get_TextBlock_4_Text_1
struct UObserverMatchResultNameGroupWidget_C_Get_TextBlock_4_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.AddPlayerMatchResultInfo
struct UObserverMatchResultNameGroupWidget_C_AddPlayerMatchResultInfo_Params
{
	struct FTslPlayerMatchResultInfo                   NewItem;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
