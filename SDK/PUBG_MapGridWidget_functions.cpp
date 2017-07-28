// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapGridWidget.MapGridWidget_C.UpdateRedAndBlueZoneColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapGridWidget_C::UpdateRedAndBlueZoneColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.UpdateRedAndBlueZoneColor");

	UMapGridWidget_C_UpdateRedAndBlueZoneColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.CreateIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATeam*                   Team                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMapCharacterIconWidget_C* IconWidget                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::CreateIcon(class ATslCharacter* Character, class ATeam* Team, class UMapCharacterIconWidget_C** IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.CreateIcon");

	UMapGridWidget_C_CreateIcon_Params params;
	params.Character = Character;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconWidget != nullptr)
		*IconWidget = params.IconWidget;
}


// Function MapGridWidget.MapGridWidget_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::UpdateIcon(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.UpdateIcon");

	UMapGridWidget_C_UpdateIcon_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.InitMapGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapGridWidget_C::InitMapGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.InitMapGrid");

	UMapGridWidget_C_InitMapGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.TickUpdateMapMarker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapGridWidget_C::TickUpdateMapMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.TickUpdateMapMarker");

	UMapGridWidget_C_TickUpdateMapMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.On_Marker_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::On_Marker_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.On_Marker_Prepass_1");

	UMapGridWidget_C_On_Marker_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.On_Character_Pos_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::On_Character_Pos_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.On_Character_Pos_Prepass_1");

	UMapGridWidget_C_On_Character_Pos_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.IsMouseInMarker
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsIn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::IsMouseInMarker(bool* IsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.IsMouseInMarker");

	UMapGridWidget_C_IsMouseInMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIn != nullptr)
		*IsIn = params.IsIn;
}


// Function MapGridWidget.MapGridWidget_C.GetAlignment
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class Vector2D                 Aligment                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::GetAlignment(class Vector2D* Aligment)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.GetAlignment");

	UMapGridWidget_C_GetAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Aligment != nullptr)
		*Aligment = params.Aligment;
}


// Function MapGridWidget.MapGridWidget_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMapGridWidget_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.OnMouseMove");

	UMapGridWidget_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapGridWidget.MapGridWidget_C.Get_Marker_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UMapGridWidget_C::Get_Marker_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.Get_Marker_Visibility_1");

	UMapGridWidget_C_Get_Marker_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapGridWidget.MapGridWidget_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMapGridWidget_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.OnPreviewMouseButtonDown");

	UMapGridWidget_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapGridWidget.MapGridWidget_C.DrawMarker_UC
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class Vector2D*                MarkerCenter_UC                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UMapGridWidget_C::DrawMarker_UC(class Vector2D* MarkerCenter_UC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.DrawMarker_UC");

	UMapGridWidget_C_DrawMarker_UC_Params params;
	params.MarkerCenter_UC = MarkerCenter_UC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.DrawRedZone_UC
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class Vector2D*                Center_UC                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float*                         Radius_UC                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::DrawRedZone_UC(class Vector2D* Center_UC, float* Radius_UC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.DrawRedZone_UC");

	UMapGridWidget_C_DrawRedZone_UC_Params params;
	params.Center_UC = Center_UC;
	params.Radius_UC = Radius_UC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.OnPaint
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FPaintContext           Context                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMapGridWidget_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.OnPaint");

	UMapGridWidget_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function MapGridWidget.MapGridWidget_C.GetMapImageWigetSizeAndImageOffset
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D                 WidgetSize                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector2D                 ImageOffset                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::GetMapImageWigetSizeAndImageOffset(class Vector2D* WidgetSize, class Vector2D* ImageOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.GetMapImageWigetSizeAndImageOffset");

	UMapGridWidget_C_GetMapImageWigetSizeAndImageOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetSize != nullptr)
		*WidgetSize = params.WidgetSize;
	if (ImageOffset != nullptr)
		*ImageOffset = params.ImageOffset;
}


// Function MapGridWidget.MapGridWidget_C.Get_Character_Pos_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UMapGridWidget_C::Get_Character_Pos_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.Get_Character_Pos_Visibility_1");

	UMapGridWidget_C_Get_Character_Pos_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapGridWidget.MapGridWidget_C.UpdateRectangleViewByWidgetSize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D*                WidgetSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::UpdateRectangleViewByWidgetSize(class Vector2D* WidgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.UpdateRectangleViewByWidgetSize");

	UMapGridWidget_C_UpdateRectangleViewByWidgetSize_Params params;
	params.WidgetSize = WidgetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMapGridWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.OnMouseEnter");

	UMapGridWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMapGridWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.OnMouseLeave");

	UMapGridWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMapGridWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.Destruct");

	UMapGridWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.Tick");

	UMapGridWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMapGridWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.Construct");

	UMapGridWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.UpdateRectangleView
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMapGridWidget_C::UpdateRectangleView()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.UpdateRectangleView");

	UMapGridWidget_C_UpdateRectangleView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapGridWidget_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.CustomEvent_1");

	UMapGridWidget_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.SetCharacterIconPositionAndRotation_UC
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D*                Pos_UC                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float*                         Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::SetCharacterIconPositionAndRotation_UC(class Vector2D* Pos_UC, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.SetCharacterIconPositionAndRotation_UC");

	UMapGridWidget_C_SetCharacterIconPositionAndRotation_UC_Params params;
	params.Pos_UC = Pos_UC;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.SetImageBrush
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic** NewMatInst                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::SetImageBrush(class UMaterialInstanceDynamic** NewMatInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.SetImageBrush");

	UMapGridWidget_C_SetImageBrush_Params params;
	params.NewMatInst = NewMatInst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.OnObserving
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapGridWidget_C::OnObserving()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.OnObserving");

	UMapGridWidget_C_OnObserving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapGridWidget.MapGridWidget_C.ExecuteUbergraph_MapGridWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMapGridWidget_C::ExecuteUbergraph_MapGridWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.ExecuteUbergraph_MapGridWidget");

	UMapGridWidget_C_ExecuteUbergraph_MapGridWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
