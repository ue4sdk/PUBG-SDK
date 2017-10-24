#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMoveMapGridViewCenterToMyIconCenterDir
struct UNewWorldMapWidget_C_GetMoveMapGridViewCenterToMyIconCenterDir_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMoveMapGridViewCenterToMyIconCenter
struct UNewWorldMapWidget_C_OnMoveMapGridViewCenterToMyIconCenter_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.SetMapGridPositoin
struct UNewWorldMapWidget_C_SetMapGridPositoin_Params
{
	class Vector2D                                     Position;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnHideWorldMap
struct UNewWorldMapWidget_C_OnHideWorldMap_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.CheckReplayStatus
struct UNewWorldMapWidget_C_CheckReplayStatus_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.PadGuideMoveRight
struct UNewWorldMapWidget_C_PadGuideMoveRight_Params
{
	float                                              Add;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.PadGuideMoveUp
struct UNewWorldMapWidget_C_PadGuideMoveUp_Params
{
	float                                              Add;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPadGuideMoveingReayReleased
struct UNewWorldMapWidget_C_OnPadGuideMoveingReayReleased_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPadGuideMoveingReayPressed
struct UNewWorldMapWidget_C_OnPadGuideMoveingReayPressed_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.IsInPadGuideInMap
struct UNewWorldMapWidget_C_IsInPadGuideInMap_Params
{
	bool                                               bIsIn;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.MapZoomPad
struct UNewWorldMapWidget_C_MapZoomPad_Params
{
	float                                              AdditaionalZoom;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPutMarkerPad
struct UNewWorldMapWidget_C_OnPutMarkerPad_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_MC
struct UNewWorldMapWidget_C_GetPadGuidePos_MC_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_UC
struct UNewWorldMapWidget_C_GetPadGuidePos_UC_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarkerDelete
struct UNewWorldMapWidget_C_OnMarkerDelete_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPrepass_1
struct UNewWorldMapWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveGamepadY
struct UNewWorldMapWidget_C_MapMoveGamepadY_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveGamepadX
struct UNewWorldMapWidget_C_MapMoveGamepadX_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.ComputeServerToLocalPosition
struct UNewWorldMapWidget_C_ComputeServerToLocalPosition_Params
{
	class Vector3D                                     Server;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.MapZoom
struct UNewWorldMapWidget_C_MapZoom_Params
{
	float                                              AdditaionalZoom;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveY
struct UNewWorldMapWidget_C_MapMoveY_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveX
struct UNewWorldMapWidget_C_MapMoveX_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OffMapMove
struct UNewWorldMapWidget_C_OffMapMove_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMapMove
struct UNewWorldMapWidget_C_OnMapMove_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.MoveMapGrid
struct UNewWorldMapWidget_C_MoveMapGrid_Params
{
	class Vector2D                                     AdditionalPos;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarker
struct UNewWorldMapWidget_C_OnMarker_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.DestoryNewWorldMapWidget
struct UNewWorldMapWidget_C_DestoryNewWorldMapWidget_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.InitNewWorldMapWidget
struct UNewWorldMapWidget_C_InitNewWorldMapWidget_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMapWidgetScreenLocation
struct UNewWorldMapWidget_C_GetMapWidgetScreenLocation_Params
{
	class Vector2D                                     Position;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     LeftTop;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     RightBottom;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.GetWheelUpAlignment
struct UNewWorldMapWidget_C_GetWheelUpAlignment_Params
{
	class Vector2D                                     Alignment;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.TestClear
struct UNewWorldMapWidget_C_TestClear_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMapAlignment
struct UNewWorldMapWidget_C_UpdateMapAlignment_Params
{
	class Vector2D                                     Aligment;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     Size;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.PlayFadeInAnim
struct UNewWorldMapWidget_C_PlayFadeInAnim_Params
{
	float                                              Playback_Speed;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.TickMapPositionMove
struct UNewWorldMapWidget_C_TickMapPositionMove_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.IsInMapWidget
struct UNewWorldMapWidget_C_IsInMapWidget_Params
{
	class Vector2D                                     Position;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsIn;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.ClampPosition
struct UNewWorldMapWidget_C_ClampPosition_Params
{
	class Vector2D                                     Position;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     ConvertedPosition;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.TickChangeMapSize
struct UNewWorldMapWidget_C_TickChangeMapSize_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.GetZoomRange
struct UNewWorldMapWidget_C_GetZoomRange_Params
{
	float                                              ZoomMin;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ZoomMax;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseButtonUp
struct UNewWorldMapWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseMove
struct UNewWorldMapWidget_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseButtonDown
struct UNewWorldMapWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.InitializeWorldMap
struct UNewWorldMapWidget_C_InitializeWorldMap_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMap
struct UNewWorldMapWidget_C_UpdateMap_Params
{
	class Vector2D                                     MapSize;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMapSize
struct UNewWorldMapWidget_C_GetMapSize_Params
{
	float                                              Zoom;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     MapSize;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseWheel
struct UNewWorldMapWidget_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateZoom
struct UNewWorldMapWidget_C_UpdateZoom_Params
{
	float                                              ZoomOffset;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarkerForReplay
struct UNewWorldMapWidget_C_OnMarkerForReplay_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.Tick
struct UNewWorldMapWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.StartChangeMapSize
struct UNewWorldMapWidget_C_StartChangeMapSize_Params
{
	bool                                               bIsPad;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature
struct UNewWorldMapWidget_C_BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UNewWorldMapWidget_C_BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UNewWorldMapWidget_C_BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.MovePosition
struct UNewWorldMapWidget_C_MovePosition_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.Construct
struct UNewWorldMapWidget_C_Construct_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.Destruct
struct UNewWorldMapWidget_C_Destruct_Params
{
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnInputAxis
struct UNewWorldMapWidget_C_OnInputAxis_Params
{
	float*                                             Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.ExecuteUbergraph_NewWorldMapWidget
struct UNewWorldMapWidget_C_ExecuteUbergraph_NewWorldMapWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewWorldMapWidget.NewWorldMapWidget_C.OnHideMyself__DelegateSignature
struct UNewWorldMapWidget_C_OnHideMyself__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
