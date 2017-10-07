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

// AnimBlueprintGeneratedClass Buggy_Animation.Buggy_Animation_C
// 0x2768 (0x2FE8 - 0x0880)
class UBuggy_Animation_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_92F4D21746C003A830C2139DA744576E;      // 0x0888(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_56D855CA4CB394D3DE6389B5B299A6FF;// 0x08D0(0x0030)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_5D7D6ABC4154DFDDCFACA4A54BBEF97D;// 0x0900(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8408ABD245ED457322B26AADA8501C17;// 0x0988(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B55E4A814D94F4ED5FFBB292114A45DB;    // 0x09D0(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_90D29CB24F29822503FE098006133CA5;  // 0x0B20(0x0098)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BB8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_DF40571B4AC10D4CF7ABD992F93ACE54;    // 0x0BC0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_38567D2F40F966BA59946183C4A5384D;    // 0x0D10(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D546B86B4C21A2DDCF12F18DB8A07B8D;  // 0x0E60(0x0098)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0EF8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_8ECD606C4F285BDBC75AD79CF14C223C;    // 0x0F00(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_ECBBDD86401ACB8E108835AFE041B5D8;  // 0x1050(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3AFDD5B74C8B4FD834FB5E814F88B9ED;  // 0x10E8(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_FAB5CBBD48D9F314F55D8D97CBF9C512;  // 0x1180(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B25CFBAE44B4F359F6A49E8FAC349881;  // 0x1218(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_09FBA99A4AC01B498C50DF9842DA6B3D;  // 0x12B0(0x0098)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1348(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_6E947E034090B52F62F7E9BA5C43EB2B;    // 0x1350(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_8E1F420349AB820C7B8832B0FDBE8F9E;    // 0x14A0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_E495C5D64E7BA2DE6FB0BCAF43192792;    // 0x15F0(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_59F9293D40F58A366710BEA41EDF437E;  // 0x1740(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_994B73FE4CCD8E15FBC8039B7387F7C7;  // 0x17D8(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5D6055D24DEEDA4EC9A657A04E917E4B;  // 0x1870(0x0098)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1908(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_D47A8CD14DF9F4F0505F57A7BB364638;    // 0x1910(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_43B2EF4A45E3519691399E9AA52E6614;    // 0x1A60(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0FDAD9A84B82B1AD6258D7915EA89F9D;    // 0x1BB0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2775E06C4D7AAA085DA39C9D478AE3AD;    // 0x1D00(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_FB1DA5D5469FBFE1EDBF2E934DFBE132;    // 0x1E50(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_573EBE294F2A95B5FF78F1AA5C6E27C5;    // 0x1FA0(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_0817C5A04C5202946C3379AED930B871;  // 0x20F0(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5E33311E4EDF9C841DE4D699DB0A2F5E;  // 0x2188(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5CE76DB449244ED44B8683B838B5E612;  // 0x2220(0x0098)
	unsigned char                                      UnknownData04[0x8];                                       // 0x22B8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0CA14C214F5C8017B3A2B4A46A1B120B;    // 0x22C0(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7F0A5C1A4C617FABD043F48A82C95408;  // 0x2410(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C6B3499E42A7288AD6DCC5AAD3A88D65;  // 0x24A8(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_1A80BDA2455EE9735FABC18142C5B240;  // 0x2540(0x0098)
	unsigned char                                      UnknownData05[0x8];                                       // 0x25D8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_150B12F2487A6E49EC53A6AF0771D058;    // 0x25E0(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_4C2BA5BD41F52C2F126A50835C43C4B6;  // 0x2730(0x0098)
	unsigned char                                      UnknownData06[0x8];                                       // 0x27C8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_16A6CCB843D7B24F7CB02EBAF0598274;    // 0x27D0(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5BB882544681F57FCD9C848AF3994024;  // 0x2920(0x0098)
	unsigned char                                      UnknownData07[0x8];                                       // 0x29B8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_DC009C29413AF53A660A26A07F2209CB;    // 0x29C0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_279E6E154DE65621B60D38ADBE0C2EC6;    // 0x2B10(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C5472DCF416F97AC4950E9BA276A6AAB;  // 0x2C60(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_A63585AD4F48B5E4E08686AB25CCE0AA;  // 0x2CF8(0x0098)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E34AF524415141E20929AFA9D1ABA4DB;// 0x2D90(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_91EBDE704D07CF5113244082F024DC0D;// 0x2E40(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EDBD6D4749B887DE53739C9812504058;// 0x2EF0(0x00B0)
	float                                              SteeringWheelInput;                                       // 0x2FA0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x2FA4(0x0004) MISSED OFFSET
	class ATslWheeledVehicle*                          VehicleReference;                                         // 0x2FA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheeledVehicleMovement*                  VehicleMovementReference;                                 // 0x2FB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      WheelRotation;                                            // 0x2FB8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x2FC4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RPM;                                                      // 0x2FC8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Velocity;                                                 // 0x2FCC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      RPMArrowRotation;                                         // 0x2FD0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      VelocityArrowRotation;                                    // 0x2FDC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Buggy_Animation.Buggy_Animation_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Buggy_Animation_AnimGraphNode_ModifyBone_91EBDE704D07CF5113244082F024DC0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Buggy_Animation_AnimGraphNode_ModifyBone_E34AF524415141E20929AFA9D1ABA4DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Buggy_Animation_AnimGraphNode_ModifyBone_EDBD6D4749B887DE53739C9812504058();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Buggy_Animation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
