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

// Function CountDownWidget.CountDownWidget_C.GetTslGameState
struct UCountDownWidget_C_GetTslGameState_Params
{
	class ATslGameState*                               GameState;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CountDownWidget.CountDownWidget_C.On_CountDownBlock_Prepass_1
struct UCountDownWidget_C_On_CountDownBlock_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CountDownWidget.CountDownWidget_C.On_CountDownText_Prepass_1
struct UCountDownWidget_C_On_CountDownText_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Visibility_1
struct UCountDownWidget_C_Get_CountDownText_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Text_1
struct UCountDownWidget_C_Get_CountDownText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
