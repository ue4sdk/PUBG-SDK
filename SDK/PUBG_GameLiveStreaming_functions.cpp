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

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UGameLiveStreamingFunctionLibrary::STATIC_StopWebCam()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x73d3498b);

	UGameLiveStreamingFunctionLibrary_StopWebCam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UGameLiveStreamingFunctionLibrary::STATIC_StopBroadcastingGame()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x63b43261);

	UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            DesiredWebCamWidth             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DesiredWebCamHeight            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMirrorWebCamImage             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDrawSimpleWebCamVideo         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameLiveStreamingFunctionLibrary::STATIC_StartWebCam(int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc2a4aee7);

	UGameLiveStreamingFunctionLibrary_StartWebCam_Params params;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 LoginUserName                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 LoginPassword                  (CPF_Parm, CPF_ZeroConstructor)
// int                            FrameRate                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ScreenScaling                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStartWebCam                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DesiredWebCamWidth             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DesiredWebCamHeight            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMirrorWebCamImage             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDrawSimpleWebCamVideo         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCaptureAudioFromComputer      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCaptureAudioFromMicrophone    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              CoverUpImage                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameLiveStreamingFunctionLibrary::STATIC_StartBroadcastingGame(const struct FString& LoginUserName, const struct FString& LoginPassword, int FrameRate, float ScreenScaling, bool bStartWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x85dd4145);

	UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params params;
	params.LoginUserName = LoginUserName;
	params.LoginPassword = LoginPassword;
	params.FrameRate = FrameRate;
	params.ScreenScaling = ScreenScaling;
	params.bStartWebCam = bStartWebCam;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
	params.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
	params.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
	params.CoverUpImage = CoverUpImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameLiveStreamingFunctionLibrary::STATIC_IsWebCamEnabled()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf5250cc6);

	UGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameLiveStreamingFunctionLibrary::STATIC_IsBroadcastingGame()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb84d6a61);

	UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 GameName                       (CPF_Parm, CPF_ZeroConstructor)
// class UQueryLiveStreamsCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::STATIC_QueryLiveStreams(const struct FString& GameName)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x301cca4);

	UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params params;
	params.GameName = GameName;

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
