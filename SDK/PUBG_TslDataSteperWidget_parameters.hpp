#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslDataSteperWidget.TslDataSteperWidget_C.GetGamePadHelpWidgetClass
struct UTslDataSteperWidget_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.PrevOption
struct UTslDataSteperWidget_C_PrevOption_Params
{
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.NextOption
struct UTslDataSteperWidget_C_NextOption_Params
{
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.SetSelectedOption
struct UTslDataSteperWidget_C_SetSelectedOption_Params
{
	struct FString                                     SelectOption;                                             // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.AddOption
struct UTslDataSteperWidget_C_AddOption_Params
{
	struct FString                                     NewOption;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.ClearOption
struct UTslDataSteperWidget_C_ClearOption_Params
{
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.GetSelectedOption
struct UTslDataSteperWidget_C_GetSelectedOption_Params
{
	struct FString                                     SelectOption;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.OnKeyDown
struct UTslDataSteperWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.OnKeyUp
struct UTslDataSteperWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.ProcessKeyDown
struct UTslDataSteperWidget_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
	struct FEventReply                                 Reply;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.OnFocusReceived
struct UTslDataSteperWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.OnPrepass_1
struct UTslDataSteperWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.GetDisplayName
struct UTslDataSteperWidget_C_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
