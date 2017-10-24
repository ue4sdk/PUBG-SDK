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

// Function ItemSlotWidget.ItemSlotWidget_C.IsFocusable
struct UItemSlotWidget_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputLB
struct UItemSlotWidget_C_InputLB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputLT
struct UItemSlotWidget_C_InputLT_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputRB
struct UItemSlotWidget_C_InputRB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputRT
struct UItemSlotWidget_C_InputRT_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetFocusingChildWidget
struct UItemSlotWidget_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputA
struct UItemSlotWidget_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputB
struct UItemSlotWidget_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputX
struct UItemSlotWidget_C_InputX_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputY
struct UItemSlotWidget_C_InputY_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetDownWidget
struct UItemSlotWidget_C_GetDownWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetLeftWidget
struct UItemSlotWidget_C_GetLeftWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetRightWidget
struct UItemSlotWidget_C_GetRightWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetUpWidget
struct UItemSlotWidget_C_GetUpWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Down
struct UItemSlotWidget_C_Down_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsFocus
struct UItemSlotWidget_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Left
struct UItemSlotWidget_C_Left_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Right
struct UItemSlotWidget_C_Right_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.SetFocus
struct UItemSlotWidget_C_SetFocus_Params
{
	bool                                               NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Up
struct UItemSlotWidget_C_Up_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetSlotItem
struct UItemSlotWidget_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetSlotContainer
struct UItemSlotWidget_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_UseInfo_Text_Prepass_1
struct UItemSlotWidget_C_On_UseInfo_Text_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_CategoryText_Prepass_1
struct UItemSlotWidget_C_On_CategoryText_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_CategoryLayer_Prepass_1
struct UItemSlotWidget_C_On_CategoryLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_ItemMainLayer_Prepass_1
struct UItemSlotWidget_C_On_ItemMainLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsCastableItem
struct UItemSlotWidget_C_IsCastableItem_Params
{
	bool                                               IsCastableItem;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_DurabilityGauge_Prepass_1
struct UItemSlotWidget_C_On_DurabilityGauge_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_DurabilityBorder_Prepass_1
struct UItemSlotWidget_C_On_DurabilityBorder_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsUsableItemSlot
struct UItemSlotWidget_C_IsUsableItemSlot_Params
{
	TScriptInterface<class USlotInterface>             Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsAttachableItemSlot
struct UItemSlotWidget_C_IsAttachableItemSlot_Params
{
	TScriptInterface<class USlotInterface>             Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               return_node;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.isPickupableDropItemSlot
struct UItemSlotWidget_C_isPickupableDropItemSlot_Params
{
	TScriptInterface<class USlotInterface>             Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               return_value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Get_UseInfo_Text_ColorAndOpacity_1
struct UItemSlotWidget_C_Get_UseInfo_Text_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_CastingBarLayer_Prepass_1
struct UItemSlotWidget_C_On_CastingBarLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetToolTipWidget_1
struct UItemSlotWidget_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetOperationSpawnValue
struct UItemSlotWidget_C_GetOperationSpawnValue_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWeaponItem*                                 WeaponItem;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UThrowableItem*                              ThrowableItem;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAttachableItem*                             AttachmentItem;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateItemIfoVisibility
struct UItemSlotWidget_C_UpdateItemIfoVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateInnerItemSlotListVisibility
struct UItemSlotWidget_C_UpdateInnerItemSlotListVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateOpenButtonVisibility
struct UItemSlotWidget_C_UpdateOpenButtonVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateEquipableIconVisibility
struct UItemSlotWidget_C_UpdateEquipableIconVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateUseButtonVisibility
struct UItemSlotWidget_C_UpdateUseButtonVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateStackCountVisibility
struct UItemSlotWidget_C_UpdateStackCountVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.DialogButtonDown
struct UItemSlotWidget_C_DialogButtonDown_Params
{
	TEnumAsByte<EPopupButtonID>                        ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_Brackground_Prepass_1
struct UItemSlotWidget_C_On_Brackground_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateIconSizeRatio
struct UItemSlotWidget_C_UpdateIconSizeRatio_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateUseText
struct UItemSlotWidget_C_UpdateUseText_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateButtonIconIndex
struct UItemSlotWidget_C_UpdateButtonIconIndex_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateSlot
struct UItemSlotWidget_C_UpdateSlot_Params
{
	TScriptInterface<class USlotInterface>             Item_SlotInterface;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsPackaged;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSort;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateItemVisibility
struct UItemSlotWidget_C_UpdateItemVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateStackCountText
struct UItemSlotWidget_C_UpdateStackCountText_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateItemIconImage
struct UItemSlotWidget_C_UpdateItemIconImage_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateSlotName
struct UItemSlotWidget_C_UpdateSlotName_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetItemCount
struct UItemSlotWidget_C_GetItemCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.CreateTslDragDropOperation
struct UItemSlotWidget_C_CreateTslDragDropOperation_Params
{
	class UTslItemDragDropOperation_C*                 OutOperation;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetOpenButtonVisibility
struct UItemSlotWidget_C_GetOpenButtonVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.DispatchRefreshInnerList
struct UItemSlotWidget_C_DispatchRefreshInnerList_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsDraggable
struct UItemSlotWidget_C_IsDraggable_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnDragDetected
struct UItemSlotWidget_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnMouseButtonDown
struct UItemSlotWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetContentCount
struct UItemSlotWidget_C_GetContentCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Refresh
struct UItemSlotWidget_C_Refresh_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetInnerContainerVisibility
struct UItemSlotWidget_C_GetInnerContainerVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetPackagedLabelVisibility
struct UItemSlotWidget_C_GetPackagedLabelVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetIconVisibility
struct UItemSlotWidget_C_GetIconVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetAmmountTextVisibility
struct UItemSlotWidget_C_GetAmmountTextVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetAmmountText
struct UItemSlotWidget_C_GetAmmountText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetUseButtonVisibility
struct UItemSlotWidget_C_GetUseButtonVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetIconTexture
struct UItemSlotWidget_C_GetIconTexture_Params
{
	class UTexture*                                    Tex;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetSlotName
struct UItemSlotWidget_C_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnMouseEnter
struct UItemSlotWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Destruct
struct UItemSlotWidget_C_Destruct_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnMouseLeave
struct UItemSlotWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.BndEvt__InnerItemSlotListWidget_K2Node_ComponentBoundEvent_0_OnChildSlotFocus__DelegateSignature
struct UItemSlotWidget_C_BndEvt__InnerItemSlotListWidget_K2Node_ComponentBoundEvent_0_OnChildSlotFocus__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.ShowToolTip
struct UItemSlotWidget_C_ShowToolTip_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.Construct
struct UItemSlotWidget_C_Construct_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnInputXPressed
struct UItemSlotWidget_C_OnInputXPressed_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnInputXReleased
struct UItemSlotWidget_C_OnInputXReleased_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.UI_Gamepad_B_Pressed
struct UItemSlotWidget_C_UI_Gamepad_B_Pressed_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.UI_Gamepad_B_Released
struct UItemSlotWidget_C_UI_Gamepad_B_Released_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.Tick
struct UItemSlotWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnButtonClicked
struct UItemSlotWidget_C_OnButtonClicked_Params
{
	TEnumAsByte<EPopupButtonID>                        ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnInputWidgetInputB
struct UItemSlotWidget_C_OnInputWidgetInputB_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.ExecuteUbergraph_ItemSlotWidget
struct UItemSlotWidget_C_ExecuteUbergraph_ItemSlotWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.RefreshFocus__DelegateSignature
struct UItemSlotWidget_C_RefreshFocus__DelegateSignature_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnRefreshInnerList__DelegateSignature
struct UItemSlotWidget_C_OnRefreshInnerList__DelegateSignature_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnSlotFocus__DelegateSignature
struct UItemSlotWidget_C_OnSlotFocus__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
