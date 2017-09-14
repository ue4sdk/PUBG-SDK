// PLAYERUNKNOWN BattleGrounds () SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompassMarkerWidget.CompassMarkerWidget_C.On_CompassMarkerImage_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCompassMarkerWidget_C::On_CompassMarkerImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassMarkerWidget.CompassMarkerWidget_C.On_CompassMarkerImage_Prepass_1");

	UCompassMarkerWidget_C_On_CompassMarkerImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassMarkerWidget.CompassMarkerWidget_C.InitializeCompassMarker
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ViewSize                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UCompassMarkerWidget_C::InitializeCompassMarker(float* ViewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassMarkerWidget.CompassMarkerWidget_C.InitializeCompassMarker");

	UCompassMarkerWidget_C_InitializeCompassMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewSize != nullptr)
		*ViewSize = params.ViewSize;
}


// Function CompassMarkerWidget.CompassMarkerWidget_C.Update
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          X                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UCompassMarkerWidget_C::Update(float* X)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassMarkerWidget.CompassMarkerWidget_C.Update");

	UCompassMarkerWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
}


// Function CompassMarkerWidget.CompassMarkerWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCompassMarkerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassMarkerWidget.CompassMarkerWidget_C.Construct");

	UCompassMarkerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassMarkerWidget.CompassMarkerWidget_C.ExecuteUbergraph_CompassMarkerWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCompassMarkerWidget_C::ExecuteUbergraph_CompassMarkerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassMarkerWidget.CompassMarkerWidget_C.ExecuteUbergraph_CompassMarkerWidget");

	UCompassMarkerWidget_C_ExecuteUbergraph_CompassMarkerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
