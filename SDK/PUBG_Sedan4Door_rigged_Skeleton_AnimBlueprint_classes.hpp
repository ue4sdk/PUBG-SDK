#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Sedan4Door_rigged_Skeleton_AnimBlueprint.Sedan4Door_rigged_Skeleton_AnimBlueprint_C
// 0x0150 (0x09D0 - 0x0880)
class USedan4Door_rigged_Skeleton_AnimBlueprint_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D252968B4ECE9CF5CF8576B96D30BA7F;      // 0x0888(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_FE6533ED48CED87703CDE3BBF56F35E1;// 0x08D0(0x0030)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_F69BDA614698907B7DA975990BA1BD07;// 0x0900(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_40B85FFE40596168060F72903567EF7C;// 0x0988(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sedan4Door_rigged_Skeleton_AnimBlueprint.Sedan4Door_rigged_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Sedan4Door_rigged_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
