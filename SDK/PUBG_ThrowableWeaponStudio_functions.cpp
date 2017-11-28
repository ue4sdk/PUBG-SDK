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

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.OnLoaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThrowableWeaponStudio_C::OnLoaded()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x333826df);

	AThrowableWeaponStudio_C_OnLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThrowableWeaponStudio_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6f5ed090);

	AThrowableWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.SetItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AThrowableWeaponStudio_C::SetItem(class UItem** Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb4650b94);

	AThrowableWeaponStudio_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.ExecuteUbergraph_ThrowableWeaponStudio
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AThrowableWeaponStudio_C::ExecuteUbergraph_ThrowableWeaponStudio(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xce857eeb);

	AThrowableWeaponStudio_C_ExecuteUbergraph_ThrowableWeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
