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

	// Class OnlineSubsystemSteam.SteamNetConnection
	// 0x0008 (0x33710 - 0x33708)
	class USteamNetConnection : public UIpConnection
	{
	public:
		bool                                               bIsPassthrough;                                           // 0x33708(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x33709(0x0007) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x69453104);
			return ptr;
		}

	};


	// Class OnlineSubsystemSteam.SteamNetDriver
	// 0x0018 (0x0450 - 0x0438)
	class USteamNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                      UnknownData00[0x18];                                      // 0x0438(0x0018) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x7fd5b446);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
