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

// AnimBlueprintGeneratedClass ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C
// 0x0FD4 (0x1854 - 0x0880)
class UABP_Motorbike_04_Sidecar_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2BA4401C41D527D1F4CA91ADBD401744;// 0x0888(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_B556C8A74DF35714EC73A0AEB2DAF39E;// 0x08D0(0x0088)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9166E0364609E50181537F8E86FF203A;  // 0x0958(0x0098)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_C27266324C748685DB45609450C7CE3A;// 0x09F0(0x00D8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AC8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4F2C49264CDF2244866894951259AFDB;    // 0x0AD0(0x0150)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_16772EBB4ACFCAE04DC700A076B12F9C;// 0x0C20(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8E69C072408CE2D4338C4B9119E00D1B;// 0x0C68(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_Root_8147BAF045DB84D345FD03BBC900FE1B;      // 0x0CA0(0x0048)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_D6CFEEB54630C0F0D56941A10EDAAA0D;// 0x0CE8(0x0098)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_98F0D58B42CC1DAF929BDD82BA4950AF;// 0x0D80(0x0098)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0E18(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1AB4EC01420DFCD79756C1B61AE240E0;    // 0x0E20(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9F1CBCD349EB66B7C3F4F9AE67AF519D;    // 0x0F70(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_340FA171423B264747775F974A9976B1;    // 0x10C0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A8C83AB74934A68683310F8988B0A65F;    // 0x1210(0x0150)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191;// 0x1360(0x00B0)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_35273B904539F81233C7E6B844278DC8;// 0x1410(0x0098)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B683B53447BEBD52795000ADA3078837;// 0x14A8(0x00D8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_AB2B241D412579B32716889387C4E029;    // 0x1580(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A2C074A84022463F56261985AF0370D8;    // 0x16D0(0x0150)
	class ATslMotorbikeVehicle*                        BikeRef;                                                  // 0x1820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SteerRoll;                                                // 0x1828(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      BodyRot;                                                  // 0x182C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AD_Alpha;                                                 // 0x1838(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LastVelocity;                                             // 0x183C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     EF;                                                       // 0x1848(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C");
		return ptr;
	}


	void TickBikePose();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Motorbike_04_Sidecar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
