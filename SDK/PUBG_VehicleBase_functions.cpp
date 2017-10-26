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

// Function VehicleBase.VehicleBase_C.TickIndicators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickIndicators()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc8f5b8e);

	AVehicleBase_C_TickIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickDynamicCamera
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickDynamicCamera()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5d18051a);

	AVehicleBase_C_TickDynamicCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickBrakeSoundTest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickBrakeSoundTest()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb7b2fa72);

	AVehicleBase_C_TickBrakeSoundTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickThrottleSoundTest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickThrottleSoundTest()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7287e3b9);

	AVehicleBase_C_TickThrottleSoundTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickBoostSoundTest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickBoostSoundTest()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbbd1753a);

	AVehicleBase_C_TickBoostSoundTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickFuelConsumption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::TickFuelConsumption(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbd81241d);

	AVehicleBase_C_TickFuelConsumption_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickBasicInfoCaching
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickBasicInfoCaching()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xff9fcde9);

	AVehicleBase_C_TickBasicInfoCaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickWheelCaching
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickWheelCaching()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe863bce8);

	AVehicleBase_C_TickWheelCaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickWheelSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickWheelSound()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xccaaed3e);

	AVehicleBase_C_TickWheelSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.OnRep_IsBrakeEngaged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::OnRep_IsBrakeEngaged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4d8a7d80);

	AVehicleBase_C_OnRep_IsBrakeEngaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.OnRep_IsLightsOn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::OnRep_IsLightsOn()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x156af124);

	AVehicleBase_C_OnRep_IsLightsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcb9bdb48);

	AVehicleBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpActEvt_Handbrake_K2Node_InputActionEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AVehicleBase_C::InpActEvt_Handbrake_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4f04d6ec);

	AVehicleBase_C_InpActEvt_Handbrake_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpActEvt_Handbrake_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AVehicleBase_C::InpActEvt_Handbrake_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x29025c83);

	AVehicleBase_C_InpActEvt_Handbrake_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ToggleLights
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::ToggleLights()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc1e1a52c);

	AVehicleBase_C_ToggleLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.BrakeLampOn
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::BrakeLampOn()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe43a56d1);

	AVehicleBase_C_BrakeLampOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.BrakeLampOff
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::BrakeLampOff()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2cb81e1d);

	AVehicleBase_C_BrakeLampOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd5842435);

	AVehicleBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8(float AxisValue)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc89f4788);

	AVehicleBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AVehicleBase_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa8e4f67f);

	AVehicleBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TurnOffLight
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          KillingDamage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class ATslPlayerState*         PlayerInstigator               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::TurnOffLight(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x341afd53);

	AVehicleBase_C_TurnOffLight_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.PlayerInstigator = PlayerInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16(float AxisValue)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x39f62eaa);

	AVehicleBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.EventFuelConsumption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::EventFuelConsumption()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb09baa6a);

	AVehicleBase_C_EventFuelConsumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::ExecuteUbergraph_VehicleBase(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x85c3b566);

	AVehicleBase_C_ExecuteUbergraph_VehicleBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
