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

// Function Powerup_Bandage.Powerup_Bandage_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APowerup_Bandage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Bandage.Powerup_Bandage_C.UserConstructionScript");

	APowerup_Bandage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Bandage.Powerup_Bandage_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APowerup_Bandage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Bandage.Powerup_Bandage_C.ReceiveBeginPlay");

	APowerup_Bandage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Bandage.Powerup_Bandage_C.ExecuteUbergraph_Powerup_Bandage
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APowerup_Bandage_C::ExecuteUbergraph_Powerup_Bandage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_Bandage.Powerup_Bandage_C.ExecuteUbergraph_Powerup_Bandage");

	APowerup_Bandage_C_ExecuteUbergraph_Powerup_Bandage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
