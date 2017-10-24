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

// AnimBlueprintGeneratedClass Boat_PG117_Animation.Boat_PG117_Animation_C
// 0x0308 (0x07A0 - 0x0498)
class UBoat_PG117_Animation_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6F449E654EF7DE9DD0A9D7822CA89D21;      // 0x04A0(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_A3EB3FA84C550B2ED5F9B081D8672BB8;// 0x04E8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE;// 0x0518(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D1558F914C96EE151AF4F890F275573F;// 0x05C8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034;// 0x0610(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9;// 0x06C0(0x00B0)
	float                                              SteeringWheelAngle;                                       // 0x0770(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RudderAngle;                                              // 0x0774(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PropellerRotation;                                        // 0x0778(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      RudderRot;                                                // 0x077C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SteeringWheelRot;                                         // 0x0788(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      PropellerRot;                                             // 0x0794(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Boat_PG117_Animation.Boat_PG117_Animation_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Boat_PG117_Animation_AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Boat_PG117_Animation_AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Boat_PG117_Animation_AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Boat_PG117_Animation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
