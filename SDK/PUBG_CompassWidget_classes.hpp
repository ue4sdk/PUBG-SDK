#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass CompassWidget.CompassWidget_C
	// 0x0070 (0x02D0 - 0x0260)
	class UCompassWidget_C : public UTslUserWidget {
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
		class UImage*                                      Compass_Center;                                           // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		class UImage*                                      compass_marker;                                           // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		class UImage*                                      CompassImage;                                             // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		class UOverlay*                                    My;                                                       // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		class UOverlay*                                    Team;                                                     // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		class UTexture2D*                                  CompassTex2d;                                             // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		class UMaterialInstanceDynamic*                    CompassMat;                                               // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		class UMaterialInstanceDynamic*                    CompassArrowMat;                                          // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		float                                              Offset;                                                   // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              DevisonLevel;                                             // 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              Width;                                                    // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		unsigned char                                      bDirStringMakeClockwise : 1;                              // 0x02B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
		class UCompassMarkerWidget_C*                      MyCompassMarkerWidget;                                    // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		TArray<class UCompassMarkerWidget_C*>              TeamMemberCompassMarkerList;                              // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompassWidget.CompassWidget_C");
			return ptr;
		}


		class Rotator GetPlayerRotation();
		void CalcCompassMarkerDir(const class Vector2D& A, float* Dir);
		void CreateCompassMarkerWidget(int Number, class UCompassMarkerWidget_C** CompassMarker);
		void InitCompassWidget();
		TEnumAsByte<ESlateVisibility> Get_Compass_Arrow_Visibility_1();
		float ConvertAngleToUV(float Angle);
		void UpdateDirection();
		void Construct();
		void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
		void ExecuteUbergraph_CompassWidget(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
