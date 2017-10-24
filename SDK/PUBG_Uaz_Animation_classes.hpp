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

// AnimBlueprintGeneratedClass Uaz_Animation.Uaz_Animation_C
// 0x1600 (0x1E80 - 0x0880)
class UUaz_Animation_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F0D8C80D499C3C446BC5DDBBE8F2D24F;  // 0x0888(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9C24B60A458DB325D201F78C8F4E9C96;  // 0x0920(0x0098)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09B8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_75C94E354CE068DCECAA44A4D125A181;    // 0x09C0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2A000F00443F102269634D863DAB5E06;    // 0x0B10(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C57FD0514765F2676DC18F91F14FB8E7;  // 0x0C60(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B4551679490AD5289EA7FFAA5A59117E;  // 0x0CF8(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_957AA8434442AE766C901580EC1D5710;  // 0x0D90(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2E34B1BD4ADADCD4BF3218B9BB4CF6A5;  // 0x0E28(0x0098)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_64E9C1FA4FE37801F6F797B4C01ED3F5;    // 0x0EC0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_E17EE4A84BB55EEB76BB4CA6455AB8AF;    // 0x1010(0x0150)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9CD776AB4A479F09FBB16C923963C85F;// 0x1160(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_D2192E41428C7552482D97A285E11319;// 0x11A8(0x0088)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_E8FAC06B4DF89CEE5400BE810C438130;// 0x1230(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_B4F664F64FC75A1910BBDD8B96AAA321;      // 0x1260(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x12A8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_962DFD0F4AAC68F03548CDA57764C3FF;    // 0x12B0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_8B35A8E4465C40875C475E9E4BF8217E;    // 0x1400(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_7073ADDA4345EC10597A61A67196E302;    // 0x1550(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1DD008EE4C511FD4FA2E4C9FB25C5097;    // 0x16A0(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6208E72B42E821C51E42659D38338867;  // 0x17F0(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_AE9F5DC640C244848D14D5977003B137;  // 0x1888(0x0098)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_918437FC4ED0E72B021D9695D1BB5153;    // 0x1920(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_43B74917442C7B26B8A8969C0B6BF62C;    // 0x1A70(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B0FCAFAD4B0AED9973A4678E8CE904F6;  // 0x1BC0(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5C0A932E47B41D23833F97A83082F4F0;  // 0x1C58(0x0098)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_92CE5E20435206E5C4125B81AE2D5E5E;// 0x1CF0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F45EEFEE4F1F650FBF78D1ACCB01BDDE;// 0x1DA0(0x00B0)
	float                                              SteeringWheelAngle;                                       // 0x1E50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1E54(0x0004) MISSED OFFSET
	class ATslWheeledVehicle*                          VehicleReference;                                         // 0x1E58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheeledVehicleMovement*                  VehicleMovementReference;                                 // 0x1E60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SteeringWheelRotation;                                    // 0x1E68(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      VelocityNeedleRot;                                        // 0x1E74(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Uaz_Animation.Uaz_Animation_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_F45EEFEE4F1F650FBF78D1ACCB01BDDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Uaz_Animation_AnimGraphNode_ModifyBone_92CE5E20435206E5C4125B81AE2D5E5E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Uaz_Animation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
