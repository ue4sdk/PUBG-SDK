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

// Class UdpMessaging.UdpMessagingSettings
// 0x0078 (0x00A0 - 0x0028)
class UUdpMessagingSettings : public UObject
{
public:
	unsigned char                                      EnableTransport : 1;                                      // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     UnicastEndpoint;                                          // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     MulticastEndpoint;                                        // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      MulticastTimeToLive;                                      // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FString>                             StaticEndpoints;                                          // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      EnableTunnel : 1;                                         // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     TunnelUnicastEndpoint;                                    // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     TunnelMulticastEndpoint;                                  // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             RemoteTunnelEndpoints;                                    // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UdpMessaging.UdpMessagingSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
