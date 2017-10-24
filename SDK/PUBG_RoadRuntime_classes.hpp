#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RoadRuntime.CrossActor
// 0x0030 (0x03E0 - 0x03B0)
class ACrossActor : public AStaticMeshActor
{
public:
	struct FString                                     UniqueKey;                                                // 0x03B0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCrossActorManager>                  SideActors;                                               // 0x03C0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCrossMeshManager>                   SideMeshes;                                               // 0x03D0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RoadRuntime.CrossActor");
		return ptr;
	}


	void UpdateSideMesh(class UStaticMesh* InPrototype, const class Vector3D& MeshRelativeLocation, const class Rotator& MeshRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized);
	void UpdateSideActor(class UClass* InPrototype, const class Vector3D& ActorRelativeLocation, const class Rotator& ActorRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized);
	void PushSideMesh(class UStaticMesh* InPrototype, const class Vector3D& MeshRelativeLocation, const class Rotator& MeshRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized);
	void PushSideActor(class UClass* InPrototype, const class Vector3D& ActorRelativeLocation, const class Rotator& ActorRelativeRotation, int SocketIndex, bool IsEnable, bool IsNormalized);
	void DestroySideObjects();
};


// Class RoadRuntime.RoadActor
// 0x0078 (0x0418 - 0x03A0)
class ARoadActor : public AActor
{
public:
	TEnumAsByte<ESplineMeshAxis>                       SplineMeshAxis;                                           // 0x03A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	class Vector3D                                     LocalOffset;                                              // 0x03A4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ARoadActor*                                  Father;                                                   // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FString                                     UniqueKey;                                                // 0x03B8(0x0010) (CPF_ZeroConstructor)
	class USplineComponent*                            Spline;                                                   // 0x03C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                Index;                                                    // 0x03D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Segmentation;                                             // 0x03D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StepGeneration;                                           // 0x03D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Size;                                                     // 0x03DC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 RoadMesh;                                                 // 0x03E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class USplineMeshComponent*>                RoadMeshesComp;                                           // 0x03E8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<struct FSideActorManager>                   SideActors;                                               // 0x03F8(0x0010) (CPF_ZeroConstructor)
	TArray<struct FSideMeshManager>                    SideMeshes;                                               // 0x0408(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RoadRuntime.RoadActor");
		return ptr;
	}


	void UpdateSplineMesh(int MeshIndex);
	void UpdateSideMeshes(class UStaticMesh* InPrototype, const class Vector3D& MeshRelativeLocation, const class Rotator& MeshRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void UpdateSideActor(class UClass* InPrototype, const class Vector3D& ActorRelativeLocation, const class Rotator& ActorRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void UpdateSegment(int SegmentIndex, class USplineComponent* SplineComponent, class UStaticMesh* StaticMesh, TEnumAsByte<ESplineMeshAxis> InAxis);
	void PushSideMesh(class UStaticMesh* InPrototype, const class Vector3D& MeshRelativeLocation, const class Rotator& MeshRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void PushSideActor(class UClass* InPrototype, const class Vector3D& ActorRelativeLocation, const class Rotator& ActorRelativeRotation, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void DestroySideObjects();
	void ClearSplineMeshes();
	float STATIC_ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int ApproxSections);
	void AddSplineMesh(int MeshIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
