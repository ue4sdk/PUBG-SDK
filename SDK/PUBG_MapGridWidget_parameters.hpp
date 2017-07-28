#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MapGridWidget.MapGridWidget_C.UpdateRedAndBlueZoneColor
struct UMapGridWidget_C_UpdateRedAndBlueZoneColor_Params
{
};

// Function MapGridWidget.MapGridWidget_C.CreateIcon
struct UMapGridWidget_C_CreateIcon_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATeam*                                       Team;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMapCharacterIconWidget_C*                   IconWidget;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.UpdateIcon
struct UMapGridWidget_C_UpdateIcon_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.InitMapGrid
struct UMapGridWidget_C_InitMapGrid_Params
{
};

// Function MapGridWidget.MapGridWidget_C.TickUpdateMapMarker
struct UMapGridWidget_C_TickUpdateMapMarker_Params
{
};

// Function MapGridWidget.MapGridWidget_C.On_Marker_Prepass_1
struct UMapGridWidget_C_On_Marker_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.On_Character_Pos_Prepass_1
struct UMapGridWidget_C_On_Character_Pos_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.IsMouseInMarker
struct UMapGridWidget_C_IsMouseInMarker_Params
{
	bool                                               IsIn;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.GetAlignment
struct UMapGridWidget_C_GetAlignment_Params
{
	class Vector2D                                     Aligment;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.OnMouseMove
struct UMapGridWidget_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MapGridWidget.MapGridWidget_C.Get_Marker_Visibility_1
struct UMapGridWidget_C_Get_Marker_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.OnPreviewMouseButtonDown
struct UMapGridWidget_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MapGridWidget.MapGridWidget_C.DrawMarker_UC
struct UMapGridWidget_C_DrawMarker_UC_Params
{
	class Vector2D*                                    MarkerCenter_UC;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.DrawRedZone_UC
struct UMapGridWidget_C_DrawRedZone_UC_Params
{
	class Vector2D*                                    Center_UC;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	float*                                             Radius_UC;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.OnPaint
struct UMapGridWidget_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function MapGridWidget.MapGridWidget_C.GetMapImageWigetSizeAndImageOffset
struct UMapGridWidget_C_GetMapImageWigetSizeAndImageOffset_Params
{
	class Vector2D                                     WidgetSize;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     ImageOffset;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.Get_Character_Pos_Visibility_1
struct UMapGridWidget_C_Get_Character_Pos_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.UpdateRectangleViewByWidgetSize
struct UMapGridWidget_C_UpdateRectangleViewByWidgetSize_Params
{
	class Vector2D*                                    WidgetSize;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.OnMouseEnter
struct UMapGridWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function MapGridWidget.MapGridWidget_C.OnMouseLeave
struct UMapGridWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function MapGridWidget.MapGridWidget_C.Destruct
struct UMapGridWidget_C_Destruct_Params
{
};

// Function MapGridWidget.MapGridWidget_C.Tick
struct UMapGridWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.Construct
struct UMapGridWidget_C_Construct_Params
{
};

// Function MapGridWidget.MapGridWidget_C.UpdateRectangleView
struct UMapGridWidget_C_UpdateRectangleView_Params
{
};

// Function MapGridWidget.MapGridWidget_C.CustomEvent_1
struct UMapGridWidget_C_CustomEvent_1_Params
{
};

// Function MapGridWidget.MapGridWidget_C.SetCharacterIconPositionAndRotation_UC
struct UMapGridWidget_C_SetCharacterIconPositionAndRotation_UC_Params
{
	class Vector2D*                                    Pos_UC;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.SetImageBrush
struct UMapGridWidget_C_SetImageBrush_Params
{
	class UMaterialInstanceDynamic**                   NewMatInst;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapGridWidget.MapGridWidget_C.OnObserving
struct UMapGridWidget_C_OnObserving_Params
{
};

// Function MapGridWidget.MapGridWidget_C.ExecuteUbergraph_MapGridWidget
struct UMapGridWidget_C_ExecuteUbergraph_MapGridWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
