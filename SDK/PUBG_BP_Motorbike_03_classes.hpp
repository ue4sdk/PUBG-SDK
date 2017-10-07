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

// BlueprintGeneratedClass BP_Motorbike_03.BP_Motorbike_03_C
// 0x00C4 (0x0794 - 0x06D0)
class ABP_Motorbike_03_C : public ATslWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x06D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x06E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x06E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x06F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x06F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              COM_Offset_Steer;                                         // 0x0700(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              COM_Offset_Yaw;                                           // 0x0704(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              COM_Offset_Roll;                                          // 0x0708(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              COM_Boost;                                                // 0x070C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 RollCurve;                                                // 0x0710(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 ReturnClampCurve;                                         // 0x0718(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 SteerCurve;                                               // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 YawCurve;                                                 // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 TorqueStabilizeCurve;                                     // 0x0730(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bHasContact;                                              // 0x0738(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0739(0x0003) MISSED OFFSET
	float                                              GameTime;                                                 // 0x073C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABP_CameraMan_C*                             CameraManRef;                                             // 0x0740(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AIrControl_F;                                             // 0x0748(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AIrControl_R;                                             // 0x074C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bHasSideCart;                                             // 0x0750(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	class UCurveFloat*                                 RollCurve_Cart;                                           // 0x0758(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 ReturnClampCurve_Cart;                                    // 0x0760(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 SteerCurve_Cart;                                          // 0x0768(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 YawCurve_Cart;                                            // 0x0770(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 TorqueStabilizeCurve_Cart;                                // 0x0778(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 EngineAudioCurve;                                         // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheeledVehicleMovement*                  TslMovementRef;                                           // 0x0788(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FuelEfficiency;                                           // 0x0790(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Motorbike_03.BP_Motorbike_03_C");
		return ptr;
	}


	void Init_Cache();
	void Process_FuelConsumption();
	void Process_Audio();
	void Process_Boost();
	void StabilizeMotorbikeSidecart();
	void StablizeMotorbike();
	void Process_Camera();
	void Process_AirControl();
	void Process_Eject();
	void Process_Contact();
	void Process_Stabilize();
	void UserConstructionScript();
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_32(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_31(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_30(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_Decimal_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_PeekLeft_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_PeekLeft_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_PeekRight_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_PeekRight_K2Node_InputActionEvent_5(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Motorbike_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
