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

// Function ProjMolotov_DamageFieldContainerInWall.ProjMolotov_DamageFieldContainerInWall_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AProjMolotov_DamageFieldContainerInWall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMolotov_DamageFieldContainerInWall.ProjMolotov_DamageFieldContainerInWall_C.UserConstructionScript");

	AProjMolotov_DamageFieldContainerInWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
