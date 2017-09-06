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

// Function WeapBerreta686.WeapBerreta686_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeapBerreta686_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBerreta686.WeapBerreta686_C.UserConstructionScript");

	AWeapBerreta686_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBerreta686.WeapBerreta686_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeapBerreta686_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBerreta686.WeapBerreta686_C.ReceiveBeginPlay");

	AWeapBerreta686_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBerreta686.WeapBerreta686_C.ExecuteUbergraph_WeapBerreta686
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapBerreta686_C::ExecuteUbergraph_WeapBerreta686(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBerreta686.WeapBerreta686_C.ExecuteUbergraph_WeapBerreta686");

	AWeapBerreta686_C_ExecuteUbergraph_WeapBerreta686_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
