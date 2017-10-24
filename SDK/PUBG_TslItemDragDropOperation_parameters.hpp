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

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemAttachment
struct UTslItemDragDropOperation_C_IsDragDroppingItemAttachment_Params
{
	bool                                               IsAttachment;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemWeapon
struct UTslItemDragDropOperation_C_IsDragDroppingItemWeapon_Params
{
	bool                                               IsWeapon;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsInEquipment
struct UTslItemDragDropOperation_C_IsInEquipment_Params
{
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetCurrentOtherContainer
struct UTslItemDragDropOperation_C_GetCurrentOtherContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.LeaveOtherContainer
struct UTslItemDragDropOperation_C_LeaveOtherContainer_Params
{
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.EnterOtherContainer
struct UTslItemDragDropOperation_C_EnterOtherContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    NewOtherContainer;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsEnableAction
struct UTslItemDragDropOperation_C_IsEnableAction_Params
{
	bool                                               IsEnableAction;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetActionName
struct UTslItemDragDropOperation_C_GetActionName_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetOptions
struct UTslItemDragDropOperation_C_GetOptions_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
