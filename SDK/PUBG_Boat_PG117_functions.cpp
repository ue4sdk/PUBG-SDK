// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Boat_PG117.Boat_PG117_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABoat_PG117_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbe57ee66);

	ABoat_PG117_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Boat_PG117.Boat_PG117_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Rider                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UVehicleSeatInteractionComponent* Seat                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABoat_PG117_C::BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1804339a);

	ABoat_PG117_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature_Params params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Boat_PG117.Boat_PG117_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Rider                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UVehicleSeatInteractionComponent* Seat                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABoat_PG117_C::BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5067f862);

	ABoat_PG117_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature_Params params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Boat_PG117.Boat_PG117_C.ExecuteUbergraph_Boat_PG117
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABoat_PG117_C::ExecuteUbergraph_Boat_PG117(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x96a1514e);

	ABoat_PG117_C_ExecuteUbergraph_Boat_PG117_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
