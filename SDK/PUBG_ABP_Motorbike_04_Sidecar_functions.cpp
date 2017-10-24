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

// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.TickBikePose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Motorbike_04_Sidecar_C::TickBikePose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.TickBikePose");

	UABP_Motorbike_04_Sidecar_C_TickBikePose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191
// (FUNC_BlueprintEvent)

void UABP_Motorbike_04_Sidecar_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191");

	UABP_Motorbike_04_Sidecar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Motorbike_04_Sidecar_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.BlueprintUpdateAnimation");

	UABP_Motorbike_04_Sidecar_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.ExecuteUbergraph_ABP_Motorbike_04_Sidecar
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Motorbike_04_Sidecar_C::ExecuteUbergraph_ABP_Motorbike_04_Sidecar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.ExecuteUbergraph_ABP_Motorbike_04_Sidecar");

	UABP_Motorbike_04_Sidecar_C_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
