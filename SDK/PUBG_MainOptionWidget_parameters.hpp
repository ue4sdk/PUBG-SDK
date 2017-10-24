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

// Function MainOptionWidget.MainOptionWidget_C.ClearOptionButtonsColors
struct UMainOptionWidget_C_ClearOptionButtonsColors_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.PopupButtonClicked
struct UMainOptionWidget_C_PopupButtonClicked_Params
{
	TEnumAsByte<EPopupButtonID>                        ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainOptionWidget.MainOptionWidget_C.Get_ResetButton_bIsEnabled_1
struct UMainOptionWidget_C_Get_ResetButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MainOptionWidget.MainOptionWidget_C.Get_OkButton_bIsEnabled_1
struct UMainOptionWidget_C_Get_OkButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MainOptionWidget.MainOptionWidget_C.ShowMessage
struct UMainOptionWidget_C_ShowMessage_Params
{
	struct FText                                       Message;                                                  // (CPF_Parm)
};

// Function MainOptionWidget.MainOptionWidget_C.OnReset
struct UMainOptionWidget_C_OnReset_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.OnDefault
struct UMainOptionWidget_C_OnDefault_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.ChangeOption
struct UMainOptionWidget_C_ChangeOption_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainOptionWidget.MainOptionWidget_C.OnApply
struct UMainOptionWidget_C_OnApply_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.CloseMainOption
struct UMainOptionWidget_C_CloseMainOption_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.IsApplyButtonEnabled
struct UMainOptionWidget_C_IsApplyButtonEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MainOptionWidget.MainOptionWidget_C.Construct
struct UMainOptionWidget_C_Construct_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature
struct UMainOptionWidget_C_BndEvt__OptionButton_3_K2Node_ComponentBoundEvent_423_OnClicked__DelegateSignature_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature
struct UMainOptionWidget_C_BndEvt__OptionButton_4_K2Node_ComponentBoundEvent_487_OnClicked__DelegateSignature_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature
struct UMainOptionWidget_C_BndEvt__OptionButton_5_K2Node_ComponentBoundEvent_515_OnClicked__DelegateSignature_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature
struct UMainOptionWidget_C_BndEvt__OptionSettingsButotn_K2Node_ComponentBoundEvent_253_OnButtonDown__DelegateSignature_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature
struct UMainOptionWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_344_OnButtonDown__DelegateSignature_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature
struct UMainOptionWidget_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_362_OnButtonDown__DelegateSignature_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature
struct UMainOptionWidget_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_403_OnButtonDown__DelegateSignature_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature
struct UMainOptionWidget_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_433_OnButtonDown__DelegateSignature_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.OnHiddenWidget
struct UMainOptionWidget_C_OnHiddenWidget_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.XBoxOnOk
struct UMainOptionWidget_C_XBoxOnOk_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.Destruct
struct UMainOptionWidget_C_Destruct_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature
struct UMainOptionWidget_C_BndEvt__OptionButton3_K2Node_ComponentBoundEvent_144_OnClicked__DelegateSignature_Params
{
};

// Function MainOptionWidget.MainOptionWidget_C.ExecuteUbergraph_MainOptionWidget
struct UMainOptionWidget_C_ExecuteUbergraph_MainOptionWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
