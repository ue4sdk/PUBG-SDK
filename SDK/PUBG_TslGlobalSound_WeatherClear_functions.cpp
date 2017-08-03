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

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATslGlobalSound_WeatherClear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.UserConstructionScript");

	ATslGlobalSound_WeatherClear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATslGlobalSound_WeatherClear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveBeginPlay");

	ATslGlobalSound_WeatherClear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslGlobalSound_WeatherClear_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveEndPlay");

	ATslGlobalSound_WeatherClear_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ExecuteUbergraph_TslGlobalSound_WeatherClear
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslGlobalSound_WeatherClear_C::ExecuteUbergraph_TslGlobalSound_WeatherClear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ExecuteUbergraph_TslGlobalSound_WeatherClear");

	ATslGlobalSound_WeatherClear_C_ExecuteUbergraph_TslGlobalSound_WeatherClear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
