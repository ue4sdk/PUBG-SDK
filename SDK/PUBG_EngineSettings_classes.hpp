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

// Class EngineSettings.ConsoleSettings
// 0x0048 (0x0070 - 0x0028)
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                        // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteMapPaths;                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              BackgroundOpacityPercentage;                              // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bOrderTopToBottom : 1;                                    // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FColor                                      InputColor;                                               // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FColor                                      HistoryColor;                                             // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FColor                                      AutoCompleteCommandColor;                                 // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FColor                                      AutoCompleteCVarColor;                                    // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FColor                                      AutoCompleteFadedColor;                                   // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x00A8 (0x00D0 - 0x0028)
class UGameMapsSettings : public UObject
{
public:
	struct FStringAssetReference                       EditorStartupMap;                                         // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     LocalMapOptions;                                          // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       TransitionMap;                                            // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bUseSplitscreen : 1;                                      // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                               // 0x0059(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                             // 0x005A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bOffsetPlayerGamepadIds : 1;                              // 0x005B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FStringClassReference                       GameInstanceClass;                                        // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_NoClear)
	struct FStringAssetReference                       GameDefaultMap;                                           // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       ServerDefaultMap;                                         // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringClassReference                       GlobalDefaultGameMode;                                    // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_NoClear)
	struct FStringClassReference                       GlobalDefaultServerGameMode;                              // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FGameModeName>                       GameModeMapPrefixes;                                      // 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FGameModeName>                       GameModeClassAliases;                                     // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}

};


// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0058 - 0x0028)
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                      // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                MaxDynamicBandwidth;                                      // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                TotalNetBandwidth;                                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                BadPingThreshold;                                         // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                            // 0x0038(0x0001) (CPF_Edit, CPF_Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              StandbyRxCheatTime;                                       // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              StandbyTxCheatTime;                                       // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PercentMissingForRxStandby;                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PercentMissingForTxStandby;                               // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PercentForBadPing;                                        // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              JoinInProgressStandbyWaitTime;                            // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0038 - 0x0028)
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                            // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      bRequiresPushToTalk : 1;                                  // 0x0030(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0028 - 0x0028)
class UGeneralEngineSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x00E8 (0x0110 - 0x0028)
class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     CompanyDistinguishedName;                                 // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     CopyrightNotice;                                          // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Description;                                              // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Homepage;                                                 // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     LicensingTerms;                                           // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     PrivacyPolicy;                                            // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FGuid                                       ProjectID;                                                // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     ProjectName;                                              // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ProjectVersion;                                           // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     SupportContact;                                           // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FText                                       ProjectDisplayedTitle;                                    // 0x00D8(0x0018) (CPF_Edit, CPF_Config)
	struct FText                                       ProjectDebugTitleInfo;                                    // 0x00F0(0x0018) (CPF_Edit, CPF_Config)
	unsigned char                                      bShouldWindowPreserveAspectRatio : 1;                     // 0x0108(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseBorderlessWindow : 1;                                 // 0x0109(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bStartInVR : 1;                                           // 0x010A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bAllowWindowResize : 1;                                   // 0x010B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bAllowClose : 1;                                          // 0x010C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bAllowMaximize : 1;                                       // 0x010D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bAllowMinimize : 1;                                       // 0x010E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}

};


// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                             // 0x0028(0x0001) (CPF_Edit, CPF_Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FName>                               DebugDisplay;                                             // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
