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

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeIn
struct UNewSystemMessageWidget_C_StartFadeIn_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeOutAnimation
struct UNewSystemMessageWidget_C_GetFadeOutAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeInAnimation
struct UNewSystemMessageWidget_C_GetFadeInAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.SetTextSize
struct UNewSystemMessageWidget_C_SetTextSize_Params
{
	class UTextBlock*                                  TextBlock;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeOut
struct UNewSystemMessageWidget_C_StartFadeOut_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeOutFinished
struct UNewSystemMessageWidget_C_OnFadeOutFinished_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeInFinished
struct UNewSystemMessageWidget_C_OnFadeInFinished_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.InitializeMessage
struct UNewSystemMessageWidget_C_InitializeMessage_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.Construct
struct UNewSystemMessageWidget_C_Construct_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.ExecuteUbergraph_NewSystemMessageWidget
struct UNewSystemMessageWidget_C_ExecuteUbergraph_NewSystemMessageWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.EndMessage__DelegateSignature
struct UNewSystemMessageWidget_C_EndMessage__DelegateSignature_Params
{
	class UNewSystemMessageWidget_C*                   SystemMessage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
