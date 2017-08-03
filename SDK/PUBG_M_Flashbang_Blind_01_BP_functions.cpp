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

// Function M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AM_Flashbang_Blind_01_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.UserConstructionScript");

	AM_Flashbang_Blind_01_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.АР„З|·xЗ_
// (FUNC_BlueprintEvent)

void AM_Flashbang_Blind_01_BP_C::АР„З|·xЗ_()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.АР„З|·xЗ_");

	AM_Flashbang_Blind_01_BP_C_АР„З|·xЗ__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AM_Flashbang_Blind_01_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.ReceiveBeginPlay");

	AM_Flashbang_Blind_01_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.ExecuteUbergraph_M_Flashbang_Blind_01_BP
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AM_Flashbang_Blind_01_BP_C::ExecuteUbergraph_M_Flashbang_Blind_01_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.ExecuteUbergraph_M_Flashbang_Blind_01_BP");

	AM_Flashbang_Blind_01_BP_C_ExecuteUbergraph_M_Flashbang_Blind_01_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
