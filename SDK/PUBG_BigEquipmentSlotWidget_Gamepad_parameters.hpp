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

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotItem
struct UBigEquipmentSlotWidget_Gamepad_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotContainer
struct UBigEquipmentSlotWidget_Gamepad_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp
struct UBigEquipmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.IsFocus
struct UBigEquipmentSlotWidget_Gamepad_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.SetFocus
struct UBigEquipmentSlotWidget_Gamepad_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetItem_Bp
struct UBigEquipmentSlotWidget_Gamepad_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetDurability
struct UBigEquipmentSlotWidget_Gamepad_C_GetDurability_Params
{
	float                                              Durability;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurationNumber
struct UBigEquipmentSlotWidget_Gamepad_C_UpdateDurationNumber_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurabilityGauge
struct UBigEquipmentSlotWidget_Gamepad_C_UpdateDurabilityGauge_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurabilityVisibility
struct UBigEquipmentSlotWidget_Gamepad_C_UpdateDurabilityVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnPreviewMouseButtonDown
struct UBigEquipmentSlotWidget_Gamepad_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.HaveDurability
struct UBigEquipmentSlotWidget_Gamepad_C_HaveDurability_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetDurabilityPercent
struct UBigEquipmentSlotWidget_Gamepad_C_GetDurabilityPercent_Params
{
	float                                              DurabilityPercent;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnDragDetected
struct UBigEquipmentSlotWidget_Gamepad_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotName
struct UBigEquipmentSlotWidget_Gamepad_C_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnUpdateItem
struct UBigEquipmentSlotWidget_Gamepad_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.Construct
struct UBigEquipmentSlotWidget_Gamepad_C_Construct_Params
{
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_BigEquipmentSlotWidget_Gamepad
struct UBigEquipmentSlotWidget_Gamepad_C_ExecuteUbergraph_BigEquipmentSlotWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnChildSlotFocus__DelegateSignature
struct UBigEquipmentSlotWidget_Gamepad_C_OnChildSlotFocus__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
