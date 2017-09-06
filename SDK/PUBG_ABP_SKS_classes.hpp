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

// AnimBlueprintGeneratedClass ABP_SKS.ABP_SKS_C
// 0x0148 (0x06B8 - 0x0570)
class UABP_SKS_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_38064EAB4C53BE339D7EA693436312DD;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E6A97DEA45F9362AC0208497AA2F7EE5;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8BDB36F540720BFF0F716B84187740A5;      // 0x05F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_02C76B9C43DD5A17AE2899A923A0889C;      // 0x0658(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_SKS.ABP_SKS_C");
		return ptr;
	}


	void Reload1_Event_1();
	void Reload2_Event_1();
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_SKS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
