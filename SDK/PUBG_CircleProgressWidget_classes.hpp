#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass CircleProgressWidget.CircleProgressWidget_C
	// 0x0020 (0x0260 - 0x0240)
	class UCircleProgressWidget_C : public UUserWidget {
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
		class UImage*                                      Image_1;                                                  // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		class UImage*                                      Image_2;                                                  // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		class UMaterialInstanceDynamic*                    MatInstance;                                              // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CircleProgressWidget.CircleProgressWidget_C");
			return ptr;
		}


		struct FLinearColor GetColorAndOpacity_1();
		void Construct();
		void ExecuteUbergraph_CircleProgressWidget(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
