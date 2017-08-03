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

// Function Sedan4Door_rigged_Skeleton_AnimBlueprint.Sedan4Door_rigged_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Sedan4Door_rigged_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USedan4Door_rigged_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Sedan4Door_rigged_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sedan4Door_rigged_Skeleton_AnimBlueprint.Sedan4Door_rigged_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Sedan4Door_rigged_Skeleton_AnimBlueprint");

	USedan4Door_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Sedan4Door_rigged_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
