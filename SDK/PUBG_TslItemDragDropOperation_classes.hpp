#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslItemDragDropOperation.TslItemDragDropOperation_C
// 0x0080 (0x0108 - 0x0088)
class UTslItemDragDropOperation_C : public UDragDropOperation
{
public:
	class UItem*                                       DragDroppingItem;                                         // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MouseOverWeaponSlotIndex;                                 // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UEquipableItem*                              DragDroppingEquipableItem;                                // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWeaponItem*                                 DragDroppingWeaponItem;                                   // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UThrowableItem*                              DragDroppingThrowableItem;                                // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MouseOverAttachmentWeaponSlotIndex;                       // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EWeaponAttachmentSlotID>               MouseOverAttachmentSlotId;                                // 0x00B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	class UAttachableItem*                             DragDroppingAttachableItem;                               // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsMouseOverVicinity;                                     // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsMouseOverInventory;                                    // 0x00C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsMouseOverEquipment;                                    // 0x00C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsMouseOverWeaponEquipment;                              // 0x00C3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsMouseOverAttachmentSlot;                               // 0x00C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	TScriptInterface<class USlotContainerInterface>    Container;                                                // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotInterface>             Slot;                                                     // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DragDroppingWeaponIndex;                                  // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EEquipSlotID>                          MouseOverSlotId;                                          // 0x00EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	TArray<TScriptInterface<class USlotContainerInterface>> OtherContainerStack;                                      // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       ActionName;                                               // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TslItemDragDropOperation.TslItemDragDropOperation_C");
		return ptr;
	}


	void IsDragDroppingItemAttachment(bool* IsAttachment);
	void IsDragDroppingItemWeapon(bool* IsWeapon);
	void IsInEquipment(bool* NewParam);
	void GetCurrentOtherContainer(TScriptInterface<class USlotContainerInterface>* OtherContainer);
	void LeaveOtherContainer();
	void EnterOtherContainer(const TScriptInterface<class USlotContainerInterface>& NewOtherContainer);
	void IsEnableAction(bool* IsEnableAction);
	void GetActionName(struct FName* ActionName);
	void GetOptions(struct FString* Options);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
