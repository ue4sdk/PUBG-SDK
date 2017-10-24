// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.PlayMuzzleFlashAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ObserverPlayerIconMuzzleFlash_C::PlayMuzzleFlashAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.PlayMuzzleFlashAnim");

	UBP_ObserverPlayerIconMuzzleFlash_C_PlayMuzzleFlashAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ObserverPlayerIconMuzzleFlash_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.Construct");

	UBP_ObserverPlayerIconMuzzleFlash_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ObserverPlayerIconMuzzleFlash_C::ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash");

	UBP_ObserverPlayerIconMuzzleFlash_C_ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
