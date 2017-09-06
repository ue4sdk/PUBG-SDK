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

// Function W_WeaponButton.W_WeaponButton_C.OnLoaded_310494BE44396A726B88C8A9579DBB21
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_WeaponButton_C::OnLoaded_310494BE44396A726B88C8A9579DBB21(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponButton.W_WeaponButton_C.OnLoaded_310494BE44396A726B88C8A9579DBB21");

	UW_WeaponButton_C_OnLoaded_310494BE44396A726B88C8A9579DBB21_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponButton.W_WeaponButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_WeaponButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponButton.W_WeaponButton_C.Construct");

	UW_WeaponButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponButton.W_WeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponButton_C::BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponButton.W_WeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponButton_C_BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponButton.W_WeaponButton_C.ExecuteUbergraph_W_WeaponButton
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_WeaponButton_C::ExecuteUbergraph_W_WeaponButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponButton.W_WeaponButton_C.ExecuteUbergraph_W_WeaponButton");

	UW_WeaponButton_C_ExecuteUbergraph_W_WeaponButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
