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

// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// 0x01B0 (0x0220 - 0x0070)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x0078(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x0084(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableWorldGeometry;                                     // 0x0085(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bComponentSpaceSimulation;                                // 0x0086(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideWorldGravity;                                    // 0x0087(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CachedBoundsScale;                                        // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x194];                                     // 0x008C(0x0194) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
