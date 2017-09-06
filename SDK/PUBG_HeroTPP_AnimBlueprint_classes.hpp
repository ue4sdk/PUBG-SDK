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

// AnimBlueprintGeneratedClass HeroTPP_AnimBlueprint.HeroTPP_AnimBlueprint_C
// 0x0E51 (0x12E9 - 0x0498)
class UHeroTPP_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4C73D6DD401647CE102F4FBE01AEE78F;// 0x04A0(0x0120)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0AC26F0B4CC6CCA429104BB274F12F91;// 0x05C0(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21942667435BBDDD052519B9DCD7274C;      // 0x0638(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8DB866744FE5A7E6C429F5A1352751B9;// 0x0698(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_24379C8A4FBF897C93EBDEA84F725A82;      // 0x0738(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_85A3257B4F827D8957DBAE86298410E0;// 0x0798(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D793DFB74D93772501EC4DACA16DA5E4;// 0x0840(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E13F3F6446E227F74E3FDCA93BB8A4A1;// 0x0890(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_Root_E6640FC340691BCBAFFD0298A55D0114;      // 0x08E0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0928(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_96CA1AF34491F67D7B55BCB7222AB2D6;// 0x0930(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92174B044AA959FBD0A00397BE0648F9;// 0x09B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C5A88D14987F964D888D88152ACB029;// 0x0A30(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7F0836F46C360751AE6BC95922DEC11;// 0x0AB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0828DD204E1B5342B4D79D8974799634;// 0x0B30(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9BFD3586442ADC1D096683B1AB3786F3;// 0x0BB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2C883E9C42B867B2498D799B0A738D11;// 0x0C30(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2321A9F84E5D11B5A25F98953F512310;// 0x0CB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E8856104CB81EEB6DC9AABE3DA264C8;// 0x0D30(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E84C912441A69B404FBEF1BC75A57D17;// 0x0DB0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_744BFEE64C0448DD9BAB1F996984347C;// 0x0E20(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_36DA04A44F4D593ADD60BCAA7165BB8A;// 0x0E68(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7138FBEA436E34239C3384B5936428AA;// 0x0F88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D3555AD41A486246A4C07832CC087D7;// 0x0FD0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DBE1ADF4923D024B86AE08325296906;// 0x1040(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2D940174CC8A5A47D92A08A238BE65D;// 0x1088(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A25A0384C19B1C580AF59AC04BE585C;// 0x10F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A365AB124597A5A9C8A3E7B3AB1EA13D;// 0x1140(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9F746EEB492D377B1540429933FC03F3;// 0x11B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0AED32E04B7E1DD320107F9ED1A655A6;// 0x11F8(0x00D8)
	float                                              AimPitch;                                                 // 0x12D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimYaw;                                                   // 0x12D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Speed;                                                    // 0x12D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Direction;                                                // 0x12DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsJumping : 1;                                            // 0x12E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              JumpTime;                                                 // 0x12E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsRunning : 1;                                            // 0x12E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HeroTPP_AnimBlueprint.HeroTPP_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_2C883E9C42B867B2498D799B0A738D11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_2321A9F84E5D11B5A25F98953F512310();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_0C5A88D14987F964D888D88152ACB029();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_3E8856104CB81EEB6DC9AABE3DA264C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_36DA04A44F4D593ADD60BCAA7165BB8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_9BFD3586442ADC1D096683B1AB3786F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_92174B044AA959FBD0A00397BE0648F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_0828DD204E1B5342B4D79D8974799634();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_96CA1AF34491F67D7B55BCB7222AB2D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_4C73D6DD401647CE102F4FBE01AEE78F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_D7F0836F46C360751AE6BC95922DEC11();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_HeroTPP_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
