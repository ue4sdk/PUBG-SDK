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

// AnimBlueprintGeneratedClass ABP_Weapon_AKM.ABP_Weapon_AKM_C
// 0x01E0 (0x0750 - 0x0570)
class UABP_Weapon_AKM_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_489B676F4A0C867072AB5F83AA66C693;      // 0x0578(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E34D8DAB4A80EA0079503BAC4F3BAF83;      // 0x05C0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A423A5AB41ED0E3ED8D9908468747A7D;      // 0x0620(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21253C0242CB1954A3B37A993284F110;      // 0x0680(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DDC357794F1715B261F02582FCCF5133;// 0x06E0(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_AKM.ABP_Weapon_AKM_C");
		return ptr;
	}


	void HandleReloadCharge();
	void HandleReloadTactical();
	void HandleFireSelector();
	void FireSelect_Event();
	void Reload1_Event();
	void WeaponFire_Event();
	void BlueprintInitializeAnimation();
	void Reload2_Event();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_AKM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
