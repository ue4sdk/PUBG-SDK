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

// Function BP_Underwater.BP_Underwater_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Underwater_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.UserConstructionScript");

	ABP_Underwater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Underwater_C::WetLensBlurFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__FinishedFunc");

	ABP_Underwater_C_WetLensBlurFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Underwater_C::WetLensBlurFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__UpdateFunc");

	ABP_Underwater_C_WetLensBlurFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Underwater_C::WetLensDistortFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__FinishedFunc");

	ABP_Underwater_C_WetLensDistortFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Underwater_C::WetLensDistortFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__UpdateFunc");

	ABP_Underwater_C_WetLensDistortFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Underwater_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.ReceiveTick");

	ABP_Underwater_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Underwater_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.ReceiveBeginPlay");

	ABP_Underwater_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.UnderWater
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Underwater_C::UnderWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.UnderWater");

	ABP_Underwater_C_UnderWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.OutOfWater
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Underwater_C::OutOfWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.OutOfWater");

	ABP_Underwater_C_OutOfWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.ExecuteUbergraph_BP_Underwater
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Underwater_C::ExecuteUbergraph_BP_Underwater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Underwater.BP_Underwater_C.ExecuteUbergraph_BP_Underwater");

	ABP_Underwater_C_ExecuteUbergraph_BP_Underwater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
