#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.UPdateKeySlot
struct UKeyMappingDisplayWidget_C_UPdateKeySlot_Params
{
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.GetCurrentSettingsKeyList
struct UKeyMappingDisplayWidget_C_GetCurrentSettingsKeyList_Params
{
	TArray<struct FTslInputKey>                        CurrentKeyList;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.IsChanged
struct UKeyMappingDisplayWidget_C_IsChanged_Params
{
	bool                                               bChanged;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnChange
struct UKeyMappingDisplayWidget_C_OnChange_Params
{
	struct FTslInputKey                                OriginKey;                                                // (CPF_Parm)
	struct FTslInputKey                                ChangeKey;                                                // (CPF_Parm)
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnDelete
struct UKeyMappingDisplayWidget_C_OnDelete_Params
{
	struct FTslInputKey                                DeleteKey;                                                // (CPF_Parm)
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnAdd
struct UKeyMappingDisplayWidget_C_OnAdd_Params
{
	struct FTslInputKey                                NewKey;                                                   // (CPF_Parm)
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.UpdateKeyList
struct UKeyMappingDisplayWidget_C_UpdateKeyList_Params
{
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnKeySlotButtonClicked
struct UKeyMappingDisplayWidget_C_OnKeySlotButtonClicked_Params
{
	TEnumAsByte<EKeyState>                             KeyState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                OriginKey;                                                // (CPF_Parm)
	struct FTslInputKey                                LastDownKey;                                              // (CPF_Parm)
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.InitializeMappingDisplaySlot
struct UKeyMappingDisplayWidget_C_InitializeMappingDisplaySlot_Params
{
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.GetDisplayName
struct UKeyMappingDisplayWidget_C_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.Construct
struct UKeyMappingDisplayWidget_C_Construct_Params
{
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.OnApply
struct UKeyMappingDisplayWidget_C_OnApply_Params
{
};

// Function KeyMappingDisplayWidget.KeyMappingDisplayWidget_C.ExecuteUbergraph_KeyMappingDisplayWidget
struct UKeyMappingDisplayWidget_C_ExecuteUbergraph_KeyMappingDisplayWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
