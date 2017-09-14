// PLAYERUNKNOWN BattleGrounds () SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterStanceWidget.CharacterStanceWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharacterStanceWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStanceWidget.CharacterStanceWidget_C.OnPrepass_1");

	UCharacterStanceWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStanceWidget.CharacterStanceWidget_C.OnUpdateCharacterStanceImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharacterStanceWidget_C::OnUpdateCharacterStanceImage(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStanceWidget.CharacterStanceWidget_C.OnUpdateCharacterStanceImage");

	UCharacterStanceWidget_C_OnUpdateCharacterStanceImage_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStanceWidget.CharacterStanceWidget_C.GetCharacterIconVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESlateVisibility> UCharacterStanceWidget_C::GetCharacterIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStanceWidget.CharacterStanceWidget_C.GetCharacterIconVisibility");

	UCharacterStanceWidget_C_GetCharacterIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
