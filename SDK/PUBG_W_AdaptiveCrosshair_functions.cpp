// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.DecideAdaptiveCrosshairColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AdaptiveCrosshair_C::DecideAdaptiveCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.DecideAdaptiveCrosshairColor");

	UW_AdaptiveCrosshair_C_DecideAdaptiveCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.On_CanvasBase_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_AdaptiveCrosshair_C::On_CanvasBase_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.On_CanvasBase_Prepass_1");

	UW_AdaptiveCrosshair_C_On_CanvasBase_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetShowCrosshairWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetShowCrosshairWidget(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetShowCrosshairWidget");

	UW_AdaptiveCrosshair_C_SetShowCrosshairWidget_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairClass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponClass>      InClass                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bHasWeapon                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetCenterCrosshairClass(TEnumAsByte<EWeaponClass> InClass, bool bHasWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairClass");

	UW_AdaptiveCrosshair_C_SetCenterCrosshairClass_Params params;
	params.InClass = InClass;
	params.bHasWeapon = bHasWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetCenterCrosshairVisibility(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairVisibility");

	UW_AdaptiveCrosshair_C_SetCenterCrosshairVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairDeviation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeviation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetCenterCrosshairDeviation(float InDeviation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairDeviation");

	UW_AdaptiveCrosshair_C_SetCenterCrosshairDeviation_Params params;
	params.InDeviation = InDeviation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetAdaptiveCrosshairVisibility(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairVisibility");

	UW_AdaptiveCrosshair_C_SetAdaptiveCrosshairVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairPosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D                 ScreenPosition                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Distance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetAdaptiveCrosshairPosition(const class Vector2D& ScreenPosition, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairPosition");

	UW_AdaptiveCrosshair_C_SetAdaptiveCrosshairPosition_Params params;
	params.ScreenPosition = ScreenPosition;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
