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

// Function Powerup_BandageOnHand.Powerup_BandageOnHand_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APowerup_BandageOnHand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_BandageOnHand.Powerup_BandageOnHand_C.UserConstructionScript");

	APowerup_BandageOnHand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_BandageOnHand.Powerup_BandageOnHand_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APowerup_BandageOnHand_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_BandageOnHand.Powerup_BandageOnHand_C.ReceiveBeginPlay");

	APowerup_BandageOnHand_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_BandageOnHand.Powerup_BandageOnHand_C.ExecuteUbergraph_Powerup_BandageOnHand
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APowerup_BandageOnHand_C::ExecuteUbergraph_Powerup_BandageOnHand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Powerup_BandageOnHand.Powerup_BandageOnHand_C.ExecuteUbergraph_Powerup_BandageOnHand");

	APowerup_BandageOnHand_C_ExecuteUbergraph_Powerup_BandageOnHand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
