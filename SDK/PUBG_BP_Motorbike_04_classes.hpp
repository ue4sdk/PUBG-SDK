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

// BlueprintGeneratedClass BP_Motorbike_04.BP_Motorbike_04_C
// 0x00EC (0x0954 - 0x0868)
class ABP_Motorbike_04_C : public ATslMotorbikeVehicle_Standalone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0868(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            Sphere1;                                                  // 0x0870(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            PassengerSeat;                                            // 0x0878(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0880(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            DriverSeat;                                               // 0x0888(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                              // 0x0890(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x0898(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x08A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x08B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x08B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              COM_Offset_Steer;                                         // 0x08C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              COM_Offset_Yaw;                                           // 0x08C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              COM_Offset_Roll;                                          // 0x08C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              COM_Boost;                                                // 0x08CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 RollCurve;                                                // 0x08D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 ReturnClampCurve;                                         // 0x08D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 SteerCurve;                                               // 0x08E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 YawCurve;                                                 // 0x08E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 TorqueStabilizeCurve;                                     // 0x08F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bHasContact;                                              // 0x08F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08F9(0x0003) MISSED OFFSET
	float                                              GameTime;                                                 // 0x08FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABP_CameraMan_C*                             CameraManRef;                                             // 0x0900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AIrControl_F;                                             // 0x0908(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AIrControl_R;                                             // 0x090C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bHasSideCart;                                             // 0x0910(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0911(0x0007) MISSED OFFSET
	class UCurveFloat*                                 RollCurve_Cart;                                           // 0x0918(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 ReturnClampCurve_Cart;                                    // 0x0920(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 SteerCurve_Cart;                                          // 0x0928(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 YawCurve_Cart;                                            // 0x0930(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 TorqueStabilizeCurve_Cart;                                // 0x0938(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 EngineAudioCurve;                                         // 0x0940(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheeledVehicleMovement*                  TslMovementRef;                                           // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FuelEfficiency;                                           // 0x0950(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Motorbike_04.BP_Motorbike_04_C");
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
	void InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8(float AxisValue);
	void InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14(float AxisValue);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnDeath_Event_1(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_Motorbike_04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
