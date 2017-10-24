#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CameraMan.BP_CameraMan_C.Init_Moto
struct ABP_CameraMan_C_Init_Moto_Params
{
	class ABP_Motorbike_03_C*                          ParentRef;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_CameraMan.BP_CameraMan_C.Init
struct ABP_CameraMan_C_Init_Params
{
	class ATslCharacter*                               ParentRef;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript
struct ABP_CameraMan_C_UserConstructionScript_Params
{
};

// Function BP_CameraMan.BP_CameraMan_C.ReceiveTick
struct ABP_CameraMan_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan
struct ABP_CameraMan_C_ExecuteUbergraph_BP_CameraMan_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
