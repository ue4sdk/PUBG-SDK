// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NetworkProblemWidget.NetworkProblemWidget_C.On_NetProblemIndicator_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNetworkProblemWidget_C::On_NetProblemIndicator_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetworkProblemWidget.NetworkProblemWidget_C.On_NetProblemIndicator_Prepass_1");

	UNetworkProblemWidget_C_On_NetProblemIndicator_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetworkProblemWidget.NetworkProblemWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNetworkProblemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetworkProblemWidget.NetworkProblemWidget_C.Construct");

	UNetworkProblemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetworkProblemWidget.NetworkProblemWidget_C.ExecuteUbergraph_NetworkProblemWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNetworkProblemWidget_C::ExecuteUbergraph_NetworkProblemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetworkProblemWidget.NetworkProblemWidget_C.ExecuteUbergraph_NetworkProblemWidget");

	UNetworkProblemWidget_C_ExecuteUbergraph_NetworkProblemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
