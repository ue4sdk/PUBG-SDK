// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMoveMapGridViewCenterToMyIconCenterDir
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class Vector2D                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class Vector2D UNewWorldMapWidget_C::GetMoveMapGridViewCenterToMyIconCenterDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.GetMoveMapGridViewCenterToMyIconCenterDir");

	UNewWorldMapWidget_C_GetMoveMapGridViewCenterToMyIconCenterDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMoveMapGridViewCenterToMyIconCenter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnMoveMapGridViewCenterToMyIconCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnMoveMapGridViewCenterToMyIconCenter");

	UNewWorldMapWidget_C_OnMoveMapGridViewCenterToMyIconCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.SetMapGridPositoin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D                 Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::SetMapGridPositoin(const class Vector2D& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.SetMapGridPositoin");

	UNewWorldMapWidget_C_SetMapGridPositoin_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnHideWorldMap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnHideWorldMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnHideWorldMap");

	UNewWorldMapWidget_C_OnHideWorldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.CheckReplayStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::CheckReplayStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.CheckReplayStatus");

	UNewWorldMapWidget_C_CheckReplayStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.PadGuideMoveRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Add                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::PadGuideMoveRight(float Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.PadGuideMoveRight");

	UNewWorldMapWidget_C_PadGuideMoveRight_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.PadGuideMoveUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Add                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::PadGuideMoveUp(float Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.PadGuideMoveUp");

	UNewWorldMapWidget_C_PadGuideMoveUp_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPadGuideMoveingReayReleased
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnPadGuideMoveingReayReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnPadGuideMoveingReayReleased");

	UNewWorldMapWidget_C_OnPadGuideMoveingReayReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPadGuideMoveingReayPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnPadGuideMoveingReayPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnPadGuideMoveingReayPressed");

	UNewWorldMapWidget_C_OnPadGuideMoveingReayPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.IsInPadGuideInMap
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsIn                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::IsInPadGuideInMap(bool* bIsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.IsInPadGuideInMap");

	UNewWorldMapWidget_C_IsInPadGuideInMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsIn != nullptr)
		*bIsIn = params.bIsIn;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapZoomPad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AdditaionalZoom                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::MapZoomPad(float AdditaionalZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.MapZoomPad");

	UNewWorldMapWidget_C_MapZoomPad_Params params;
	params.AdditaionalZoom = AdditaionalZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPutMarkerPad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnPutMarkerPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnPutMarkerPad");

	UNewWorldMapWidget_C_OnPutMarkerPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_MC
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class Vector2D                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class Vector2D UNewWorldMapWidget_C::GetPadGuidePos_MC()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_MC");

	UNewWorldMapWidget_C_GetPadGuidePos_MC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_UC
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class Vector2D                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class Vector2D UNewWorldMapWidget_C::GetPadGuidePos_UC()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_UC");

	UNewWorldMapWidget_C_GetPadGuidePos_UC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarkerDelete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnMarkerDelete()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarkerDelete");

	UNewWorldMapWidget_C_OnMarkerDelete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnPrepass_1");

	UNewWorldMapWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveGamepadY
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::MapMoveGamepadY(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveGamepadY");

	UNewWorldMapWidget_C_MapMoveGamepadY_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveGamepadX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::MapMoveGamepadX(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveGamepadX");

	UNewWorldMapWidget_C_MapMoveGamepadX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.ComputeServerToLocalPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class Vector3D                 Server                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class Vector3D UNewWorldMapWidget_C::ComputeServerToLocalPosition(const class Vector3D& Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.ComputeServerToLocalPosition");

	UNewWorldMapWidget_C_ComputeServerToLocalPosition_Params params;
	params.Server = Server;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapZoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AdditaionalZoom                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::MapZoom(float AdditaionalZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.MapZoom");

	UNewWorldMapWidget_C_MapZoom_Params params;
	params.AdditaionalZoom = AdditaionalZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveY
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::MapMoveY(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveY");

	UNewWorldMapWidget_C_MapMoveY_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::MapMoveX(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveX");

	UNewWorldMapWidget_C_MapMoveX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OffMapMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OffMapMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OffMapMove");

	UNewWorldMapWidget_C_OffMapMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMapMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnMapMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnMapMove");

	UNewWorldMapWidget_C_OnMapMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MoveMapGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D                 AdditionalPos                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::MoveMapGrid(const class Vector2D& AdditionalPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.MoveMapGrid");

	UNewWorldMapWidget_C_MoveMapGrid_Params params;
	params.AdditionalPos = AdditionalPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarker");

	UNewWorldMapWidget_C_OnMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.DestoryNewWorldMapWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::DestoryNewWorldMapWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.DestoryNewWorldMapWidget");

	UNewWorldMapWidget_C_DestoryNewWorldMapWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.InitNewWorldMapWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::InitNewWorldMapWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.InitNewWorldMapWidget");

	UNewWorldMapWidget_C_InitNewWorldMapWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMapWidgetScreenLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class Vector2D                 Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector2D                 LeftTop                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector2D                 RightBottom                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::GetMapWidgetScreenLocation(const class Vector2D& Position, class Vector2D* LeftTop, class Vector2D* RightBottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.GetMapWidgetScreenLocation");

	UNewWorldMapWidget_C_GetMapWidgetScreenLocation_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftTop != nullptr)
		*LeftTop = params.LeftTop;
	if (RightBottom != nullptr)
		*RightBottom = params.RightBottom;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetWheelUpAlignment
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class Vector2D                 Alignment                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::GetWheelUpAlignment(class Vector2D* Alignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.GetWheelUpAlignment");

	UNewWorldMapWidget_C_GetWheelUpAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alignment != nullptr)
		*Alignment = params.Alignment;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.TestClear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::TestClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.TestClear");

	UNewWorldMapWidget_C_TestClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMapAlignment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D                 Aligment                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector2D                 Size                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::UpdateMapAlignment(const class Vector2D& Aligment, const class Vector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMapAlignment");

	UNewWorldMapWidget_C_UpdateMapAlignment_Params params;
	params.Aligment = Aligment;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.PlayFadeInAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Playback_Speed                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::PlayFadeInAnim(float Playback_Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.PlayFadeInAnim");

	UNewWorldMapWidget_C_PlayFadeInAnim_Params params;
	params.Playback_Speed = Playback_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.TickMapPositionMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::TickMapPositionMove(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.TickMapPositionMove");

	UNewWorldMapWidget_C_TickMapPositionMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.IsInMapWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class Vector2D                 Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsIn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::IsInMapWidget(const class Vector2D& Position, bool* IsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.IsInMapWidget");

	UNewWorldMapWidget_C_IsInMapWidget_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIn != nullptr)
		*IsIn = params.IsIn;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.ClampPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class Vector2D                 Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector2D                 ConvertedPosition              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::ClampPosition(const class Vector2D& Position, class Vector2D* ConvertedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.ClampPosition");

	UNewWorldMapWidget_C_ClampPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConvertedPosition != nullptr)
		*ConvertedPosition = params.ConvertedPosition;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.TickChangeMapSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::TickChangeMapSize(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.TickChangeMapSize");

	UNewWorldMapWidget_C_TickChangeMapSize_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetZoomRange
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ZoomMin                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ZoomMax                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::GetZoomRange(float* ZoomMin, float* ZoomMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.GetZoomRange");

	UNewWorldMapWidget_C_GetZoomRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZoomMin != nullptr)
		*ZoomMin = params.ZoomMin;
	if (ZoomMax != nullptr)
		*ZoomMax = params.ZoomMax;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UNewWorldMapWidget_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseButtonUp");

	UNewWorldMapWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UNewWorldMapWidget_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseMove");

	UNewWorldMapWidget_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UNewWorldMapWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseButtonDown");

	UNewWorldMapWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.InitializeWorldMap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::InitializeWorldMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.InitializeWorldMap");

	UNewWorldMapWidget_C_InitializeWorldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D                 MapSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::UpdateMap(const class Vector2D& MapSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMap");

	UNewWorldMapWidget_C_UpdateMap_Params params;
	params.MapSize = MapSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMapSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Zoom                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector2D                 MapSize                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::GetMapSize(float Zoom, class Vector2D* MapSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.GetMapSize");

	UNewWorldMapWidget_C_GetMapSize_Params params;
	params.Zoom = Zoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapSize != nullptr)
		*MapSize = params.MapSize;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UNewWorldMapWidget_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseWheel");

	UNewWorldMapWidget_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateZoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ZoomOffset                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::UpdateZoom(float ZoomOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateZoom");

	UNewWorldMapWidget_C_UpdateZoom_Params params;
	params.ZoomOffset = ZoomOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarkerForReplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnMarkerForReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarkerForReplay");

	UNewWorldMapWidget_C_OnMarkerForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.Tick");

	UNewWorldMapWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.StartChangeMapSize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsPad                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::StartChangeMapSize(bool bIsPad)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.StartChangeMapSize");

	UNewWorldMapWidget_C_StartChangeMapSize_Params params;
	params.bIsPad = bIsPad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature");

	UNewWorldMapWidget_C_BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UNewWorldMapWidget_C_BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UNewWorldMapWidget_C_BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MovePosition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::MovePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.MovePosition");

	UNewWorldMapWidget_C_MovePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.Construct");

	UNewWorldMapWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.Destruct");

	UNewWorldMapWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnInputAxis
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float*                         Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::OnInputAxis(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnInputAxis");

	UNewWorldMapWidget_C_OnInputAxis_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.ExecuteUbergraph_NewWorldMapWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::ExecuteUbergraph_NewWorldMapWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.ExecuteUbergraph_NewWorldMapWidget");

	UNewWorldMapWidget_C_ExecuteUbergraph_NewWorldMapWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnHideMyself__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnHideMyself__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWorldMapWidget.NewWorldMapWidget_C.OnHideMyself__DelegateSignature");

	UNewWorldMapWidget_C_OnHideMyself__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
