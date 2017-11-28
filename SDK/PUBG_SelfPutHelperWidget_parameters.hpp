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

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFromWeapon
struct USelfPutHelperWidget_C_SwapFromWeapon_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormEquipment
struct USelfPutHelperWidget_C_SwapFormEquipment_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormVicnityOrInventory
struct USelfPutHelperWidget_C_SwapFormVicnityOrInventory_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.IsSelfPutMode
struct USelfPutHelperWidget_C_IsSelfPutMode_Params
{
	bool                                               bIsSelfPutMode;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.GetFocusData
struct USelfPutHelperWidget_C_GetFocusData_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        EnableWeaponIndex;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.NextWeapon
struct USelfPutHelperWidget_C_NextWeapon_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.PrevWeapon
struct USelfPutHelperWidget_C_PrevWeapon_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Put
struct USelfPutHelperWidget_C_Put_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Stop
struct USelfPutHelperWidget_C_Stop_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.StartSelfPutItem
struct USelfPutHelperWidget_C_StartSelfPutItem_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bResult;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartWeaponIndex;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.OnNotifySelfPut__DelegateSignature
struct USelfPutHelperWidget_C_OnNotifySelfPut__DelegateSignature_Params
{
	bool                                               bStart;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
