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

// Function W_SprintBar.W_SprintBar_C.Tick
struct UW_SprintBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function W_SprintBar.W_SprintBar_C.Construct
struct UW_SprintBar_C_Construct_Params
{
};

// Function W_SprintBar.W_SprintBar_C.ExecuteUbergraph_W_SprintBar
struct UW_SprintBar_C_ExecuteUbergraph_W_SprintBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
