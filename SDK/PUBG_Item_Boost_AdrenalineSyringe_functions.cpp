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

// Function Item_Boost_AdrenalineSyringe.Item_Boost_AdrenalineSyringe_C.BoostGaugeUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItem_Boost_AdrenalineSyringe_C::BoostGaugeUp()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x49f5fefe);

	UItem_Boost_AdrenalineSyringe_C_BoostGaugeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Boost_AdrenalineSyringe.Item_Boost_AdrenalineSyringe_C.IsCastable
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATslCharacter**          Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem_Boost_AdrenalineSyringe_C::IsCastable(class ATslCharacter** Character)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xecae9b8e);

	UItem_Boost_AdrenalineSyringe_C_IsCastable_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Item_Boost_AdrenalineSyringe.Item_Boost_AdrenalineSyringe_C.PrintCastingTime
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItem_Boost_AdrenalineSyringe_C::PrintCastingTime()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa6c22580);

	UItem_Boost_AdrenalineSyringe_C_PrintCastingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Boost_AdrenalineSyringe.Item_Boost_AdrenalineSyringe_C.UseBy
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter**          Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem_Boost_AdrenalineSyringe_C::UseBy(class ATslCharacter** Character)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x70dcc90b);

	UItem_Boost_AdrenalineSyringe_C_UseBy_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
