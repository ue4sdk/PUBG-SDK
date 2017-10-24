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

// Function Landscape.LandscapeProxy.EditorApplySpline
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USplineComponent*        InSplineComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          StartWidth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndWidth                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartSideFalloff               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndSideFalloff                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartRoll                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndRoll                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumSubdivisions                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRaiseHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLowerHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULandscapeLayerInfoObject* PaintLayer                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InLODDistanceFactor            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
