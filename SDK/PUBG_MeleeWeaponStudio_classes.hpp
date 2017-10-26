#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass MeleeWeaponStudio.MeleeWeaponStudio_C
	// 0x0010 (0x0410 - 0x0400)
	class AMeleeWeaponStudio_C : public AItemStudio {
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
		class UAsyncStaticMeshComponent*                   AsyncStaticMesh;                                          // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x4754f955);
			return ptr;
		}


		void OnLoaded();
		void UserConstructionScript();
		void SetItem(class UItem** Item);
		void ExecuteUbergraph_MeleeWeaponStudio(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
