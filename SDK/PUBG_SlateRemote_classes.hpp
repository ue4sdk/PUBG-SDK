#pragma once

// PlayerUnknown's Battlegrounds (2.6.18) SDK

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
	unsigned char                                      EnableRemoteServer : 1;                                   // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     EditorServerEndpoint;                                     // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     GameServerEndpoint;                                       // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateRemote.SlateRemoteSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
