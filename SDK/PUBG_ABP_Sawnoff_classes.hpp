#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Sawnoff.ABP_Sawnoff_C
// 0x034C (0x079C - 0x0450)
class UABP_Sawnoff_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_095A647040B9A89DF7BCE9969CBB8A11;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_45B0E127491AC2C223DAFD9A712B4CF7;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CB5234E44CBD81AEE15AF5BB6D9F83FA;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2D86CBBC48F76A4EDC750291CC6B63C7;      // 0x0538(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_191746AD49F18512D94F0287AC301A62;// 0x0598(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D44C21114361B6E26516D0A7EC04F835;// 0x0650(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B3E3F0A54C8C1FFF6366ADA4819F668A;// 0x0698(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4FEF57104CA4C34AC6C9DBA006D58FC9;// 0x0750(0x0048)
	float                                              ShellAlpha;                                               // 0x0798(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x55b13210);
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sawnoff_AnimGraphNode_ModifyBone_B3E3F0A54C8C1FFF6366ADA4819F668A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sawnoff_AnimGraphNode_ModifyBone_191746AD49F18512D94F0287AC301A62();
	void BlueprintInitializeAnimation();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void WeaponFire_Event_1();
	void AnimNotify_ShellEject();
	void AnimNotify_ShellShow();
	void ExecuteUbergraph_ABP_Sawnoff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
