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

	// Class MobilePatchingUtils.MobileInstalledContent
	// 0x0020 (0x0048 - 0x0028)
	class UMobileInstalledContent : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xcc9dfa3f);
			return ptr;
		}


		bool Mount(int PakOrder, const struct FString& MountPoint);
		float GetInstalledContentSize();
		float GetDiskFreeSpace();
	};


	// Class MobilePatchingUtils.MobilePendingContent
	// 0x0040 (0x0088 - 0x0048)
	class UMobilePendingContent : public UMobileInstalledContent
	{
	public:
		unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x105b13be);
			return ptr;
		}


		void StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
		float GetTotalDownloadedSize();
		float GetRequiredDiskSpace();
		float GetInstallProgress();
		struct FText GetDownloadStatusText();
		float GetDownloadSpeed();
		float GetDownloadSize();
	};


	// Class MobilePatchingUtils.MobilePatchingLibrary
	// 0x0000 (0x0028 - 0x0028)
	class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
	{
	public:

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xc8af1749);
			return ptr;
		}


		void STATIC_RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
		bool STATIC_HasActiveWiFiConnection();
		TArray<struct FString> STATIC_GetSupportedPlatformNames();
		class UMobileInstalledContent* STATIC_GetInstalledContent(const struct FString& InstallDirectory);
		struct FString STATIC_GetActiveDeviceProfileName();
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
