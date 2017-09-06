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

// AnimBlueprintGeneratedClass ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C
// 0x02E8 (0x0858 - 0x0570)
class UABP_Weapon_Tommygun_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E1330F114B6273112FBFCCA3CF801DB8;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5A0408504D3C9CFC9A5A0FA3D4B5D2FA;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CE5F258241DE467A1F8C2A8AB1F1FFDA;      // 0x05F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2E773F1E4B88DAC7F0FD8583B721A454;      // 0x0658(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C0E7A8E040524F9C35BAE79101B95BC6;      // 0x06B8(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2CD842B64469008B98DE9891AE4EC734;// 0x0718(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_06C2E8684042894A8A89EEB07BD1CD4E;// 0x07C8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7F1DC3354BF0791B5960F5927FF1742A;// 0x0810(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void FireSelect_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Tommygun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
