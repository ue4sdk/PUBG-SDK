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

// Function EquipmentWidget.EquipmentWidget_C.IsFocusable
struct UEquipmentWidget_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.Down
struct UEquipmentWidget_C_Down_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetDownWidget
struct UEquipmentWidget_C_GetDownWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetFocusingChildWidget
struct UEquipmentWidget_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetLeftWidget
struct UEquipmentWidget_C_GetLeftWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetRightWidget
struct UEquipmentWidget_C_GetRightWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetUpWidget
struct UEquipmentWidget_C_GetUpWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.InputA
struct UEquipmentWidget_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.InputB
struct UEquipmentWidget_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.InputLB
struct UEquipmentWidget_C_InputLB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.InputLT
struct UEquipmentWidget_C_InputLT_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.InputRB
struct UEquipmentWidget_C_InputRB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.InputRT
struct UEquipmentWidget_C_InputRT_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.InputX
struct UEquipmentWidget_C_InputX_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.InputY
struct UEquipmentWidget_C_InputY_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.IsFocus
struct UEquipmentWidget_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.Left
struct UEquipmentWidget_C_Left_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.Right
struct UEquipmentWidget_C_Right_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.SetFocus
struct UEquipmentWidget_C_SetFocus_Params
{
	bool                                               NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.Up
struct UEquipmentWidget_C_Up_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.OnChildSlotRefresh
struct UEquipmentWidget_C_OnChildSlotRefresh_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.FindFirstFocusableChildWidget
struct UEquipmentWidget_C_FindFirstFocusableChildWidget_Params
{
	class UUserWidget*                                 NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetRealChildDownWidget
struct UEquipmentWidget_C_GetRealChildDownWidget_Params
{
	class UUserWidget*                                 DownWidget;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetRealChildUpWidget
struct UEquipmentWidget_C_GetRealChildUpWidget_Params
{
	class UUserWidget*                                 UpWidget;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetRealChildRightWidget
struct UEquipmentWidget_C_GetRealChildRightWidget_Params
{
	class UUserWidget*                                 RightWidget;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetRealChildLeftWidget
struct UEquipmentWidget_C_GetRealChildLeftWidget_Params
{
	class UUserWidget*                                 LeftWidget;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetChildLeftWidget
struct UEquipmentWidget_C_GetChildLeftWidget_Params
{
	class UUserWidget*                                 NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.Get_CharacterSceneCapturedImage_Brush_1
struct UEquipmentWidget_C_Get_CharacterSceneCapturedImage_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function EquipmentWidget.EquipmentWidget_C.On_CharacterLayer_Prepass_1
struct UEquipmentWidget_C_On_CharacterLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.OnPrepass_1
struct UEquipmentWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.UpdateWeight
struct UEquipmentWidget_C_UpdateWeight_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.InitializeEquipWidget
struct UEquipmentWidget_C_InitializeEquipWidget_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.UpdateCharacter
struct UEquipmentWidget_C_UpdateCharacter_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.MainPrepass
struct UEquipmentWidget_C_MainPrepass_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.OnItemDragLeave
struct UEquipmentWidget_C_OnItemDragLeave_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.OnItemDragEnter
struct UEquipmentWidget_C_OnItemDragEnter_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.GetCharacterView
struct UEquipmentWidget_C_GetCharacterView_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function EquipmentWidget.EquipmentWidget_C.OnDrop
struct UEquipmentWidget_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.Construct
struct UEquipmentWidget_C_Construct_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.OnDragEnter
struct UEquipmentWidget_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.OnDragLeave
struct UEquipmentWidget_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.Destruct
struct UEquipmentWidget_C_Destruct_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.Tick
struct UEquipmentWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.OnSpawnActorInSceneCaptureWorld
struct UEquipmentWidget_C_OnSpawnActorInSceneCaptureWorld_Params
{
	class AActor*                                      SpawnedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.OnMouseLeave
struct UEquipmentWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function EquipmentWidget.EquipmentWidget_C.OnLookUp
struct UEquipmentWidget_C_OnLookUp_Params
{
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.OnAddYaw
struct UEquipmentWidget_C_OnAddYaw_Params
{
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquipmentWidget.EquipmentWidget_C.OnMouseEnter
struct UEquipmentWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function EquipmentWidget.EquipmentWidget_C.Custom Event_1
struct UEquipmentWidget_C_Custom_Event_1_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.Custom Event_2
struct UEquipmentWidget_C_Custom_Event_2_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Head_K2Node_ComponentBoundEvent_0_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Head_K2Node_ComponentBoundEvent_0_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_2_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_2_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__TorsoArmor_K2Node_ComponentBoundEvent_5_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__TorsoArmor_K2Node_ComponentBoundEvent_5_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Belt_K2Node_ComponentBoundEvent_9_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Belt_K2Node_ComponentBoundEvent_9_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Eyes_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Eyes_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Mask_K2Node_ComponentBoundEvent_20_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Mask_K2Node_ComponentBoundEvent_20_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Torso_K2Node_ComponentBoundEvent_27_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Torso_K2Node_ComponentBoundEvent_27_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Outer_K2Node_ComponentBoundEvent_35_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Outer_K2Node_ComponentBoundEvent_35_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Hands_K2Node_ComponentBoundEvent_44_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Hands_K2Node_ComponentBoundEvent_44_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Leg_K2Node_ComponentBoundEvent_54_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Leg_K2Node_ComponentBoundEvent_54_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.BndEvt__Feet_K2Node_ComponentBoundEvent_65_RefreshFocus__DelegateSignature
struct UEquipmentWidget_C_BndEvt__Feet_K2Node_ComponentBoundEvent_65_RefreshFocus__DelegateSignature_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.OnSlotMoveUp
struct UEquipmentWidget_C_OnSlotMoveUp_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.OnSlotMoveDown
struct UEquipmentWidget_C_OnSlotMoveDown_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.SlotMoveLeft
struct UEquipmentWidget_C_SlotMoveLeft_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.OnSlotMoveRight
struct UEquipmentWidget_C_OnSlotMoveRight_Params
{
};

// Function EquipmentWidget.EquipmentWidget_C.ExecuteUbergraph_EquipmentWidget
struct UEquipmentWidget_C_ExecuteUbergraph_EquipmentWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
