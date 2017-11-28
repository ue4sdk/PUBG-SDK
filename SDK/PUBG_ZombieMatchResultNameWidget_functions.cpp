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

// Function ZombieMatchResultNameWidget.ZombieMatchResultNameWidget_C.UpdatePlayerMatchResultInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslPlayerMatchResultInfo TslPlayerMatchResultInfo       (CPF_Parm)
// bool                           IsFirst                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZombieMatchResultNameWidget_C::UpdatePlayerMatchResultInfo(const struct FTslPlayerMatchResultInfo& TslPlayerMatchResultInfo, bool IsFirst)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb7cd645);

	UZombieMatchResultNameWidget_C_UpdatePlayerMatchResultInfo_Params params;
	params.TslPlayerMatchResultInfo = TslPlayerMatchResultInfo;
	params.IsFirst = IsFirst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
