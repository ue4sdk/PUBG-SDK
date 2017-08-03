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

// AnimBlueprintGeneratedClass ABP_Weapon_M249.ABP_Weapon_M249_C
// 0x1144 (0x16B4 - 0x0570)
class UABP_Weapon_M249_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E79AD1E9480E45515F3EA5BFA2C0DFB7;// 0x0578(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4C1681F04624DD0743D6EFB320086E4B;// 0x05C0(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426;// 0x0608(0x0268)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B474717E413E400740EF97BAB6D27BA4;      // 0x0870(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D7A0D3D745B9B9C51273C89558281947;      // 0x08D0(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F3050D514A8EB7D75797A8BC7BD0520F;// 0x0930(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_Root_282783FF4DB0383D9A1B858DA78AE9AF;      // 0x0968(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3;// 0x09B0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F;// 0x0A60(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8;// 0x0B10(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9;// 0x0BC0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F;// 0x0C70(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8;// 0x0D20(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796;// 0x0DD0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7;// 0x0E80(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E;// 0x0F30(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4;// 0x0FE0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161;// 0x1090(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF;// 0x1140(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1;// 0x11F0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B;// 0x12A0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3;// 0x1350(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578;// 0x1400(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A;// 0x14B0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563;// 0x1560(0x00B0)
	class Vector3D                                     EF;                                                       // 0x1610(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha;                                                    // 0x161C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_2;                                                // 0x1620(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_3;                                                // 0x1624(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_4;                                                // 0x1628(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_5;                                                // 0x162C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_6;                                                // 0x1630(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_7;                                                // 0x1634(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_8;                                                // 0x1638(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_9;                                                // 0x163C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_10;                                               // 0x1640(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_11;                                               // 0x1644(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_12;                                               // 0x1648(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_13;                                               // 0x164C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_14;                                               // 0x1650(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_15;                                               // 0x1654(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Alpha_B_16;                                               // 0x1658(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CurrentBulletCount;                                       // 0x165C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslWeapon_Gun*                              GunRef;                                                   // 0x1660(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacter*                               CharRef;                                                  // 0x1668(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FollowLHandAlpha;                                         // 0x1670(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x1674(0x000C) MISSED OFFSET
	struct FTransform                                  ItemLPosition;                                            // 0x1680(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BipodAlpha;                                               // 0x16B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_M249.ABP_Weapon_M249_C");
		return ptr;
	}


	void Handle_Bipod();
	void Handle_Reloads();
	void EvaluateAmmo_Total();
	void EvaluateAmmo();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void WeaponCharge_Event_1();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void AnimNotify_HideAmmo();
	void AnimNotify_ShowAmmo();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_M249(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
