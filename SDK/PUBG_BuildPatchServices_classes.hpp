#pragma once

// PlayerUnknown's Battlegrounds (2.6.30.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BuildPatchServices.BuildPatchManifest
// 0x00A8 (0x00D0 - 0x0028)
class UBuildPatchManifest : public UObject
{
public:
	unsigned char                                      ManifestFileVersion;                                      // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsFileData;                                              // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	uint32_t                                           AppID;                                                    // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     AppName;                                                  // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FString                                     BuildVersion;                                             // 0x0040(0x0010) (CPF_ZeroConstructor)
	struct FString                                     LaunchExe;                                                // 0x0050(0x0010) (CPF_ZeroConstructor)
	struct FString                                     LaunchCommand;                                            // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PrereqName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PrereqPath;                                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PrereqArgs;                                               // 0x0090(0x0010) (CPF_ZeroConstructor)
	TArray<struct FFileManifestData>                   FileManifestList;                                         // 0x00A0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FChunkInfoData>                      ChunkList;                                                // 0x00B0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCustomFieldData>                    CustomFields;                                             // 0x00C0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BuildPatchServices.BuildPatchManifest");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
