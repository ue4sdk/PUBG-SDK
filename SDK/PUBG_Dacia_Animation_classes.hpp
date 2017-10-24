#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Dacia_Animation.Dacia_Animation_C
// 0x17CC (0x204C - 0x0880)
class UDacia_Animation_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_06BCC8CF44B3168075C84E85BC8BCF71;      // 0x0888(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_0B27B74D43D74028095AEEBD881E4B14;// 0x08D0(0x0030)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_9297B40241D986019BB165B1E32949FA;// 0x0900(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D0A17E7B4BF063CEC6A58A82292E63EF;// 0x0988(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E97AA95F40D726DEE64B35A265609327;  // 0x09D0(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_BA29D06343D5BA13492264A1596DCFA2;  // 0x0A68(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E91314294B6E450445E6AEB6494BE28C;  // 0x0B00(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_13CBDB23416E8282F8E57883A63F78B9;  // 0x0B98(0x0098)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9D0F21AF450BA6E5C01EB9B2BF221781;    // 0x0C30(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_DF43DAC844EB8A6E9E870FB49FCE70D1;    // 0x0D80(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_05ECFCF54402D511885173830DA350CE;  // 0x0ED0(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_BB79D23D45E53CB2B705208459A0AF08;  // 0x0F68(0x0098)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B69317E14095B3EB17B6108E889BF9C1;    // 0x1000(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_AE31807C4EEBBC8B475294AC0624B6D4;  // 0x1150(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E7D5E1854092C005E9B39E832F359E6E;  // 0x11E8(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_8467D3994E2BE7D191EC14B7DFF75860;  // 0x1280(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_811FA1D0436A0B3352459282B5D212C8;  // 0x1318(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9E5784A549DD28C5E92497A096EDEB0E;  // 0x13B0(0x0098)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1448(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9FFD8F1D4B6299EF7EE7D28110AD98A3;    // 0x1450(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_0564073840225D456D8A7E9F5C0E385E;  // 0x15A0(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_87BD4A244012C9A164941991339D10E4;  // 0x1638(0x0098)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_D14EB4DC4EF67F460DA1378FAAC4B5C8;    // 0x16D0(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E7B9EC854FDA865EAA090E9690FBC10B;  // 0x1820(0x0098)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8B502CF54ED760CF23396D8775CD4D7E;// 0x18B8(0x00B0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1968(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_D6DFCDAD402282D761B13C9B98AD90B5;    // 0x1970(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_60C9A89844C6C6AEDF27B59739EFB1BA;    // 0x1AC0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_DCDED3374F07FEDB63474FB2D7C4C0BA;    // 0x1C10(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_50307F6A4055FF7F0402B6A574FB0692;    // 0x1D60(0x0150)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_719092E14E4BB5CA865A9189AABCA18D;// 0x1EB0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8AADA72D4702CF0AC25A53A719905896;// 0x1F60(0x00B0)
	float                                              SteeringWheelAngle;                                       // 0x2010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2014(0x0004) MISSED OFFSET
	class ATslWheeledVehicle*                          VehicleReference;                                         // 0x2018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheeledVehicleMovement*                  VehicleMovementReference;                                 // 0x2020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      WheelRotation;                                            // 0x2028(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SpeedNeedleRot;                                           // 0x2034(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      RPMNeedleRot;                                             // 0x2040(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dacia_Animation.Dacia_Animation_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dacia_Animation_AnimGraphNode_ModifyBone_719092E14E4BB5CA865A9189AABCA18D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dacia_Animation_AnimGraphNode_ModifyBone_8AADA72D4702CF0AC25A53A719905896();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dacia_Animation_AnimGraphNode_ModifyBone_8B502CF54ED760CF23396D8775CD4D7E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Dacia_Animation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
