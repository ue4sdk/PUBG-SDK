#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZipUtility.ZipUtilityInterface.OnStartProcess
struct UZipUtilityInterface_OnStartProcess_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	int                                                bytes;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipUtilityInterface.OnProgress
struct UZipUtilityInterface_OnProgress_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	float                                              percentage;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                bytes;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipUtilityInterface.OnFileFound
struct UZipUtilityInterface_OnFileFound_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     file;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	int                                                Size;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipUtilityInterface.OnFileDone
struct UZipUtilityInterface_OnFileDone_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     file;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ZipUtility.ZipUtilityInterface.OnDone
struct UZipUtilityInterface_OnDone_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<EZipUtilityCompletionState>            CompletionState;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.Zip
struct UZipFileFunctionLibrary_Zip_Params
{
	struct FString                                     FileOrFolderPath;                                         // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionLevel>           Level;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipTo
struct UZipFileFunctionLibrary_UnzipTo_Params
{
	struct FString                                     ArchivePath;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     destinationPath;                                          // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo
struct UZipFileFunctionLibrary_UnzipFilesTo_Params
{
	TArray<int>                                        fileIndices;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ArchivePath;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     destinationPath;                                          // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles
struct UZipFileFunctionLibrary_UnzipFiles_Params
{
	TArray<int>                                        fileIndices;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ArchivePath;                                              // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo
struct UZipFileFunctionLibrary_UnzipFileNamedTo_Params
{
	struct FString                                     ArchivePath;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     destinationPath;                                          // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed
struct UZipFileFunctionLibrary_UnzipFileNamed_Params
{
	struct FString                                     ArchivePath;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.Unzip
struct UZipFileFunctionLibrary_Unzip_Params
{
	struct FString                                     ArchivePath;                                              // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive
struct UZipFileFunctionLibrary_ListFilesInArchive_Params
{
	struct FString                                     ArchivePath;                                              // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
