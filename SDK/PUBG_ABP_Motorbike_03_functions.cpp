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

// Function ABP_Motorbike_03.ABP_Motorbike_03_C.TickBikePose
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Motorbike_03_C::TickBikePose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_03.ABP_Motorbike_03_C.TickBikePose");

	UABP_Motorbike_03_C_TickBikePose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_03.ABP_Motorbike_03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB
// (FUNC_BlueprintEvent)

void UABP_Motorbike_03_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_03.ABP_Motorbike_03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB");

	UABP_Motorbike_03_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_03.ABP_Motorbike_03_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Motorbike_03_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_03.ABP_Motorbike_03_C.BlueprintUpdateAnimation");

	UABP_Motorbike_03_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_03.ABP_Motorbike_03_C.ExecuteUbergraph_ABP_Motorbike_03
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Motorbike_03_C::ExecuteUbergraph_ABP_Motorbike_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_03.ABP_Motorbike_03_C.ExecuteUbergraph_ABP_Motorbike_03");

	UABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
