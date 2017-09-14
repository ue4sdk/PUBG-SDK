#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
struct FWeightmapLayerAllocationInfo
{
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      WeightmapTextureIndex;                                    // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      WeightmapTextureChannel;                                  // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.GrassVariety
// 0x0048
struct FGrassVariety
{
	class UStaticMesh*                                 GrassMesh;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseGrid : 1;                                             // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              PlacementJitter;                                          // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinLOD;                                                   // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGrassScaling>                         Scaling;                                                  // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0024(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x002C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0034(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RandomRotation : 1;                                       // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AlignToSurface : 1;                                       // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseLandscapeLightmap : 1;                                // 0x003E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x003F(0x0003) (CPF_Edit)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x0042(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TangentLen;                                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	class Vector3D                                     Center;                                                   // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Left;                                                     // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Right;                                                    // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     FalloffLeft;                                              // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     FalloffRight;                                             // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartEndFalloff;                                          // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      End : 1;                                                  // 0x0008(0x0001)
};

// ScriptStruct Landscape.GrassInput
// 0x0048
struct FGrassInput
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULandscapeGrassType*                         GrassType;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0010(0x0038)
};

// ScriptStruct Landscape.LayerBlendInput
// 0x0098
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FExpressionInput                            LayerInput;                                               // 0x0010(0x0038)
	struct FExpressionInput                            HeightInput;                                              // 0x0048(0x0038)
	float                                              PreviewWeight;                                            // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ConstLayerInput;                                          // 0x0084(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConstHeightInput;                                         // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LayerName;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{

};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{

};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bCenterH : 1;                                             // 0x0018(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	class Vector2D                                     CenterAdjust;                                             // 0x001C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bScaleToWidth : 1;                                        // 0x0024(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	class Vector3D                                     Scale;                                                    // 0x0028(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeSplineMeshOrientation>       Orientation;                                              // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                              // 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                   // 0x0036(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{

};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{

};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
