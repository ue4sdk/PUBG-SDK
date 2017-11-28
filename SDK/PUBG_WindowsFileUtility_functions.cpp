// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WindowsFileUtility.WFUFileListInterface.OnListFileFound
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor)
// int                            ByteCount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)

void UWFUFileListInterface::OnListFileFound(const struct FString& Filename, int ByteCount, const struct FString& FilePath)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xff455c66);

	UWFUFileListInterface_OnListFileFound_Params params;
	params.Filename = Filename;
	params.ByteCount = ByteCount;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFileListInterface.OnListDone
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DirectoryPath                  (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FString>         Files                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FString>         Folders                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UWFUFileListInterface::OnListDone(const struct FString& DirectoryPath, TArray<struct FString> Files, TArray<struct FString> Folders)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x24b937f0);

	UWFUFileListInterface_OnListDone_Params params;
	params.DirectoryPath = DirectoryPath;
	params.Files = Files;
	params.Folders = Folders;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DirectoryName                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)

void UWFUFileListInterface::OnListDirectoryFound(const struct FString& DirectoryName, const struct FString& FilePath)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xad279b1f);

	UWFUFileListInterface_OnListDirectoryFound_Params params;
	params.DirectoryName = DirectoryName;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)

void UWFUFolderWatchInterface::OnFileChanged(const struct FString& Filename, const struct FString& FilePath)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbebb4577);

	UWFUFolderWatchInterface_OnFileChanged_Params params;
	params.Filename = Filename;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DirectoryName                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 DirectoryPath                  (CPF_Parm, CPF_ZeroConstructor)

void UWFUFolderWatchInterface::OnDirectoryChanged(const struct FString& DirectoryName, const struct FString& DirectoryPath)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xedba0620);

	UWFUFolderWatchInterface_OnDirectoryChanged_Params params;
	params.DirectoryName = DirectoryName;
	params.DirectoryPath = DirectoryPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 WatcherDelegate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowsFileUtilityFunctionLibrary::STATIC_WatchFolder(const struct FString& FullPath, class UObject* WatcherDelegate)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7161c97f);

	UWindowsFileUtilityFunctionLibrary_WatchFolder_Params params;
	params.FullPath = FullPath;
	params.WatcherDelegate = WatcherDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 WatcherDelegate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowsFileUtilityFunctionLibrary::STATIC_StopWatchingFolder(const struct FString& FullPath, class UObject* WatcherDelegate)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7a0d34d);

	UWindowsFileUtilityFunctionLibrary_StopWatchingFolder_Params params;
	params.FullPath = FullPath;
	params.WatcherDelegate = WatcherDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 From                           (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 To                             (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_MoveFileTo(const struct FString& From, const struct FString& To)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xde89473c);

	UWindowsFileUtilityFunctionLibrary_MoveFileTo_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ListDelegate                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowsFileUtilityFunctionLibrary::STATIC_ListContentsOfFolder(const struct FString& FullPath, class UObject* ListDelegate)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x88180e33);

	UWindowsFileUtilityFunctionLibrary_ListContentsOfFolder_Params params;
	params.FullPath = FullPath;
	params.ListDelegate = ListDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteFolderRecursively(const struct FString& FullPath)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xaba8f464);

	UWindowsFileUtilityFunctionLibrary_DeleteFolderRecursively_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteFileAt(const struct FString& FullPath)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9208ce1e);

	UWindowsFileUtilityFunctionLibrary_DeleteFileAt_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteEmptyFolder(const struct FString& FullPath)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3fd5b88e);

	UWindowsFileUtilityFunctionLibrary_DeleteEmptyFolder_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_CreateDirectoryAt(const struct FString& FullPath)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9192eeac);

	UWindowsFileUtilityFunctionLibrary_CreateDirectoryAt_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
