#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C
// 0x006C (0x0884 - 0x0818)
class ABP_Motorbike_04_SideCar_C : public ATslMotorbikeVehicle_Sidecar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0818(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            Sphere2;                                                  // 0x0820(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            SideCarSeat;                                              // 0x0828(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0830(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            passengerseat;                                            // 0x0838(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0840(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            DirverSeat;                                               // 0x0848(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                              // 0x0850(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x0858(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x0860(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x0868(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x0870(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslWheeledVehicleMovement*                  TslMovementRef;                                           // 0x0878(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FuelEfficiency;                                           // 0x0880(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C");
		return ptr;
	}


	void Process_FuelConsumption();
	void InitCache();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8(float AxisValue);
	void InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14(float AxisValue);
	void OnDeath_Event_1(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_Motorbike_04_SideCar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
