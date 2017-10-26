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

// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.SubPrepass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::SubPrepass(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa387793);

	UBlueZoneGpsWidget_Circle_C_SubPrepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.On_BluezoneLight_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::On_BluezoneLight_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x237a15a0);

	UBlueZoneGpsWidget_Circle_C_On_BluezoneLight_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.On_ImageBorder_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::On_ImageBorder_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc9181c47);

	UBlueZoneGpsWidget_Circle_C_On_ImageBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.TickReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::TickReset(float Time)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x37f5804f);

	UBlueZoneGpsWidget_Circle_C_TickReset_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Circle_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd92f4bec);

	UBlueZoneGpsWidget_Circle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.ChildUpdateGauge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float*                         Gauge                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::ChildUpdateGauge(float* Gauge)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xeb892703);

	UBlueZoneGpsWidget_Circle_C_ChildUpdateGauge_Params params;
	params.Gauge = Gauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.MainPrepassWidgetVisibilitySetting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::MainPrepassWidgetVisibilitySetting(class UWidget** BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8087586a);

	UBlueZoneGpsWidget_Circle_C_MainPrepassWidgetVisibilitySetting_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.OnWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Circle_C::OnWarning()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1c43b8ee);

	UBlueZoneGpsWidget_Circle_C_OnWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.OnEnterNextPlayzone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Circle_C::OnEnterNextPlayzone()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9108bd6f);

	UBlueZoneGpsWidget_Circle_C_OnEnterNextPlayzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.OnLeaveNextPlayzone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlueZoneGpsWidget_Circle_C::OnLeaveNextPlayzone()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9ad80e3c);

	UBlueZoneGpsWidget_Circle_C_OnLeaveNextPlayzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueZoneGpsWidget_Circle.BlueZoneGpsWidget_Circle_C.ExecuteUbergraph_BlueZoneGpsWidget_Circle
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlueZoneGpsWidget_Circle_C::ExecuteUbergraph_BlueZoneGpsWidget_Circle(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x74f4b494);

	UBlueZoneGpsWidget_Circle_C_ExecuteUbergraph_BlueZoneGpsWidget_Circle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
