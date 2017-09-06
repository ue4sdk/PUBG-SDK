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

// AnimBlueprintGeneratedClass ABP_Weapon_Nagant.ABP_Weapon_Nagant_C
// 0x0148 (0x06B8 - 0x0570)
class UABP_Weapon_Nagant_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_118E696B4DD1317C7E383D883432820A;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_64935F074AD50B9C861D4CBCCF86CCE7;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7F79055E46DA701D10C0279691B51F20;      // 0x05F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B2EEF65146703AB8EC19F39FB0ECDA57;      // 0x0658(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_Nagant.ABP_Weapon_Nagant_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ReloadByOneStart_Event_1();
	void ReloadByOneSingle_Event_1();
	void ReloadByOneEnd_Event_1();
	void WeaponFire_Event_1();
	void AnimNotify_ShellEject();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Nagant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
