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

// BlueprintGeneratedClass ThrowableWeaponStudio.ThrowableWeaponStudio_C
// 0x0010 (0x0420 - 0x0410)
class AThrowableWeaponStudio_C : public AItemStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAsyncStaticMeshComponent*                   AsyncStaticMesh;                                          // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb5e5685);
		return ptr;
	}


	void OnLoaded();
	void UserConstructionScript();
	void SetItem(class UItem** Item);
	void ExecuteUbergraph_ThrowableWeaponStudio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
