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

// AnimBlueprintGeneratedClass ABP_Weapon_M9.ABP_Weapon_M9_C
// 0x00F4 (0x0664 - 0x0570)
class UABP_Weapon_M9_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_56C9FADD49B04FBCDE6CD984E2A5A256;      // 0x0578(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9D5757A047E04957841926BC06232689;      // 0x05C0(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_40CDC14245411EC2522D6BA56EC333BF;// 0x0620(0x0038)
	class ATslWeapon_Gun*                              ActorRef;                                                 // 0x0658(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CurrentAmmo;                                              // 0x0660(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_M9.ABP_Weapon_M9_C");
		return ptr;
	}


	void SlideReleaseFunc();
	void Handle_SlideRelease();
	void Handle_Fire();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload2_Event_1();
	void ExecuteUbergraph_ABP_Weapon_M9(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
