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

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnMouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_XboxTeamManageWidget_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6106b8d1);

	UBP_XboxTeamManageWidget_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.HandleButtonB
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::HandleButtonB()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x788f5289);

	UBP_XboxTeamManageWidget_C_HandleButtonB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_XboxTeamManageWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3e716859);

	UBP_XboxTeamManageWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_XboxTeamManageWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1645ce1);

	UBP_XboxTeamManageWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x22861b28);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x68eb8d35);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x859789c7);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x891f46f9);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf80616f2);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf93f263f);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x20a4a9ff);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x75facb77);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb9dc4c84);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8f5f0130);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa1049bbe);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xce693610);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.ExecuteUbergraph_BP_XboxTeamManageWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_XboxTeamManageWidget_C::ExecuteUbergraph_BP_XboxTeamManageWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1ae06e15);

	UBP_XboxTeamManageWidget_C_ExecuteUbergraph_BP_XboxTeamManageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
