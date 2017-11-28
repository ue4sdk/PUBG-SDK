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

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.OnPrepass_1
struct USectionTitleWidget_Gamepad_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetSubFocus
struct USectionTitleWidget_Gamepad_C_SetSubFocus_Params
{
	bool                                               bSubFocus;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetFocus
struct USectionTitleWidget_Gamepad_C_SetFocus_Params
{
	bool                                               bFocus;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.GetFocusMaterial
struct USectionTitleWidget_Gamepad_C_GetFocusMaterial_Params
{
	class UMaterialInstanceDynamic*                    FocusMaterial;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Construct
struct USectionTitleWidget_Gamepad_C_Construct_Params
{
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Tick
struct USectionTitleWidget_Gamepad_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.ExecuteUbergraph_SectionTitleWidget_Gamepad
struct USectionTitleWidget_Gamepad_C_ExecuteUbergraph_SectionTitleWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
