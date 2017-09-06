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

// Function W_AudioTest.W_AudioTest_C.SetDistance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DistanceInMeters               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_AudioTest_C::SetDistance(float DistanceInMeters)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AudioTest.W_AudioTest_C.SetDistance");

	UW_AudioTest_C_SetDistance_Params params;
	params.DistanceInMeters = DistanceInMeters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AudioTest.W_AudioTest_C.SetText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InText                         (CPF_Parm, CPF_ZeroConstructor)

void UW_AudioTest_C::SetText(const struct FString& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AudioTest.W_AudioTest_C.SetText");

	UW_AudioTest_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
