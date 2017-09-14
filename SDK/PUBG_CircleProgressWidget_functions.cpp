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

// Function CircleProgressWidget.CircleProgressWidget_C.GetColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UCircleProgressWidget_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleProgressWidget.CircleProgressWidget_C.GetColorAndOpacity_1");

	UCircleProgressWidget_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CircleProgressWidget.CircleProgressWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCircleProgressWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleProgressWidget.CircleProgressWidget_C.Construct");

	UCircleProgressWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleProgressWidget.CircleProgressWidget_C.ExecuteUbergraph_CircleProgressWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCircleProgressWidget_C::ExecuteUbergraph_CircleProgressWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleProgressWidget.CircleProgressWidget_C.ExecuteUbergraph_CircleProgressWidget");

	UCircleProgressWidget_C_ExecuteUbergraph_CircleProgressWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
