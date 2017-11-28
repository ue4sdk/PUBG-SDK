#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass P_Boat_Drive_Bubbles_BP.P_Boat_Drive_Bubbles_BP_C
	// 0x0008 (0x0400 - 0x03F8)
	class AP_Boat_Drive_Bubbles_BP_C : public ATslParticle {
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x14ca36e1);
			return ptr;
		}


		void UserConstructionScript();
		void OnParameterUpdated();
		void ExecuteUbergraph_P_Boat_Drive_Bubbles_BP(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
