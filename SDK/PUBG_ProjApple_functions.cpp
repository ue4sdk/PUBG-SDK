// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjApple.ProjApple_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AProjApple_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjApple.ProjApple_C.UserConstructionScript");

	AProjApple_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjApple.ProjApple_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjApple_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjApple.ProjApple_C.ReceiveTick");

	AProjApple_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjApple.ProjApple_C.OnTakeAnyDamage_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjApple_C::OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjApple.ProjApple_C.OnTakeAnyDamage_Event");

	AProjApple_C_OnTakeAnyDamage_Event_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjApple.ProjApple_C.ExecuteUbergraph_ProjApple
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AProjApple_C::ExecuteUbergraph_ProjApple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjApple.ProjApple_C.ExecuteUbergraph_ProjApple");

	AProjApple_C_ExecuteUbergraph_ProjApple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
