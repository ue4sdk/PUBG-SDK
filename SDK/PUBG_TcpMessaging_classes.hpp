#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TcpMessaging.TcpMessagingSettings
// 0x0030 (0x0058 - 0x0028)
class UTcpMessagingSettings : public UObject
{
public:
	unsigned char                                      EnableTransport : 1;                                      // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     ListenEndpoint;                                           // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             ConnectToEndpoints;                                       // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	int                                                ConnectionRetryDelay;                                     // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TcpMessaging.TcpMessagingSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
