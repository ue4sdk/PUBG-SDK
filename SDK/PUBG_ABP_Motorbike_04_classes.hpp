#pragma once

// PlayerUnknown's Battlegrounds (2.6.30.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Motorbike_04.ABP_Motorbike_04_C
// 0x0C10 (0x1490 - 0x0880)
class UABP_Motorbike_04_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0888(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F00FC4C24636CADC679B928D5B9A84A6;    // 0x0890(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_402AEAFD4E6DB56509518CB5795AE5E0;  // 0x09E0(0x0098)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_0BEAFB29451FA2C201CD61AB66CF8299;// 0x0A78(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_092BCD484F9E5313D7E30F9187109EA6;// 0x0B00(0x0048)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_C7362C584E9400D160AAEC8DEF2533A0;// 0x0B48(0x0098)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B1CDBBAF47E81EF35463A3848A511397;    // 0x0BE0(0x0150)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_D02F00684CEE7A4CD0F9A798D29C4910;    // 0x0D30(0x0150)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9F701C04470A614EEC5C1FAC4E0CCB77;// 0x0E80(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0EC8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_031AA7C3435B259672D3279788710F6F;    // 0x0ED0(0x0150)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F;// 0x1020(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_BD8986A34F38F3A1CFEFA18858ADC0FF;// 0x10D0(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32;// 0x1108(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0044730847460FF75230C89BEE4A003E;// 0x11B8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2;// 0x1268(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_ECE4182141B32CBF7FF61BB72BD23154;      // 0x1318(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5;// 0x1360(0x00B0)
	class ABP_Motorbike_03_C*                          BikeRef;                                                  // 0x1410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SteerRoll;                                                // 0x1418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      BodyRot;                                                  // 0x141C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AD_Alpha;                                                 // 0x1428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LastVelocity;                                             // 0x142C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     EF;                                                       // 0x1438(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1444(0x0004) MISSED OFFSET
	class ATslMotorbikeVehicle*                        BikeRef4;                                                 // 0x1448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      KickStandRot;                                             // 0x1450(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickStandCurrentRot;                                      // 0x145C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxDrop;                                                  // 0x1460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxRaise;                                                 // 0x1464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FrontSusp_Offset;                                         // 0x1468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FrontSusp_Speed;                                          // 0x146C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BackSusp_Offset;                                          // 0x1470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BackSusp_Speed;                                           // 0x1474(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SteerROT;                                                 // 0x1478(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SpeedArrowRot;                                            // 0x1484(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Motorbike_04.ABP_Motorbike_04_C");
		return ptr;
	}


	void TickSteer();
	void TickBackSuspension();
	void TickFrontSuspension();
	void TickBikePose();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_AnimGraphNode_ModifyBone_0044730847460FF75230C89BEE4A003E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Motorbike_04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
