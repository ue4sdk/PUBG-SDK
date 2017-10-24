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

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetSlotItem
struct USmallEquipmentSlotWidget_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetSlotContainer
struct USmallEquipmentSlotWidget_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.IsFocus
struct USmallEquipmentSlotWidget_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.SetFocus
struct USmallEquipmentSlotWidget_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.On_FocusColorBG_Prepass_1
struct USmallEquipmentSlotWidget_C_On_FocusColorBG_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetItem_Bp
struct USmallEquipmentSlotWidget_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.OnPreviewMouseButtonDown
struct USmallEquipmentSlotWidget_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetIcon
struct USmallEquipmentSlotWidget_C_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.OnDragDetected
struct USmallEquipmentSlotWidget_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetSlotName
struct USmallEquipmentSlotWidget_C_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.OnUpdateItem
struct USmallEquipmentSlotWidget_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.Construct
struct USmallEquipmentSlotWidget_C_Construct_Params
{
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.ExecuteUbergraph_SmallEquipmentSlotWidget
struct USmallEquipmentSlotWidget_C_ExecuteUbergraph_SmallEquipmentSlotWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
