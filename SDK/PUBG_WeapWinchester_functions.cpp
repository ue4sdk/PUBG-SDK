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

// Function WeapWinchester.WeapWinchester_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeapWinchester_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapWinchester.WeapWinchester_C.UserConstructionScript");

	AWeapWinchester_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapWinchester.WeapWinchester_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeapWinchester_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapWinchester.WeapWinchester_C.ReceiveBeginPlay");

	AWeapWinchester_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapWinchester.WeapWinchester_C.ExecuteUbergraph_WeapWinchester
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapWinchester_C::ExecuteUbergraph_WeapWinchester(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapWinchester.WeapWinchester_C.ExecuteUbergraph_WeapWinchester");

	AWeapWinchester_C_ExecuteUbergraph_WeapWinchester_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
