// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ocean.BP_Ocean_C.Set Global Parameters
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Ocean_C::Set_Global_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Set Global Parameters");

	ABP_Ocean_C_Set_Global_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.Set Display Parameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Ocean_C::Set_Display_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Set Display Parameters");

	ABP_Ocean_C_Set_Display_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.Create Wave Set
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Ocean_C::Create_Wave_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Create Wave Set");

	ABP_Ocean_C_Create_Wave_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Ocean_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.UserConstructionScript");

	ABP_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Ocean_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay");

	ABP_Ocean_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.SetNetworkOffset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Ocean_C::SetNetworkOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.SetNetworkOffset");

	ABP_Ocean_C_SetNetworkOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Ocean_C::ExecuteUbergraph_BP_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean");

	ABP_Ocean_C_ExecuteUbergraph_BP_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
