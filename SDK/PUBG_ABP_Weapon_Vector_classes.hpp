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

// AnimBlueprintGeneratedClass ABP_Weapon_Vector.ABP_Weapon_Vector_C
// 0x00E8 (0x0658 - 0x0570)
class UABP_Weapon_Vector_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_98C7A344460FDE075E400EB28D4544FA;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_114AEB214281FB5156E3FD8767C271ED;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D07B38A14E3F6FAEB9E92897AA81319B;      // 0x05F8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_Vector.ABP_Weapon_Vector_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Vector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
