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

// Function BP_Sky_Sphere5.BP_Sky_Sphere5_C.UpdateSunDirection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Sky_Sphere5_C::UpdateSunDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere5.BP_Sky_Sphere5_C.UpdateSunDirection");

	ABP_Sky_Sphere5_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere5.BP_Sky_Sphere5_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Sky_Sphere5_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere5.BP_Sky_Sphere5_C.UserConstructionScript");

	ABP_Sky_Sphere5_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
