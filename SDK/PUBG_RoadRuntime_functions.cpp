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

// Function RoadRuntime.CrossActor.UpdateSideMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 MeshRelativeLocation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  MeshRelativeRotation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::UpdateSideMesh(class UStaticMesh* InPrototype, const class Vector3D& MeshRelativeLocation, const class Rotator& MeshRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideMesh");

	ACrossActor_UpdateSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.UpdateSideActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 ActorRelativeLocation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  ActorRelativeRotation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::UpdateSideActor(class UClass* InPrototype, const class Vector3D& ActorRelativeLocation, const class Rotator& ActorRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideActor");

	ACrossActor_UpdateSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 MeshRelativeLocation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  MeshRelativeRotation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::PushSideMesh(class UStaticMesh* InPrototype, const class Vector3D& MeshRelativeLocation, const class Rotator& MeshRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideMesh");

	ACrossActor_PushSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 ActorRelativeLocation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  ActorRelativeRotation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::PushSideActor(class UClass* InPrototype, const class Vector3D& ActorRelativeLocation, const class Rotator& ActorRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideActor");

	ACrossActor_PushSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.DestroySideObjects
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrossActor::DestroySideObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.DestroySideObjects");

	ACrossActor_DestroySideObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSplineMesh
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            MeshIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSplineMesh(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSplineMesh");

	ARoadActor_UpdateSplineMesh_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideMeshes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 MeshRelativeLocation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  MeshRelativeRotation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSideMeshes(class UStaticMesh* InPrototype, const class Vector3D& MeshRelativeLocation, const class Rotator& MeshRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideMeshes");

	ARoadActor_UpdateSideMeshes_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 ActorRelativeLocation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  ActorRelativeRotation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSideActor(class UClass* InPrototype, const class Vector3D& ActorRelativeLocation, const class Rotator& ActorRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideActor");

	ARoadActor_UpdateSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSegment
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            SegmentIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USplineComponent*        SplineComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UStaticMesh*             StaticMesh                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ESplineMeshAxis>   InAxis                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSegment(int SegmentIndex, class USplineComponent* SplineComponent, class UStaticMesh* StaticMesh, TEnumAsByte<ESplineMeshAxis> InAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSegment");

	ARoadActor_UpdateSegment_Params params;
	params.SegmentIndex = SegmentIndex;
	params.SplineComponent = SplineComponent;
	params.StaticMesh = StaticMesh;
	params.InAxis = InAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 MeshRelativeLocation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  MeshRelativeRotation           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::PushSideMesh(class UStaticMesh* InPrototype, const class Vector3D& MeshRelativeLocation, const class Rotator& MeshRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideMesh");

	ARoadActor_PushSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 ActorRelativeLocation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  ActorRelativeRotation          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::PushSideActor(class UClass* InPrototype, const class Vector3D& ActorRelativeLocation, const class Rotator& ActorRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideActor");

	ARoadActor_PushSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.DestroySideObjects
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ARoadActor::DestroySideObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.DestroySideObjects");

	ARoadActor_DestroySideObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ClearSplineMeshes
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ARoadActor::ClearSplineMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ClearSplineMeshes");

	ARoadActor_ClearSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ApproxLength
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FInterpCurveVector      SplineInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          Start                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          End                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ApproxSections                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ARoadActor::STATIC_ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int ApproxSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ApproxLength");

	ARoadActor_ApproxLength_Params params;
	params.SplineInfo = SplineInfo;
	params.Start = Start;
	params.End = End;
	params.ApproxSections = ApproxSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RoadRuntime.RoadActor.AddSplineMesh
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            MeshIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::AddSplineMesh(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.AddSplineMesh");

	ARoadActor_AddSplineMesh_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
