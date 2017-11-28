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

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetSlotItem
struct USmallEquipmentSlotWidget_Gamepad_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetSlotContainer
struct USmallEquipmentSlotWidget_Gamepad_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp
struct USmallEquipmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.IsFocus
struct USmallEquipmentSlotWidget_Gamepad_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.SetFocus
struct USmallEquipmentSlotWidget_Gamepad_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetItem_Bp
struct USmallEquipmentSlotWidget_Gamepad_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.OnPreviewMouseButtonDown
struct USmallEquipmentSlotWidget_Gamepad_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetIcon
struct USmallEquipmentSlotWidget_Gamepad_C_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.OnDragDetected
struct USmallEquipmentSlotWidget_Gamepad_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetSlotName
struct USmallEquipmentSlotWidget_Gamepad_C_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.OnUpdateItem
struct USmallEquipmentSlotWidget_Gamepad_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.Construct
struct USmallEquipmentSlotWidget_Gamepad_C_Construct_Params
{
};

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_SmallEquipmentSlotWidget_Gamepad
struct USmallEquipmentSlotWidget_Gamepad_C_ExecuteUbergraph_SmallEquipmentSlotWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
