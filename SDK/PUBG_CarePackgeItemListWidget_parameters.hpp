#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
