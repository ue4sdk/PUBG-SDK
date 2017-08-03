// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_PoisonDamage.Service_PoisonDamage_C.TakeDamageToCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SafetyRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 SafetyPosition                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UService_PoisonDamage_C::TakeDamageToCharacter(class ATslCharacter* Character, float SafetyRadius, const class Vector3D& SafetyPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_PoisonDamage.Service_PoisonDamage_C.TakeDamageToCharacter");

	UService_PoisonDamage_C_TakeDamageToCharacter_Params params;
	params.Character = Character;
	params.SafetyRadius = SafetyRadius;
	params.SafetyPosition = SafetyPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_PoisonDamage.Service_PoisonDamage_C.EverySecond
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UService_PoisonDamage_C::EverySecond()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_PoisonDamage.Service_PoisonDamage_C.EverySecond");

	UService_PoisonDamage_C_EverySecond_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_PoisonDamage.Service_PoisonDamage_C.ReceiveActivation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UService_PoisonDamage_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_PoisonDamage.Service_PoisonDamage_C.ReceiveActivation");

	UService_PoisonDamage_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_PoisonDamage.Service_PoisonDamage_C.ExecuteUbergraph_Service_PoisonDamage
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UService_PoisonDamage_C::ExecuteUbergraph_Service_PoisonDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_PoisonDamage.Service_PoisonDamage_C.ExecuteUbergraph_Service_PoisonDamage");

	UService_PoisonDamage_C_ExecuteUbergraph_Service_PoisonDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
