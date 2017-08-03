#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_GasWarning.Task_GasWarning_C.GetMinSecText
struct UTask_GasWarning_C_GetMinSecText_Params
{
	float                                              Seconds;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Full_text_for_MIN_SEC;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       formatted_text;                                           // (CPF_Parm, CPF_OutParm)
};

// Function Task_GasWarning.Task_GasWarning_C.PoisionWarningBroadcast
struct UTask_GasWarning_C_PoisionWarningBroadcast_Params
{
	class ABattleRoyaleModeController*                 ModeController;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_GasWarning.Task_GasWarning_C.InitPoisonWarningTimeIndex
struct UTask_GasWarning_C_InitPoisonWarningTimeIndex_Params
{
	class ABattleRoyaleModeController*                 ModeController;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_GasWarning.Task_GasWarning_C.ReceiveTick
struct UTask_GasWarning_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_GasWarning.Task_GasWarning_C.ReceiveExecute
struct UTask_GasWarning_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_GasWarning.Task_GasWarning_C.ExecuteUbergraph_Task_GasWarning
struct UTask_GasWarning_C_ExecuteUbergraph_Task_GasWarning_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
