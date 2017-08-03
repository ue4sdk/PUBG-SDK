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

// Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AToy_WeapCrossbow_1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.UserConstructionScript");

	AToy_WeapCrossbow_1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AToy_WeapCrossbow_1_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.ReceiveTick");

	AToy_WeapCrossbow_1_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.ServerSetAmmoState
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_CrossbowState>* NewAmmoState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AToy_WeapCrossbow_1_C::ServerSetAmmoState(TEnumAsByte<ENUM_CrossbowState>* NewAmmoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.ServerSetAmmoState");

	AToy_WeapCrossbow_1_C_ServerSetAmmoState_Params params;
	params.NewAmmoState = NewAmmoState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.ExecuteUbergraph_Toy_WeapCrossbow_2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AToy_WeapCrossbow_1_C::ExecuteUbergraph_Toy_WeapCrossbow_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Toy_WeapCrossbow_2.Toy_WeapCrossbow_1_C.ExecuteUbergraph_Toy_WeapCrossbow_2");

	AToy_WeapCrossbow_1_C_ExecuteUbergraph_Toy_WeapCrossbow_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
