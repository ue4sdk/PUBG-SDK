#pragma once

// PlayerUnknown's Battlegrounds (2.6.30.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomizableObject.CustomizableMeshComponent
// 0x0070 (0x0370 - 0x0300)
class UCustomizableMeshComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0300(0x0058) MISSED OFFSET
	TArray<TWeakObjectPtr<class UTexture2D>>           CreatedTextures;                                          // 0x0358(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableMeshComponent");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableSkeletalComponent
// 0x0050 (0x03C0 - 0x0370)
class UCustomizableSkeletalComponent : public UCustomizableMeshComponent
{
public:
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0370(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0378(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableSkeletalComponent");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableInstancePrivateData
// 0x00D8 (0x0100 - 0x0028)
class UCustomizableInstancePrivateData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FGeneratedMaterial>                  GeneratedMaterials;                                       // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FGeneratedMesh>                      GeneratedMeshes;                                          // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FGeneratedTexture>                   GeneratedTextures;                                        // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0060(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableInstancePrivateData");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObject
// 0x00C0 (0x00E8 - 0x0028)
class UCustomizableObject : public UObject
{
public:
	class USkeletalMesh*                               ReferenceSkeletalMesh;                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 ReferenceStaticMesh;                                      // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  ReferencedMaterials;                                      // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FMutableModelImageProperties>        ImageProperties;                                          // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap;                                             // 0x0058(0x0050) (CPF_ZeroConstructor)
	struct FCompilationOptions                         CompileOptions;                                           // 0x00A8(0x000C)
	struct FGuid                                       VersionId;                                                // 0x00B4(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TArray<struct FMutableModelParameterProperties>    ParameterProperties;                                      // 0x00C8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObject");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObjectInstance
// 0x0108 (0x0130 - 0x0028)
class UCustomizableObjectInstance : public UObject
{
public:
	class UCustomizableObject*                         CustomizableObject;                                       // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                State;                                                    // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                           // 0x0038(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                            // 0x0048(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                          // 0x0058(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                         // 0x0068(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                      // 0x0078(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	bool                                               bBuildRawData;                                            // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               bBuildRenderData;                                         // 0x0089(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x96];                                      // 0x008A(0x0096) MISSED OFFSET
	class UCustomizableInstancePrivateData*            PrivateData;                                              // 0x0120(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectInstance");
		return ptr;
	}


	void SetRandomValues();
};


// Class CustomizableObject.CustomizableObjectSystem
// 0x00C8 (0x00F0 - 0x0028)
class UCustomizableObjectSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	TArray<struct FMutableSkeletalMeshTracker>         SkeletalMeshTrackerArray;                                 // 0x0048(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMutableTextureTracker>              TextureTrackerArray;                                      // 0x0058(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	class UCustomizableSkeletalComponent*              CurrentBeginUpdateComponent;                              // 0x0088(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0090(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectSystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
