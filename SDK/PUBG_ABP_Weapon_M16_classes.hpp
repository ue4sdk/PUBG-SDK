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

// AnimBlueprintGeneratedClass ABP_Weapon_M16.ABP_Weapon_M16_C
// 0x0560 (0x0AD0 - 0x0570)
class UABP_Weapon_M16_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9A2166F14A69D9096E2A48A22539165E;      // 0x0578(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_961A7465478E10E76629EF9179392F9B;// 0x05C0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_416F423C420824505987FAB4DCFC1DF9;      // 0x05F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6EE339754B8FA2D7D69A41AB7FB6F878;      // 0x0658(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_12E23361415DEDDB3286FFAD050F1404;      // 0x06B8(0x0060)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9E52300C4DD5B4E4E809BEB1FA1F5466;// 0x0718(0x0268)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B97895E14351FB12E43CD99CA7DC8960;// 0x0980(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_474A60DC43DBAF4B1CA262817852DD15;// 0x09C8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A;// 0x0A10(0x00B0)
	float                                              ADSOpticsAlpha;                                           // 0x0AC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslWeapon_Gun*                              Gun;                                                      // 0x0AC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_M16.ABP_Weapon_M16_C");
		return ptr;
	}


	void HandleFireSelector();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event();
	void FireSelect_Event();
	void Reload1_Event();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M16_AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A();
	void Reload2_Event();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_M16(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
