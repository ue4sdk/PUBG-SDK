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

// Function ZombieGroupWidget.ZombieGroupWidget_C.CreateObserverMatchResultInfoWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZombieGroupWidget_C::CreateObserverMatchResultInfoWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3a70f8bb);

	UZombieGroupWidget_C_CreateObserverMatchResultInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZombieGroupWidget.ZombieGroupWidget_C.AddPlayerMatchResultInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslPlayerMatchResultInfo TslPlayerMatchResultInfo       (CPF_Parm)

void UZombieGroupWidget_C::AddPlayerMatchResultInfo(const struct FTslPlayerMatchResultInfo& TslPlayerMatchResultInfo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x797d7f5);

	UZombieGroupWidget_C_AddPlayerMatchResultInfo_Params params;
	params.TslPlayerMatchResultInfo = TslPlayerMatchResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
