#pragma once

// PlayerUnknown's Battlegrounds (2.6.30.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InventorySlotBaseWidget.InventorySlotBaseWidget_C
// 0x00A0 (0x02F0 - 0x0250)
class UInventorySlotBaseWidget_C : public USlotBaseWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TEnumAsByte<EEquipSlotID>                          EquipSlotID;                                              // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	int                                                WeaponSlotIndex;                                          // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    SlotBackground_NormalEmpty;                               // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    SlotBackground_Normal;                                    // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    SlotBackground_On;                                        // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    SlotBackGround_SubOn;                                     // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    SlotBackground_Over;                                      // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMouseOver;                                               // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SlotDynamicMaterial;                                      // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       TexParm;                                                  // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UImage*                                      ItemIcon;                                                 // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IconSize;                                                 // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class AEquipment*                                  Equipment;                                                // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AWeaponProcessor*                            WeaponProcessor;                                          // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UItem*                                       Item;                                                     // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslItemDragDropOperation_C*                 TslItemDragDropOperation;                                 // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ToolTipShowDelaytime;                                     // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UInventoryWidget_C*                          InventoryWidget;                                          // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    RefreshFocus;                                             // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventorySlotBaseWidget.InventorySlotBaseWidget_C");
		return ptr;
	}


	bool IsFocusable();
	bool Down();
	class UUserWidget* GetDownWidget();
	class UUserWidget* GetFocusingChildWidget();
	class UUserWidget* GetLeftWidget();
	class UUserWidget* GetRightWidget();
	class UUserWidget* GetUpWidget();
	bool InputA();
	bool InputB();
	bool InputLB();
	bool InputLT();
	bool InputRB();
	bool InputRT();
	bool InputX();
	bool InputY();
	bool IsFocus();
	bool Left();
	bool Right();
	bool SetFocus(bool NewFocus);
	bool Up();
	void GetBackgroundState(float* State);
	void GetInventoryWidget(class UInventoryWidget_C** InventoryWidget);
	void GetOperationSpawnValue_Bp(class UItem** Item, class UEquipableItem** EquipableItem, class UWeaponItem** WeaponItem, class UThrowableItem** ThrowableItem, class UAttachableItem** AttachmentItem, TScriptInterface<class USlotInterface>* SlotItem, TScriptInterface<class USlotContainerInterface>* Container);
	void GetOptions_Bp(struct FString* Options);
	void CreateTslDragDropOperation_Bp(class UTslItemDragDropOperation_C** OutOperation);
	void GetItem_Bp(class UItem** Item);
	void UpdateItem_Bp(class UWidget* BoundWidget);
	struct FSlateBrush GetIcon_Bp();
	void UpdateItemIcon_Bp(class UWidget* BoundWidget);
	void UpdateIconVisibility_Bp(class UWidget* BoundWidget);
	void IsSlotMouseOver_Bp(bool* IsMouseOver);
	void UpdateSlotBackground_Bp(class UWidget* BoundWidget);
	void GetTslItemDragDropOperation_Bp(class UTslItemDragDropOperation_C** TslItemDragDropOperation);
	void IsSlotSubOn_Bp(bool* SubOn);
	void IsSlotOn_Bp(bool* IsOn);
	void GetBackgroundTexture_Bp(class UTexture** BackgroundTexture);
	void UpdateDragDroppingItem(class UItem* DroppingItem);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void OnUpdateItem(class UItem* Item);
	void Destruct();
	void ShowToolTip();
	void UpdateDragDropObject(class UTslItemDragDropOperation_C* DragDropObject);
	void SetInventory(class UInventoryWidget_C* InventoryWidget);
	void Construct();
	void UI_Gamepad_B();
	void OnWidgetInputX();
	void OnInputWidgetInputB();
	void ExecuteUbergraph_InventorySlotBaseWidget(int EntryPoint);
	void RefreshFocus__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
