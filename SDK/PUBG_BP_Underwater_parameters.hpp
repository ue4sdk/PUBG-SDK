#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Underwater.BP_Underwater_C.UserConstructionScript
struct ABP_Underwater_C_UserConstructionScript_Params
{
};

// Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__FinishedFunc
struct ABP_Underwater_C_WetLensBlurFade__FinishedFunc_Params
{
};

// Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__UpdateFunc
struct ABP_Underwater_C_WetLensBlurFade__UpdateFunc_Params
{
};

// Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__FinishedFunc
struct ABP_Underwater_C_WetLensDistortFade__FinishedFunc_Params
{
};

// Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__UpdateFunc
struct ABP_Underwater_C_WetLensDistortFade__UpdateFunc_Params
{
};

// Function BP_Underwater.BP_Underwater_C.ReceiveTick
struct ABP_Underwater_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_Underwater.BP_Underwater_C.ReceiveBeginPlay
struct ABP_Underwater_C_ReceiveBeginPlay_Params
{
};

// Function BP_Underwater.BP_Underwater_C.UnderWater
struct ABP_Underwater_C_UnderWater_Params
{
};

// Function BP_Underwater.BP_Underwater_C.OutOfWater
struct ABP_Underwater_C_OutOfWater_Params
{
};

// Function BP_Underwater.BP_Underwater_C.ExecuteUbergraph_BP_Underwater
struct ABP_Underwater_C_ExecuteUbergraph_BP_Underwater_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
