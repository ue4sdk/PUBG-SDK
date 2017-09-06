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

// Function WeapCrossbow_2.WeapCrossbow_1_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeapCrossbow_1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_2.WeapCrossbow_1_C.UserConstructionScript");

	AWeapCrossbow_1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_2.WeapCrossbow_1_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapCrossbow_1_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_2.WeapCrossbow_1_C.ReceiveTick");

	AWeapCrossbow_1_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_2.WeapCrossbow_1_C.ServerSetAmmoState
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_CrossbowState> NewAmmoState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapCrossbow_1_C::ServerSetAmmoState(TEnumAsByte<ENUM_CrossbowState> NewAmmoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_2.WeapCrossbow_1_C.ServerSetAmmoState");

	AWeapCrossbow_1_C_ServerSetAmmoState_Params params;
	params.NewAmmoState = NewAmmoState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_2.WeapCrossbow_1_C.ExecuteUbergraph_WeapCrossbow_2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapCrossbow_1_C::ExecuteUbergraph_WeapCrossbow_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_2.WeapCrossbow_1_C.ExecuteUbergraph_WeapCrossbow_2");

	AWeapCrossbow_1_C_ExecuteUbergraph_WeapCrossbow_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
