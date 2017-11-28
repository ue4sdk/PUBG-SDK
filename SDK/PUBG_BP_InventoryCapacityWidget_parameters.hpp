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

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyItemDropped
struct UBP_InventoryCapacityWidget_C_NotifyItemDropped_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyEquipmentItemFocused
struct UBP_InventoryCapacityWidget_C_NotifyEquipmentItemFocused_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnStackCountChanged
struct UBP_InventoryCapacityWidget_C_OnStackCountChanged_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.GetStackCountWidget
struct UBP_InventoryCapacityWidget_C_GetStackCountWidget_Params
{
	class UStackCountHandlingPopupWidget_C*            AsStack_Count_Handling_Popup_Widget;                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyInventoryItemFocused
struct UBP_InventoryCapacityWidget_C_NotifyInventoryItemFocused_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ResetMaterialParams
struct UBP_InventoryCapacityWidget_C_ResetMaterialParams_Params
{
	bool                                               bResetCapacity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bResetFeedback;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetFeedbackMaterialParams
struct UBP_InventoryCapacityWidget_C_SetFeedbackMaterialParams_Params
{
	float                                              FeedbackStart;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FeedbackEnd;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsPositive;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetCapacityMaterialParams
struct UBP_InventoryCapacityWidget_C_SetCapacityMaterialParams_Params
{
	float                                              CurrMaxSpaceStart;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrSpaceStart;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyVicinityItemFocused
struct UBP_InventoryCapacityWidget_C_NotifyVicinityItemFocused_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Construct
struct UBP_InventoryCapacityWidget_C_Construct_Params
{
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Destruct
struct UBP_InventoryCapacityWidget_C_Destruct_Params
{
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnInventoryUpdated_Event_1
struct UBP_InventoryCapacityWidget_C_OnInventoryUpdated_Event_1_Params
{
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ExecuteUbergraph_BP_InventoryCapacityWidget
struct UBP_InventoryCapacityWidget_C_ExecuteUbergraph_BP_InventoryCapacityWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
