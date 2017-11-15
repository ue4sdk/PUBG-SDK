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

	// BlueprintGeneratedClass CameraShakeForFalling.CameraShakeForFalling_C
	// 0x0008 (0x0168 - 0x0160)
	class UCameraShakeForFalling_C : public UCameraShake
	{
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x2e06c28d);
			return ptr;
		}


		void ReceivePlayShake(float* Scale);
		void ExecuteUbergraph_CameraShakeForFalling(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
