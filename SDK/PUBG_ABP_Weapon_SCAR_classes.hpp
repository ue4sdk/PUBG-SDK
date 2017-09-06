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

// AnimBlueprintGeneratedClass ABP_Weapon_SCAR.ABP_Weapon_SCAR_C
// 0x03D8 (0x0948 - 0x0570)
class UABP_Weapon_SCAR_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4AD12C7B4569D13FDBABE5B1B4FC97BF;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_1A8610904952530A3A9840A210AA3969;// 0x05C0(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D3ED925D405286BADE50B2A00548AB77;// 0x05F8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092;// 0x0640(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372;// 0x06F0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_279025EC4221705779C73A9DB0475202;// 0x07A0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D5CE792943A6E2265BCD3688C44B93EB;      // 0x07E8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0350688442D5C010D9B123B442F6FF7D;      // 0x0848(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A094B8004B7F040A4AD36F9850DC51A4;      // 0x08A8(0x0060)
	class ATslWeapon_Gun*                              ActorRef;                                                 // 0x0908(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SightAlpha;                                               // 0x0910(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FWeaponAttachmentAssetData                  SightSlot;                                                // 0x0918(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_SCAR.ABP_Weapon_SCAR_C");
		return ptr;
	}


	void Handle_Fire();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload1_Event_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092();
	void Reload2_Event_1();
	void FireSelect_Event_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_SCAR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
