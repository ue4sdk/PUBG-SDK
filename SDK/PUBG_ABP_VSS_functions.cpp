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

// Function ABP_VSS.ABP_VSS_C.HandleFireSelect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_VSS_C::HandleFireSelect()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x449c30d5);

	UABP_VSS_C_HandleFireSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_VSS_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x587044d4);

	UABP_VSS_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.Reload2_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_VSS_C::Reload2_Event_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x99031137);

	UABP_VSS_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.FireSelect_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_VSS_C::FireSelect_Event_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x946849c2);

	UABP_VSS_C_FireSelect_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.WeaponFire_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_VSS_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8fa74926);

	UABP_VSS_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.CancelReload_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_VSS_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1640408f);

	UABP_VSS_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.ExecuteUbergraph_ABP_VSS
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_VSS_C::ExecuteUbergraph_ABP_VSS(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x44a80647);

	UABP_VSS_C_ExecuteUbergraph_ABP_VSS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
