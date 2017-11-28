#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C
// 0x00B8 (0x0330 - 0x0278)
class UWeaponEquipmentWidget_Gamepad_C : public UInventoryBaseWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x0280(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UBorder*                                     FocusColorBG;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UWeaponEquipmentSlotWidget_Gamepad_C*        Weapon_01;                                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UWeaponEquipmentSlotWidget_Gamepad_C*        Weapon_02;                                                // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UWeaponEquipmentSlotWidget_Gamepad_C*        Weapon_03;                                                // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UWeaponEquipmentSlotWidget_Gamepad_C*        Weapon_04;                                                // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UWeaponEquipmentSlotWidget_Gamepad_C*        Weapon_05;                                                // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FText                                       TitleText;                                                // 0x02B8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                SelectedTabIndex;                                         // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class AWeaponProcessor*                            WeaponProcessor;                                          // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UWeaponEquipmentSlotWidget_Gamepad_C*> WeaponSlotList;                                           // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               Equipment;                                                // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	class UTslItemDragDropOperation_C*                 TslItemDragDropOperation;                                 // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                FocusIndex;                                               // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bWantFocus;                                               // 0x0304(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	int                                                SelfPuFocusIndex;                                         // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttachmentFocused;                                      // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponEquipmentFocused;                                 // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x69dc5455);
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
	void GetInventoryGamePad(class UInventoryWidget_Gamepad_C** Gamepad);
	void IsSelfPutMode(bool* IsSelfPutMode);
	void OnMoveDownPressed();
	void OnMoveUpPressed();
	void SelfUpAttachmentIndexUp();
	void PutAttachment();
	void StopSelftattachmentPut();
	void StartSelfAttachmentPut(bool* bResult);
	void OnChildSlotRefreshFocus();
	void FindFirtFocusableWidgetIndex(int* Index);
	void GetFocusableDownChildIndex(int* Index);
	void GetFocusableUpChildIndex(int* Index);
	void GetFocusableRightChildIndex(int* Index);
	void GetFocusableLeftChildIdnex(int* Index);
	void GetEquipment(class AEquipment** Equipment);
	void MainPrepass(class UWidget* BoundWidget);
	void InitializeWeaponEquipment();
	bool OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void GetWeaponItemByTabIndex(int Index, class UWeaponItem** WeaponItem);
	void Construct();
	void OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void SetInventoryWidget(class UInventoryWidget_C** Inventory);
	void BndEvt__Weapon_01_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature();
	void BndEvt__Weapon_02_K2Node_ComponentBoundEvent_75_RefreshFocus__DelegateSignature();
	void BndEvt__Weapon_03_K2Node_ComponentBoundEvent_90_RefreshFocus__DelegateSignature();
	void BndEvt__Weapon_04_K2Node_ComponentBoundEvent_106_RefreshFocus__DelegateSignature();
	void BndEvt__Weapon_05_K2Node_ComponentBoundEvent_123_RefreshFocus__DelegateSignature();
	void BndEvt__Weapon_01_K2Node_ComponentBoundEvent_56_OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void BndEvt__Weapon_02_K2Node_ComponentBoundEvent_77_OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void BndEvt__Weapon_03_K2Node_ComponentBoundEvent_104_OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void BndEvt__Weapon_04_K2Node_ComponentBoundEvent_133_OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void BndEvt__Weapon_05_K2Node_ComponentBoundEvent_162_OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void BndEvt__Weapon_01_K2Node_ComponentBoundEvent_412_OnWeaponEquipmentFocused__DelegateSignature(EEquipSlotID EquipSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void BndEvt__Weapon_02_K2Node_ComponentBoundEvent_433_OnWeaponEquipmentFocused__DelegateSignature(EEquipSlotID EquipSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void BndEvt__Weapon_03_K2Node_ComponentBoundEvent_465_OnWeaponEquipmentFocused__DelegateSignature(EEquipSlotID EquipSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void BndEvt__Weapon_04_K2Node_ComponentBoundEvent_498_OnWeaponEquipmentFocused__DelegateSignature(EEquipSlotID EquipSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void BndEvt__Weapon_05_K2Node_ComponentBoundEvent_532_OnWeaponEquipmentFocused__DelegateSignature(EEquipSlotID EquipSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void ExecuteUbergraph_WeaponEquipmentWidget_Gamepad(int EntryPoint);
	void OnWeaponEquipmentFocused__DelegateSignature(EEquipSlotID EquipSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
	void OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
