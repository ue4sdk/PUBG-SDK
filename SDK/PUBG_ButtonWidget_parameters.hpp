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

// Function ButtonWidget.ButtonWidget_C.MakeBrush
struct UButtonWidget_C_MakeBrush_Params
{
	class UTexture2D*                                  Texture;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function ButtonWidget.ButtonWidget_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
struct UButtonWidget_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ButtonWidget.ButtonWidget_C.Construct
struct UButtonWidget_C_Construct_Params
{
};

// Function ButtonWidget.ButtonWidget_C.ExecuteUbergraph_ButtonWidget
struct UButtonWidget_C_ExecuteUbergraph_ButtonWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnClickedEventDispatcher__DelegateSignature
struct UButtonWidget_C_OnClickedEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
