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

// AnimBlueprintGeneratedClass ABP_Weapon_HK416.ABP_Weapon_HK416_C
// 0x01A8 (0x0718 - 0x0570)
class UABP_Weapon_HK416_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0D1F0558453F079CC6BB0298BABED874;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_456D5618470478F75380C497E73636AF;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_57145B474E8AD73A19B236B868A9AFAA;      // 0x05F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E3F96AF34B67CA1B27A0BAA573C598AC;      // 0x0658(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_02A6DA194BCCFBC1661D11B82CFCEA73;      // 0x06B8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_HK416.ABP_Weapon_HK416_C");
		return ptr;
	}


	void FireSelect_Event();
	void Reload1_Event();
	void WeaponFire_Event();
	void BlueprintInitializeAnimation();
	void Reload2_Event();
	void CancelReload_Event_1();
	void CustomEvent();
	void ExecuteUbergraph_ABP_Weapon_HK416(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
