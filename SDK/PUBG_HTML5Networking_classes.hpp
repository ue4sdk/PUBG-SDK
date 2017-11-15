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

	// Class HTML5Networking.WebSocketConnection
	// 0x0010 (0x336F8 - 0x336E8)
	class UWebSocketConnection : public UNetConnection
	{
	public:
		unsigned char                                      UnknownData00[0x10];                                      // 0x336E8(0x0010) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x7a0f5d88);
			return ptr;
		}

	};


	// Class HTML5Networking.WebSocketNetDriver
	// 0x0010 (0x0428 - 0x0418)
	class UWebSocketNetDriver : public UNetDriver
	{
	public:
		int                                                WebSocketPort;                                            // 0x0418(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0xC];                                       // 0x041C(0x000C) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xa2c1cc6b);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
