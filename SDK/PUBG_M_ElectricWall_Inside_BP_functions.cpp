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

// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AM_ElectricWall_Inside_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.UserConstructionScript");

	AM_ElectricWall_Inside_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.АР„З|·xЗ_
// (FUNC_BlueprintEvent)

void AM_ElectricWall_Inside_BP_C::АР„З|·xЗ_()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.АР„З|·xЗ_");

	AM_ElectricWall_Inside_BP_C_АР„З|·xЗ__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AM_ElectricWall_Inside_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ReceiveBeginPlay");

	AM_ElectricWall_Inside_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.Custom Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AM_ElectricWall_Inside_BP_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.Custom Event_1");

	AM_ElectricWall_Inside_BP_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ExecuteUbergraph_M_ElectricWall_Inside_BP
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AM_ElectricWall_Inside_BP_C::ExecuteUbergraph_M_ElectricWall_Inside_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ExecuteUbergraph_M_ElectricWall_Inside_BP");

	AM_ElectricWall_Inside_BP_C_ExecuteUbergraph_M_ElectricWall_Inside_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
