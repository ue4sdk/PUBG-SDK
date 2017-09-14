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

// Function StanceManagerWidget.StanceManagerWidget_C.On_StanceManagerCanvas_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStanceManagerWidget_C::On_StanceManagerCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.On_StanceManagerCanvas_Prepass_1");

	UStanceManagerWidget_C_On_StanceManagerCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.TickCheckRiderorDriver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::TickCheckRiderorDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.TickCheckRiderorDriver");

	UStanceManagerWidget_C_TickCheckRiderorDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.TickCheckStance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::TickCheckStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.TickCheckStance");

	UStanceManagerWidget_C_TickCheckStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.VehicleStanceToChracterStance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::VehicleStanceToChracterStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.VehicleStanceToChracterStance");

	UStanceManagerWidget_C_VehicleStanceToChracterStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.OnRider
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::OnRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.OnRider");

	UStanceManagerWidget_C_OnRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.OnDriver
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::OnDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.OnDriver");

	UStanceManagerWidget_C_OnDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.CharacterStanceToVehicleStance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStanceManagerWidget_C::CharacterStanceToVehicleStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.CharacterStanceToVehicleStance");

	UStanceManagerWidget_C_CharacterStanceToVehicleStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStanceManagerWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.Tick");

	UStanceManagerWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StanceManagerWidget.StanceManagerWidget_C.ExecuteUbergraph_StanceManagerWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStanceManagerWidget_C::ExecuteUbergraph_StanceManagerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StanceManagerWidget.StanceManagerWidget_C.ExecuteUbergraph_StanceManagerWidget");

	UStanceManagerWidget_C_ExecuteUbergraph_StanceManagerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
