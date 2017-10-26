#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// Class OnlineSubsystem.NamedInterfaces
	// 0x0098 (0x00C0 - 0x0028)
	class UNamedInterfaces : public UObject {
	public:
		TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x0028(0x0010) (CPF_ZeroConstructor)
		TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                       // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config)
		unsigned char                                      UnknownData00[0x78];                                      // 0x0048(0x0078) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xb96f5686);
			return ptr;
		}

	};


	// Class OnlineSubsystem.TurnBasedMatchInterface
	// 0x0000 (0x0028 - 0x0028)
	class UTurnBasedMatchInterface : public UInterface {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x6e9fd313);
			return ptr;
		}


		void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
		void OnMatchEnded(const struct FString& Match);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
