#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003
struct FFilterOptionPerAxis
{
	bool                                               bX;                                                       // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bY;                                                       // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bZ;                                                       // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D
struct FConstraintDescription
{
	bool                                               bTranslation;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRotation;                                                // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bScale;                                                   // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bParent;                                                  // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFilterOptionPerAxis                        TranslationAxes;                                          // 0x0004(0x0003) (CPF_Edit, CPF_BlueprintVisible)
	struct FFilterOptionPerAxis                        RotationAxes;                                             // 0x0007(0x0003) (CPF_Edit, CPF_BlueprintVisible)
	struct FFilterOptionPerAxis                        ScaleAxes;                                                // 0x000A(0x0003) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct AnimationCore.TransformConstraint
// 0x0028
struct FTransformConstraint
{
	struct FConstraintDescription                      Operator;                                                 // 0x0000(0x000D) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       SourceNode;                                               // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TargetNode;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMaintainOffset;                                          // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintOffset
// 0x0060
struct FConstraintOffset
{
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0020(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTransform                                  Parent;                                                   // 0x0030(0x0030) (CPF_IsPlainOldData)
};

// ScriptStruct AnimationCore.NodeChain
// 0x0010
struct FNodeChain
{
	TArray<struct FName>                               Nodes;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct AnimationCore.NodeObject
// 0x0010
struct FNodeObject
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070
struct FNodeHierarchyData
{
	TArray<struct FNodeObject>                         Nodes;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FTransform>                          Transforms;                                               // 0x0010(0x0010) (CPF_ZeroConstructor)
	TMap<struct FName, int>                            NodeNameToIndexMapping;                                   // 0x0020(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078
struct FNodeHierarchyWithUserData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FNodeHierarchyData                          Hierarchy;                                                // 0x0008(0x0070)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
