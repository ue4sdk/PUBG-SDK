#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RoadRuntime.CrossActor.UpdateSideMesh
struct ACrossActor_UpdateSideMesh_Params
{
	class UStaticMesh*                                 InPrototype;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     MeshRelativeLocation;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      MeshRelativeRotation;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNormalized;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.CrossActor.UpdateSideActor
struct ACrossActor_UpdateSideActor_Params
{
	class UClass*                                      InPrototype;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ActorRelativeLocation;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      ActorRelativeRotation;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNormalized;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.CrossActor.PushSideMesh
struct ACrossActor_PushSideMesh_Params
{
	class UStaticMesh*                                 InPrototype;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     MeshRelativeLocation;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      MeshRelativeRotation;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNormalized;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.CrossActor.PushSideActor
struct ACrossActor_PushSideActor_Params
{
	class UClass*                                      InPrototype;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ActorRelativeLocation;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      ActorRelativeRotation;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNormalized;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.CrossActor.DestroySideObjects
struct ACrossActor_DestroySideObjects_Params
{
};

// Function RoadRuntime.RoadActor.UpdateSplineMesh
struct ARoadActor_UpdateSplineMesh_Params
{
	int                                                MeshIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.RoadActor.UpdateSideMeshes
struct ARoadActor_UpdateSideMeshes_Params
{
	class UStaticMesh*                                 InPrototype;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     MeshRelativeLocation;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      MeshRelativeRotation;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InShift;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InSpacing;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNormalized;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.RoadActor.UpdateSideActor
struct ARoadActor_UpdateSideActor_Params
{
	class UClass*                                      InPrototype;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ActorRelativeLocation;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      ActorRelativeRotation;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InShift;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InSpacing;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNormalized;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.RoadActor.UpdateSegment
struct ARoadActor_UpdateSegment_Params
{
	int                                                SegmentIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USplineComponent*                            SplineComponent;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       InAxis;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.RoadActor.PushSideMesh
struct ARoadActor_PushSideMesh_Params
{
	class UStaticMesh*                                 InPrototype;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     MeshRelativeLocation;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      MeshRelativeRotation;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InShift;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InSpacing;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNormalized;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.RoadActor.PushSideActor
struct ARoadActor_PushSideActor_Params
{
	class UClass*                                      InPrototype;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ActorRelativeLocation;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      ActorRelativeRotation;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InShift;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InSpacing;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsEnable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNormalized;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RoadRuntime.RoadActor.DestroySideObjects
struct ARoadActor_DestroySideObjects_Params
{
};

// Function RoadRuntime.RoadActor.ClearSplineMeshes
struct ARoadActor_ClearSplineMeshes_Params
{
};

// Function RoadRuntime.RoadActor.ApproxLength
struct ARoadActor_ApproxLength_Params
{
	struct FInterpCurveVector                          SplineInfo;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	float                                              Start;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              End;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ApproxSections;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function RoadRuntime.RoadActor.AddSplineMesh
struct ARoadActor_AddSplineMesh_Params
{
	int                                                MeshIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
