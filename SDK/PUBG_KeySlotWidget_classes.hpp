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

// WidgetBlueprintGeneratedClass KeySlotWidget.KeySlotWidget_C
// 0x00B2 (0x02F2 - 0x0240)
class UKeySlotWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UButton*                                     Button_1;                                                 // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bAxis : 1;                                                // 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	struct FKey                                        FirstDownedKey;                                           // 0x0258(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTslInputKey                                CurrentDownedKey;                                         // 0x0270(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FTslInputKey>                        KeyList;                                                  // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FTslInputKey                                LastDownedKey;                                            // 0x02A0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTslInputKey                                OriginKey;                                                // 0x02C0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FScriptMulticastDelegate                    OnSlotButtonClicked;                                      // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	unsigned char                                      EnableInput : 1;                                          // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bFocusSlot : 1;                                           // 0x02F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeySlotWidget.KeySlotWidget_C");
		return ptr;
	}


	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void UpdateKey();
	struct FText GetButtonSltateText();
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonUp_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FLinearColor GetColorAndOpacity_2();
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void Keyup(const struct FKey& Key);
	void KeyDown(const struct FKey& Input);
	void UpdateKeyUp(const struct FKey& Key);
	void UpdateKeyDown(const struct FKey& Key);
	void IsInputKeyDown(bool* KeyDown);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FSlateColor GetColorAndOpacity_1();
	void OnApplyKeyChanged();
	void UpdateKeySlotWidget();
	struct FText GetDownedKeyName();
	void Construct();
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_KeySlotWidget(int EntryPoint);
	void OnSlotButtonClicked__DelegateSignature(TEnumAsByte<EKeyState> KeyState, const struct FTslInputKey& OriginKey, const struct FTslInputKey& LastDownedKey);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
