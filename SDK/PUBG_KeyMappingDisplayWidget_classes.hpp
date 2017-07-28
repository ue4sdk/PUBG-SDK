#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass KeyMappingDisplayWidget.KeyMappingDisplayWidget_C
// 0x0048 (0x0288 - 0x0240)
class UKeyMappingDisplayWidget_C : public UBaseOptionWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                KeySlotList;                                              // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       InputName;                                                // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       KeyDisplayName;                                           // 0x0258(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Scale;                                                    // 0x0270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAxis : 1;                                                // 0x0274(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	TArray<struct FTslInputKey>                        KeyList;                                                  // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyMappingDisplayWidget.KeyMappingDisplayWidget_C");
		return ptr;
	}


	void UPdateKeySlot();
	void GetCurrentSettingsKeyList(TArray<struct FTslInputKey>* CurrentKeyList);
	void IsChanged(bool* bChanged);
	void OnChange(const struct FTslInputKey& OriginKey, const struct FTslInputKey& ChangeKey);
	void OnDelete(const struct FTslInputKey& DeleteKey);
	void OnAdd(const struct FTslInputKey& NewKey);
	void UpdateKeyList();
	void OnKeySlotButtonClicked(TEnumAsByte<EKeyState> KeyState, const struct FTslInputKey& OriginKey, const struct FTslInputKey& LastDownKey);
	void InitializeMappingDisplaySlot();
	struct FText GetDisplayName();
	void Construct();
	void OnApply();
	void ExecuteUbergraph_KeyMappingDisplayWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
