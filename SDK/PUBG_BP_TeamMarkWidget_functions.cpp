// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.DecideWidgetColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_TeamMarkWidget_C::DecideWidgetColors(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.DecideWidgetColors");

	UBP_TeamMarkWidget_C_DecideWidgetColors_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.IsFreeCam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBP_TeamMarkWidget_C::IsFreeCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.IsFreeCam");

	UBP_TeamMarkWidget_C_IsFreeCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.SetJustification
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_TeamMarkWidget_C::SetJustification()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.SetJustification");

	UBP_TeamMarkWidget_C_SetJustification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.GetPlayerNameTextAddLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D                 AddLocation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_TeamMarkWidget_C::GetPlayerNameTextAddLocation(class Vector2D* AddLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.GetPlayerNameTextAddLocation");

	UBP_TeamMarkWidget_C_GetPlayerNameTextAddLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AddLocation != nullptr)
		*AddLocation = params.AddLocation;
}


// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_TeamMarkWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.OnPrepass_1");

	UBP_TeamMarkWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.Get_PlayerName_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBP_TeamMarkWidget_C::Get_PlayerName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.Get_PlayerName_Text_1");

	UBP_TeamMarkWidget_C_Get_PlayerName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.SetCharacterIconPosition_UC
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D*                Pos_UC                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          OutRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float*                         Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          IsHidden                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_TeamMarkWidget_C::SetCharacterIconPosition_UC(class Vector2D* Pos_UC, bool* OutRange, float* Angle, bool* IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.SetCharacterIconPosition_UC");

	UBP_TeamMarkWidget_C_SetCharacterIconPosition_UC_Params params;
	params.Pos_UC = Pos_UC;
	params.OutRange = OutRange;
	params.Angle = Angle;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_TeamMarkWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.Construct");

	UBP_TeamMarkWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_TeamMarkWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.Tick");

	UBP_TeamMarkWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.ExecuteUbergraph_BP_TeamMarkWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_TeamMarkWidget_C::ExecuteUbergraph_BP_TeamMarkWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.ExecuteUbergraph_BP_TeamMarkWidget");

	UBP_TeamMarkWidget_C_ExecuteUbergraph_BP_TeamMarkWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
