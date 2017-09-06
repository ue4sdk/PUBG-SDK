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

// AnimBlueprintGeneratedClass ABP_VSS.ABP_VSS_C
// 0x01A8 (0x0718 - 0x0570)
class UABP_VSS_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C8B0685147A263F4A5215DBBFD57A967;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_226780A0402D75AB09F031B1EDDEE61B;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3C0F8E34484B65C62A620CA3D326C99A;      // 0x05F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EC31424B4D7DF1B6741334AF329C0B34;      // 0x0658(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B7CE6D78403DB3F2B1070793C7963047;      // 0x06B8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_VSS.ABP_VSS_C");
		return ptr;
	}


	void HandleFireSelect();
	void BlueprintInitializeAnimation();
	void Reload2_Event_1();
	void FireSelect_Event_1();
	void WeaponFire_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_VSS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
