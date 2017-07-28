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

// WidgetBlueprintGeneratedClass KeySttingsWidget.KeySttingsWidget_C
// 0x0068 (0x02A8 - 0x0240)
class UKeySttingsWidget_C : public UBaseOptionWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UChildOptionTitleWidget_C*                   ChildOptionTitleWidget;                                   // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UScrollBox*                                  KeyList;                                                  // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class USingKeyDisplayWidget_C*>             KeyBorders;                                               // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FName                                       CategoryName;                                             // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChangeKey;                                              // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FText                                       DisplayName;                                              // 0x0280(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class UKeyReceiverWidget_C*                        InputKeySlotWidget;                                       // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UKeyReceiverWidget_C*                        ChangeKeySlotWidget;                                      // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeySttingsWidget.KeySttingsWidget_C");
		return ptr;
	}


	void IsKeyUp(bool* Keyup);
	void IsEnableApply(bool* bResult);
	void OnInputKey(class USingKeyDisplayWidget_C* SingleKeyDisplayWidget, const struct FTslInputKey& TslInputKey);
	void SettingsDefault();
	void IsChanged(bool* bChanged);
	void InitializeKeySettingsWidget();
	void Construct();
	void OnApply();
	void OnDefault();
	void OnReset();
	void ExecuteUbergraph_KeySttingsWidget(int EntryPoint);
	void OnChangeKey__DelegateSignature(class USingKeyDisplayWidget_C* SingleKeyDisplayWidget, const struct FTslInputKey& TslInputKey);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
