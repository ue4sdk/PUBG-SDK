#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_687.ABP_Weapon_686_C
// 0x00E8 (0x0658 - 0x0570)
class UABP_Weapon_686_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A47DFADE4A18AFF427E943B541A3A83F;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C54C110B4CDC187CDA087FBEF65AB3DD;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EF6C6E9C497D8198E87F6DB12EA90B42;      // 0x05F8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_687.ABP_Weapon_686_C");
		return ptr;
	}


	void Handle_Reloads();
	void BlueprintInitializeAnimation();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_687(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
