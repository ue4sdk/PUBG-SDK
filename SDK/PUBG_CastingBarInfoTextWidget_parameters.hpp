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

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.On_CastingInfoCancelMsgLayer_Prepass_1
struct UCastingBarInfoTextWidget_C_On_CastingInfoCancelMsgLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.OnCastCancleorFinish
struct UCastingBarInfoTextWidget_C_OnCastCancleorFinish_Params
{
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.OnCastStart
struct UCastingBarInfoTextWidget_C_OnCastStart_Params
{
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Get_CastingInfoCancelMsgLayer_ContentColorAndOpacity_1
struct UCastingBarInfoTextWidget_C_Get_CastingInfoCancelMsgLayer_ContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.On_CastingInfoCancelMsgBox_Prepass_1
struct UCastingBarInfoTextWidget_C_On_CastingInfoCancelMsgBox_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Get_KeyText_Text_1
struct UCastingBarInfoTextWidget_C_Get_KeyText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.OnPrepass_1
struct UCastingBarInfoTextWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.GetVisibility_1
struct UCastingBarInfoTextWidget_C_GetVisibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.GetCastName
struct UCastingBarInfoTextWidget_C_GetCastName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Tick
struct UCastingBarInfoTextWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Construct
struct UCastingBarInfoTextWidget_C_Construct_Params
{
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Destruct
struct UCastingBarInfoTextWidget_C_Destruct_Params
{
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.ExecuteUbergraph_CastingBarInfoTextWidget
struct UCastingBarInfoTextWidget_C_ExecuteUbergraph_CastingBarInfoTextWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
