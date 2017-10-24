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

// Function TslItemDragWidget.TslItemDragWidget_C.On_ErrorIcon_Prepass_1
struct UTslItemDragWidget_C_On_ErrorIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.IsEnable
struct UTslItemDragWidget_C_IsEnable_Params
{
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.UpdateBackgroundImage
struct UTslItemDragWidget_C_UpdateBackgroundImage_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GettslItemDragDropOperation
struct UTslItemDragWidget_C_GettslItemDragDropOperation_Params
{
	class UTslItemDragDropOperation_C*                 AsTsl_Item_Drag_Drop_Operation;                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GetActionName
struct UTslItemDragWidget_C_GetActionName_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GetInventory
struct UTslItemDragWidget_C_GetInventory_Params
{
	class AInventory*                                  Inventory;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GetAdditionalMaxStackCount
struct UTslItemDragWidget_C_GetAdditionalMaxStackCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GetShooterPlayerController
struct UTslItemDragWidget_C_GetShooterPlayerController_Params
{
	class ATslPlayerController*                        ShooterPlayerController;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCount
struct UTslItemDragWidget_C_UpdateStackCount_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCountVisibility
struct UTslItemDragWidget_C_UpdateStackCountVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.UpdateIcon
struct UTslItemDragWidget_C_UpdateIcon_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.Construct
struct UTslItemDragWidget_C_Construct_Params
{
};

// Function TslItemDragWidget.TslItemDragWidget_C.Destruct
struct UTslItemDragWidget_C_Destruct_Params
{
};

// Function TslItemDragWidget.TslItemDragWidget_C.ExecuteUbergraph_TslItemDragWidget
struct UTslItemDragWidget_C_ExecuteUbergraph_TslItemDragWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
