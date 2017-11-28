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

// Function WindowsFileUtility.WFUFileListInterface.OnListFileFound
struct UWFUFileListInterface_OnListFileFound_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ByteCount;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     FilePath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
};

// Function WindowsFileUtility.WFUFileListInterface.OnListDone
struct UWFUFileListInterface_OnListDone_Params
{
	struct FString                                     DirectoryPath;                                            // (CPF_Parm, CPF_ZeroConstructor)
	TArray<struct FString>                             Files;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FString>                             Folders;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound
struct UWFUFileListInterface_OnListDirectoryFound_Params
{
	struct FString                                     DirectoryName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     FilePath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
};

// Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged
struct UWFUFolderWatchInterface_OnFileChanged_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     FilePath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
};

// Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged
struct UWFUFolderWatchInterface_OnDirectoryChanged_Params
{
	struct FString                                     DirectoryName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     DirectoryPath;                                            // (CPF_Parm, CPF_ZeroConstructor)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder
struct UWindowsFileUtilityFunctionLibrary_WatchFolder_Params
{
	struct FString                                     FullPath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     WatcherDelegate;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder
struct UWindowsFileUtilityFunctionLibrary_StopWatchingFolder_Params
{
	struct FString                                     FullPath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     WatcherDelegate;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo
struct UWindowsFileUtilityFunctionLibrary_MoveFileTo_Params
{
	struct FString                                     From;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     To;                                                       // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder
struct UWindowsFileUtilityFunctionLibrary_ListContentsOfFolder_Params
{
	struct FString                                     FullPath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     ListDelegate;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively
struct UWindowsFileUtilityFunctionLibrary_DeleteFolderRecursively_Params
{
	struct FString                                     FullPath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt
struct UWindowsFileUtilityFunctionLibrary_DeleteFileAt_Params
{
	struct FString                                     FullPath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder
struct UWindowsFileUtilityFunctionLibrary_DeleteEmptyFolder_Params
{
	struct FString                                     FullPath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt
struct UWindowsFileUtilityFunctionLibrary_CreateDirectoryAt_Params
{
	struct FString                                     FullPath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
