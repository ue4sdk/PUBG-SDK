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

// AnimBlueprintGeneratedClass ABP_Weapon_AWM.ABP_Weapon_AWM_C
// 0x0148 (0x06B8 - 0x0570)
class UABP_Weapon_AWM_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DA84770D436DDB504BF3E891A1059B6E;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E2355FBD4321F4BAE1FA299A01A71A7A;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DAC6FD464933B2FB85CD9AB9D62E4291;      // 0x05F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_04E0B42049BC25E811C0AFABC6E199F1;      // 0x0658(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_AWM.ABP_Weapon_AWM_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFireCycle_Event_1();
	void Reload1_Event_1();
	void AnimNotify_ShellEject();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_AWM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
