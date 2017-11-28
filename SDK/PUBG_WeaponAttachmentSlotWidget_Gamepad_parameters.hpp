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

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotItem
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotContainer
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputY
struct UWeaponAttachmentSlotWidget_Gamepad_C_InputY_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputX
struct UWeaponAttachmentSlotWidget_Gamepad_C_InputX_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params
{
	class UInventoryWidget_Gamepad_C*                  NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentSlotBackground_Prepass_1
struct UWeaponAttachmentSlotWidget_Gamepad_C_On_AttachmentSlotBackground_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocusable
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocus
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputB
struct UWeaponAttachmentSlotWidget_Gamepad_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputA
struct UWeaponAttachmentSlotWidget_Gamepad_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.SetFocus
struct UWeaponAttachmentSlotWidget_Gamepad_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnDrop
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetOptoins
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetOptoins_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetDragDroppingAttachableItem
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetDragDroppingAttachableItem_Params
{
	class UAttachableItem*                             DragDroppingAttachableItem;                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_2
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentIcon_Prepass_1
struct UWeaponAttachmentSlotWidget_Gamepad_C_On_AttachmentIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params
{
	bool                                               IsMouseOver;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_1
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetItem_Bp
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotOn_Bp
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsOhterSlotMouseOver
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsOhterSlotMouseOver_Params
{
	bool                                               IsOver;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsAttachable
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsAttachable_Params
{
	bool                                               IsAttachable;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentItem
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetAttachmentItem_Params
{
	class UAttachableItem*                             AttachmentItem;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.HasAttachmentSlot
struct UWeaponAttachmentSlotWidget_Gamepad_C_HasAttachmentSlot_Params
{
	bool                                               HasAttachmentSlot;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.MainPrepass_1
struct UWeaponAttachmentSlotWidget_Gamepad_C_MainPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnDragDetected
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnMouseButtonDown
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotVisibility
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotIcon
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentNameText
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetAttachmentNameText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnDragEnter
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnDragLeave
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnMouseEnter
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnMouseLeave
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.Construct
struct UWeaponAttachmentSlotWidget_Gamepad_C_Construct_Params
{
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad
struct UWeaponAttachmentSlotWidget_Gamepad_C_ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnAttachmentFocused__DelegateSignature_Params
{
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnWidgetMove__DelegateSignature
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnWidgetMove__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
