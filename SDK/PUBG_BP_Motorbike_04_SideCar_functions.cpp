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

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ProcessCamera
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::ProcessCamera()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6c4a8e9b);

	ABP_Motorbike_04_SideCar_C_ProcessCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.Process_FuelConsumption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::Process_FuelConsumption()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xff4d2b8a);

	ABP_Motorbike_04_SideCar_C_Process_FuelConsumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InitCache
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::InitCache()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe902fd5);

	ABP_Motorbike_04_SideCar_C_InitCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb75f4308);

	ABP_Motorbike_04_SideCar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc394843f);

	ABP_Motorbike_04_SideCar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x32a1b4f5);

	ABP_Motorbike_04_SideCar_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8(float AxisValue)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2402e655);

	ABP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14(float AxisValue)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb98f3add);

	ABP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.OnDeath_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          KillingDamage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class ATslPlayerState*         PlayerInstigator               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::OnDeath_Event_1(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6dba19b7);

	ABP_Motorbike_04_SideCar_C_OnDeath_Event_1_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.PlayerInstigator = PlayerInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ExecuteUbergraph_BP_Motorbike_04_SideCar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::ExecuteUbergraph_BP_Motorbike_04_SideCar(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf5ee834b);

	ABP_Motorbike_04_SideCar_C_ExecuteUbergraph_BP_Motorbike_04_SideCar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
