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

// WidgetBlueprintGeneratedClass ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C
// 0x0008 (0x0248 - 0x0240)
class UListBaseGroupWidget_Gamepad_C : public UUserWidget
{
public:
	class UVerticalBox*                                List;                                                     // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4544eebd);
		return ptr;
	}


	void GetChilderenCount(int* Count);
	void AddChild(class UWidget** Content);
	void Clear();
	void On_List_Prepass_1(class UWidget* BoundWidget);
	void AddCategoryGroup(class UCategoryGroupWidget_Gamepad_C* CategoryGroup);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
