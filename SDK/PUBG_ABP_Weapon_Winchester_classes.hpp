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

// AnimBlueprintGeneratedClass ABP_Weapon_Winchester.ABP_Weapon_Winchester_C
// 0x04A0 (0x0A10 - 0x0570)
class UABP_Weapon_Winchester_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_93E7EBDB4960DD00F335008848B03007;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_076F713B47A096F5DDCC9F859D54B0F6;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BB2F9D4B448DEF3C61115FB500631E2A;      // 0x05F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F329328048C8990491D322A517FDCE3B;      // 0x0658(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A1F35721401CF685024630B287234ACD;      // 0x06B8(0x0060)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_53CE8CB94FB47C7196ED449CCE68A8CC;// 0x0718(0x0268)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C1157737474422659875D1AFB5DFC9A9;// 0x0980(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B6EF3522445AC2C951D18A93A50FD627;// 0x09C8(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_Winchester.ABP_Weapon_Winchester_C");
		return ptr;
	}


	void WeaponFireCycle_Event_1();
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void AnimNotify_WinchesterCycle();
	void ReloadByOneStart_Event_1();
	void ReloadByOneEnd_Event_1();
	void ReloadByOneSingle_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Winchester(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
