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

// WidgetBlueprintGeneratedClass CountDownWidget.CountDownWidget_C
// 0x0010 (0x0250 - 0x0240)
class UCountDownWidget_C : public UUserWidget
{
public:
	class UTextBlock*                                  CountDownText;                                            // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class ATslGameState*                               TslGameState;                                             // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CountDownWidget.CountDownWidget_C");
		return ptr;
	}


	void GetTslGameState(class ATslGameState** GameState);
	void On_CountDownBlock_Prepass_1(class UWidget* BoundWidget);
	void On_CountDownText_Prepass_1(class UWidget* BoundWidget);
	TEnumAsByte<ESlateVisibility> Get_CountDownText_Visibility_1();
	struct FText Get_CountDownText_Text_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
