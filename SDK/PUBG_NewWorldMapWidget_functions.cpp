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

// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMoveMapGridViewCenterToMyIconCenterDir
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UNewWorldMapWidget_C::GetMoveMapGridViewCenterToMyIconCenterDir()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4945c412);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x93cd14d2);

	UNewWorldMapWidget_C_OnMoveMapGridViewCenterToMyIconCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.SetMapGridPositoin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::SetMapGridPositoin(const struct FVector2D& Position)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x784a43d8);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9510083a);

	UNewWorldMapWidget_C_OnHideWorldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.CheckReplayStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::CheckReplayStatus()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdb8f1fc2);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb525b58d);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd0d063da);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9367e26);

	UNewWorldMapWidget_C_OnPadGuideMoveingReayReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPadGuideMoveingReayPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnPadGuideMoveingReayPressed()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x435dec3);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x239b5f3c);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x595f39d1);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf95cf8b8);

	UNewWorldMapWidget_C_OnPutMarkerPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_MC
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UNewWorldMapWidget_C::GetPadGuidePos_MC()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x59292ec1);

	UNewWorldMapWidget_C_GetPadGuidePos_MC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_UC
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UNewWorldMapWidget_C::GetPadGuidePos_UC()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x74c59439);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc6f2e6d3);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6bdfbd74);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x466bbe3e);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6c6e38a7);

	UNewWorldMapWidget_C_MapMoveGamepadX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.ComputeServerToLocalPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 Server                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UNewWorldMapWidget_C::ComputeServerToLocalPosition(const struct FVector& Server)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe0234078);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x758ad46e);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x39da4acd);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x13d7d064);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x517aa427);

	UNewWorldMapWidget_C_OffMapMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMapMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::OnMapMove()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x88140ccd);

	UNewWorldMapWidget_C_OnMapMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MoveMapGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               AdditionalPos                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::MoveMapGrid(const struct FVector2D& AdditionalPos)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfc59ab5a);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xac03c8d2);

	UNewWorldMapWidget_C_OnMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.DestoryNewWorldMapWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::DestoryNewWorldMapWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8c9b4827);

	UNewWorldMapWidget_C_DestoryNewWorldMapWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.InitNewWorldMapWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::InitNewWorldMapWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x75433f03);

	UNewWorldMapWidget_C_InitNewWorldMapWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMapWidgetScreenLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               LeftTop                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               RightBottom                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::GetMapWidgetScreenLocation(const struct FVector2D& Position, struct FVector2D* LeftTop, struct FVector2D* RightBottom)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2726abb8);

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
// struct FVector2D               Alignment                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::GetWheelUpAlignment(struct FVector2D* Alignment)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfc0ab9d8);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x500f59da);

	UNewWorldMapWidget_C_TestClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMapAlignment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Aligment                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Size                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::UpdateMapAlignment(const struct FVector2D& Aligment, const struct FVector2D& Size)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x65704dd1);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x368f6ec9);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x768d5f28);

	UNewWorldMapWidget_C_TickMapPositionMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.IsInMapWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsIn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::IsInMapWidget(const struct FVector2D& Position, bool* IsIn)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9f993150);

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
// struct FVector2D               Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ConvertedPosition              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::ClampPosition(const struct FVector2D& Position, struct FVector2D* ConvertedPosition)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x96862419);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9793655);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9555b2c3);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x58cc597e);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd62cb6b2);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x99ae3331);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe12c6503);

	UNewWorldMapWidget_C_InitializeWorldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               MapSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::UpdateMap(const struct FVector2D& MapSize)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd5db6692);

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
// struct FVector2D               MapSize                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewWorldMapWidget_C::GetMapSize(float Zoom, struct FVector2D* MapSize)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4f0531d6);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x30a6d12);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1713d011);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa999681e);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2f2e09d8);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x356dada);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2e187a9a);

	UNewWorldMapWidget_C_BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xad4742b8);

	UNewWorldMapWidget_C_BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4bdec4fb);

	UNewWorldMapWidget_C_BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MovePosition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::MovePosition()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xffdd8889);

	UNewWorldMapWidget_C_MovePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2f2853aa);

	UNewWorldMapWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewWorldMapWidget_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5ef917f1);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5e8ecd23);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2a91fe51);

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
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe1b8d423);

	UNewWorldMapWidget_C_OnHideMyself__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
