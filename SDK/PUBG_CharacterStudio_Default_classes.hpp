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

	// BlueprintGeneratedClass CharacterStudio_Default.CharacterStudio_Default_C
	// 0x0008 (0x0438 - 0x0430)
	class ACharacterStudio_Default_C : public ACharacterStudio
	{
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x3b902209);
			return ptr;
		}


		void UserConstructionScript();
		void ReceiveTick(float* DeltaSeconds);
		void ReceiveDestroyed();
		void ExecuteUbergraph_CharacterStudio_Default(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
