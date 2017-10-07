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

// AnimBlueprintGeneratedClass ABP_Parachute.ABP_Parachute_C
// 0x0AAE (0x0F46 - 0x0498)
class UABP_Parachute_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0B3F323477FE0C51FB4DAB7A5A80380;      // 0x04A0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_08AC8CD648FF07A568A955BBB897ACEA;// 0x04F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AA3C9594065D00D1739DC8C27BE794B;// 0x0570(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC5D260B438B04EEB6692B96E865FB64;// 0x05F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E3F0229406AF5296B72E6A316B804A4;// 0x0670(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EED820DB42FDF921CC76D1B39B46AD4F;// 0x06F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9B1349DB4F8F01A9BCD965996DF63AA5;// 0x0760(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_894DCA734A09B20807ED8BAFAD208153;// 0x07A8(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BBF657E94EC4CE15B4D51B9A95F6EF5E;// 0x07E0(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_CF9DB4CA45BFB70346FCD19CDE83A9A8;// 0x0828(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B8F49E3476248D1CDD9CCB77308F8A5;// 0x0968(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E20A52794C7C69AD78ECACBF7EE1906D;// 0x09D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DD5EDC7421F27A1916B7BA820128999;// 0x0A20(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CAFEF52A44B315E52D54EE856EF31C12;// 0x0A90(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D0D484E947F25BD4E1812288404A0EC9;// 0x0AD8(0x00D8)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_E333C89B4C80143193FB5D92B17093B0;// 0x0BB0(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0D766A7843E2AB511705828BBC45830D;// 0x0C10(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E3B1AAC14CB9129E9FBA02BD934A46EB;// 0x0CC0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EEC6BE1042BF2A7DDFCCEFB87D8C4EC4;// 0x0D08(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2A96571A4D77780AA2C46DA077DCE5AB;// 0x0DB8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38CE55804D1402DCACC18CA00C9A8C3E;// 0x0E00(0x00B0)
	class AParachutePlayer_C*                          RefParachute;                                             // 0x0EB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParachuteVehicleMovement*                   RefParachuteMovement;                                     // 0x0EB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacter*                               CharRef;                                                  // 0x0EC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      ParachuteRotation;                                        // 0x0EC8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParaTurn;                                                 // 0x0ED4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParaPitch;                                                // 0x0ED8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bIsReleased;                                              // 0x0EDC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0EDD(0x0003) MISSED OFFSET
	struct FTransform                                  IK_L;                                                     // 0x0EE0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  IK_R;                                                     // 0x0F10(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              EnableIK;                                                 // 0x0F40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bIsLanding;                                               // 0x0F44(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bMoving;                                                  // 0x0F45(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Parachute.ABP_Parachute_C");
		return ptr;
	}


	void CheckIfLanding();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Parachute_AnimGraphNode_TransitionResult_8E3F0229406AF5296B72E6A316B804A4();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_EnteredLocomotion();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Parachute_AnimGraphNode_ModifyBone_38CE55804D1402DCACC18CA00C9A8C3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Parachute_AnimGraphNode_ModifyBone_EEC6BE1042BF2A7DDFCCEFB87D8C4EC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Parachute_AnimGraphNode_ModifyBone_0D766A7843E2AB511705828BBC45830D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Parachute_AnimGraphNode_TransitionResult_08AC8CD648FF07A568A955BBB897ACEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Parachute_AnimGraphNode_RotationOffsetBlendSpace_CF9DB4CA45BFB70346FCD19CDE83A9A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Parachute_AnimGraphNode_TransitionResult_8AA3C9594065D00D1739DC8C27BE794B();
	void ExecuteUbergraph_ABP_Parachute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
