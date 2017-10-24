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

// AnimBlueprintGeneratedClass ABP_Motorbike_03.ABP_Motorbike_03_C
// 0x0E38 (0x16B8 - 0x0880)
class UABP_Motorbike_03_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5D86681C4346496728439B93FCEF7D5C;// 0x0888(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_17060527498171F87C24DDA3134FA8A4;// 0x08D0(0x0088)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F69F66004EC74A345B849392062DD01F;  // 0x0958(0x0098)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7695BD8C434CD73EE3F5D1AC8AC2E0EF;// 0x09F0(0x00D8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AC8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_DB60E5D0417258BF407281A4EFA0B418;    // 0x0AD0(0x0150)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_46BF958E43308BD407150AB73FDA67E8;// 0x0C20(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DA3721A846C986446C88B1B820A50FCD;// 0x0C68(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_Root_3E144B7846C5F2F47950DDA9A5B5DB83;      // 0x0CA0(0x0048)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_C22BFA20450151D0CB093A811A6D1D18;// 0x0CE8(0x0098)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_57BB85B14C7E7648814926AA5F0F7575;// 0x0D80(0x0098)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0E18(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2336E6F44EBF81F4E38174932AED6EFD;    // 0x0E20(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_7A94A8CB4DA54D0FBA8C97B981FB1CBC;    // 0x0F70(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_94CBF9574C5D1CE97EB906922046226D;    // 0x10C0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F4F528524B0379E35E59EFA1A0773037;    // 0x1210(0x0150)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB;// 0x1360(0x00B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D34588D443DA1A3A519FF3B1DE69C56B;// 0x1410(0x0268)
	class ABP_Motorbike_03_C*                          BikeRef;                                                  // 0x1678(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SteerRoll;                                                // 0x1680(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      BodyRot;                                                  // 0x1684(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AD_Alpha;                                                 // 0x1690(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LastVelocity;                                             // 0x1694(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     EF;                                                       // 0x16A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x16AC(0x0004) MISSED OFFSET
	class ATslMotorbikeVehicle*                        BikeRef4;                                                 // 0x16B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Motorbike_03.ABP_Motorbike_03_C");
		return ptr;
	}


	void TickBikePose();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Motorbike_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
