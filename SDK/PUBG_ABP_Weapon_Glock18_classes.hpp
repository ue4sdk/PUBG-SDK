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

// AnimBlueprintGeneratedClass ABP_Weapon_Glock18.ABP_Weapon_Glock18_C
// 0x0154 (0x06C4 - 0x0570)
class UABP_Weapon_Glock18_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B29CC6C845D4665FCBD2358A11CC8C0F;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CF0013C642186ADF940B94B85CFDCC4B;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_65C61014433D6E1673D9DDAAFF2ACEA3;      // 0x05F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_467A635F49F9A3D4D29598885FE57EA1;      // 0x0658(0x0060)
	class ATslWeapon_Gun*                              ActorRef;                                                 // 0x06B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CurrentAmmo;                                              // 0x06C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_Glock18.ABP_Weapon_Glock18_C");
		return ptr;
	}


	void Handle_FireSelector();
	void Handle_Fire();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void WeaponFire_Event_1();
	void Reload2_Event_1();
	void BlueprintInitializeAnimation();
	void FireSelect_Event();
	void SlideRelease();
	void ExecuteUbergraph_ABP_Weapon_Glock18(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
