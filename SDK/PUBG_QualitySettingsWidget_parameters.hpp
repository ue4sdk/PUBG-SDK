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

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetbIsEnabled_1
struct UQualitySettingsWidget_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.SettingDefautl
struct UQualitySettingsWidget_C_SettingDefautl_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateOtionStringByUserStting
struct UQualitySettingsWidget_C_UpdateOtionStringByUserStting_Params
{
	TEnumAsByte<EQualityType>                          Selection;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateMainOptionStringByComboBox
struct UQualitySettingsWidget_C_UpdateMainOptionStringByComboBox_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetComboBox
struct UQualitySettingsWidget_C_GetComboBox_Params
{
	TEnumAsByte<EQualityType>                          Selection;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UQualityComboBox_C*                          ComboBox;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.SetQualityLevelByComboBox
struct UQualitySettingsWidget_C_SetQualityLevelByComboBox_Params
{
	TEnumAsByte<EQualityType>                          QualityType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetQualityLevelByComboBox
struct UQualitySettingsWidget_C_GetQualityLevelByComboBox_Params
{
	TEnumAsByte<EQualityType>                          QualityType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                QualityLevel;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.IsChanged
struct UQualitySettingsWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetScreenScaleValue_Slider
struct UQualitySettingsWidget_C_GetScreenScaleValue_Slider_Params
{
	float                                              ScreenScale;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.InitQualitySettingsWidget
struct UQualitySettingsWidget_C_InitQualitySettingsWidget_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.OnDefault
struct UQualitySettingsWidget_C_OnDefault_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.OnApply
struct UQualitySettingsWidget_C_OnApply_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_663_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_663_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_2029_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_2029_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__AnitiAliasingComboBox_K2Node_ComponentBoundEvent_2255_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__AnitiAliasingComboBox_K2Node_ComponentBoundEvent_2255_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_2259_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_2259_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_2264_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_2264_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_2270_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_2270_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_2277_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_2277_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_2285_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_2285_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.OnReset
struct UQualitySettingsWidget_C_OnReset_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.Construct
struct UQualitySettingsWidget_C_Construct_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.ExecuteUbergraph_QualitySettingsWidget
struct UQualitySettingsWidget_C_ExecuteUbergraph_QualitySettingsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
