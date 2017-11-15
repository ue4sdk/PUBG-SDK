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

	// Class SlateRemote.SlateRemoteSettings
	// 0x0028 (0x0050 - 0x0028)
	class USlateRemoteSettings : public UObject
	{
	public:
		bool                                               EnableRemoteServer;                                       // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
		struct FString                                     EditorServerEndpoint;                                     // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
		struct FString                                     GameServerEndpoint;                                       // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x3634e4);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
