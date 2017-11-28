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

// Function ZipUtility.ZipUtilityInterface.OnStartProcess
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor)
// int                            bytes                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZipUtilityInterface::OnStartProcess(const struct FString& archive, int bytes)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd8a7292);

	UZipUtilityInterface_OnStartProcess_Params params;
	params.archive = archive;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnProgress
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor)
// float                          percentage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            bytes                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZipUtilityInterface::OnProgress(const struct FString& archive, float percentage, int bytes)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x384d438c);

	UZipUtilityInterface_OnProgress_Params params;
	params.archive = archive;
	params.percentage = percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnFileFound
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 file                           (CPF_Parm, CPF_ZeroConstructor)
// int                            Size                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZipUtilityInterface::OnFileFound(const struct FString& archive, const struct FString& file, int Size)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa84b73bd);

	UZipUtilityInterface_OnFileFound_Params params;
	params.archive = archive;
	params.file = file;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnFileDone
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 file                           (CPF_Parm, CPF_ZeroConstructor)

void UZipUtilityInterface::OnFileDone(const struct FString& archive, const struct FString& file)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x85560a13);

	UZipUtilityInterface_OnFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnDone
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState> CompletionState                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZipUtilityInterface::OnDone(const struct FString& archive, TEnumAsByte<EZipUtilityCompletionState> CompletionState)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7a165245);

	UZipUtilityInterface_OnDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipFileFunctionLibrary.Zip
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FileOrFolderPath               (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionLevel> Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_Zip(const struct FString& FileOrFolderPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format, TEnumAsByte<EZipUtilityCompressionLevel> Level)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x98776c73);

	UZipFileFunctionLibrary_Zip_Params params;
	params.FileOrFolderPath = FileOrFolderPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 destinationPath                (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipTo(const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x69fb633b);

	UZipFileFunctionLibrary_UnzipTo_Params params;
	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    fileIndices                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 destinationPath                (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipFilesTo(TArray<int> fileIndices, const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x43c8021e);

	UZipFileFunctionLibrary_UnzipFilesTo_Params params;
	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    fileIndices                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipFiles(TArray<int> fileIndices, const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x94b552dd);

	UZipFileFunctionLibrary_UnzipFiles_Params params;
	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 destinationPath                (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipFileNamedTo(const struct FString& ArchivePath, const struct FString& Name, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x628533a);

	UZipFileFunctionLibrary_UnzipFileNamedTo_Params params;
	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipFileNamed(const struct FString& ArchivePath, const struct FString& Name, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa7ca3c69);

	UZipFileFunctionLibrary_UnzipFileNamed_Params params;
	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.Unzip
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_Unzip(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfd4d8290);

	UZipFileFunctionLibrary_Unzip_Params params;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_ListFilesInArchive(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x72309220);

	UZipFileFunctionLibrary_ListFilesInArchive_Params params;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

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
