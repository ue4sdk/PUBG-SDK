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

// Function W_WeaponMenu.W_WeaponMenu_C.SpawnVehicle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InVehicleIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_WeaponMenu_C::SpawnVehicle(int InVehicleIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.SpawnVehicle");

	UW_WeaponMenu_C_SpawnVehicle_Params params;
	params.InVehicleIndex = InVehicleIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.SavePreset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UClass*>          inArray                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            ProfileIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_WeaponMenu_C::SavePreset(int ProfileIndex, TArray<class UClass*>* inArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.SavePreset");

	UW_WeaponMenu_C_SavePreset_Params params;
	params.ProfileIndex = ProfileIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inArray != nullptr)
		*inArray = params.inArray;
}


// Function W_WeaponMenu.W_WeaponMenu_C.LoadPresets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponMenu_C::LoadPresets()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.LoadPresets");

	UW_WeaponMenu_C_LoadPresets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.GiveItemToPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_WeaponMenu_C::GiveItemToPlayer(class UClass* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.GiveItemToPlayer");

	UW_WeaponMenu_C_GiveItemToPlayer_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.AddChildPresetButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FButtonStyle            InStyle                        (CPF_Parm)
// class UVerticalBox*            InContainer                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_WeaponMenu_C::AddChildPresetButton(class UClass* InItem, const struct FButtonStyle& InStyle, class UVerticalBox* InContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.AddChildPresetButton");

	UW_WeaponMenu_C_AddChildPresetButton_Params params;
	params.InItem = InItem;
	params.InStyle = InStyle;
	params.InContainer = InContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.AddItemToActiveArray
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_WeaponMenu_C::AddItemToActiveArray(class UClass* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.AddItemToActiveArray");

	UW_WeaponMenu_C_AddItemToActiveArray_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.IsSavePresetMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_WeaponMenu_C::IsSavePresetMode(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.IsSavePresetMode");

	UW_WeaponMenu_C_IsSavePresetMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function W_WeaponMenu.W_WeaponMenu_C.DoExit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponMenu_C::DoExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.DoExit");

	UW_WeaponMenu_C_DoExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_WeaponMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.Construct");

	UW_WeaponMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.OnClicked_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponMenu_C::OnClicked_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.OnClicked_Event_1");

	UW_WeaponMenu_C_OnClicked_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature");

	UW_WeaponMenu_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.ExecuteUbergraph_W_WeaponMenu
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_WeaponMenu_C::ExecuteUbergraph_W_WeaponMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponMenu.W_WeaponMenu_C.ExecuteUbergraph_W_WeaponMenu");

	UW_WeaponMenu_C_ExecuteUbergraph_W_WeaponMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
