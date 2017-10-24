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

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.SetCarePackgeItemList
struct UCarePackgeItemListWidget_C_SetCarePackgeItemList_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemIcons
struct UCarePackgeItemListWidget_C_GetCarePackageItemIcons_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideCarePackageItemList
struct UCarePackgeItemListWidget_C_HideCarePackageItemList_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemWidget
struct UCarePackgeItemListWidget_C_GetCarePackageItemWidget_Params
{
	class UTexture*                                    ItemIcon;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ItemName;                                                 // (CPF_Parm)
	int                                                ItemCount;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCarePackageItemSlotWidget_C*                CarePackageItemSlotWidget;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItemList
struct UCarePackgeItemListWidget_C_ShowCarePackageItemList_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.Construct
struct UCarePackgeItemListWidget_C_Construct_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItem
struct UCarePackgeItemListWidget_C_ShowCarePackageItem_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ExecuteUbergraph_CarePackgeItemListWidget
struct UCarePackgeItemListWidget_C_ExecuteUbergraph_CarePackgeItemListWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.EventDispatcher_ShowCarePackageItem__DelegateSignature
struct UCarePackgeItemListWidget_C_EventDispatcher_ShowCarePackageItem__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
