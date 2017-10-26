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

// Function VehicleSeatBase.VehicleSeatBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleSeatBase_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd5125174);

	AVehicleSeatBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatBase.VehicleSeatBase_C.BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleSeatBase_C::BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature(class ATslCharacter* OtherCharacter)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x19dbee10);

	AVehicleSeatBase_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature_Params params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatBase.VehicleSeatBase_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AVehicleSeatBase_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x59ea61ab);

	AVehicleSeatBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatBase.VehicleSeatBase_C.ExecuteUbergraph_VehicleSeatBase
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleSeatBase_C::ExecuteUbergraph_VehicleSeatBase(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xda3faefd);

	AVehicleSeatBase_C_ExecuteUbergraph_VehicleSeatBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
