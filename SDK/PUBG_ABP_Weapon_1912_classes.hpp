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

// AnimBlueprintGeneratedClass ABP_Weapon_1912.ABP_Weapon_1911_C
// 0x00F4 (0x0664 - 0x0570)
class UABP_Weapon_1911_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2EF50D4243DAF4C2D298D29B5B91C750;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2A7FCFED47CA720B2E2D1E9A199D1606;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_18D59F0341F8E42F3DBB97B67AB4BB60;      // 0x05F8(0x0060)
	class ATslWeapon_Gun*                              ActorRef;                                                 // 0x0658(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CurrentAmmo;                                              // 0x0660(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_1912.ABP_Weapon_1911_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void ReleaseCatch();
	void ExecuteUbergraph_ABP_Weapon_1912(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
