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

// WidgetBlueprintGeneratedClass CategoryGroupWidget.CategoryGroupWidget_C
// 0x0020 (0x0260 - 0x0240)
class UCategoryGroupWidget_C : public UUserWidget
{
public:
	class UVerticalBox*                                SlotList;                                                 // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FText                                       CategoryName;                                             // 0x0248(0x0018) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CategoryGroupWidget.CategoryGroupWidget_C");
		return ptr;
	}


	void AddChild(class UWidget** Widget);
	void GetChilderenCount(int* Count);
	void Clear();
	void OnPrepass_1(class UWidget* BoundWidget);
	void AddItemSlot(class UItemSlotWidget_C** ItemSlotWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
