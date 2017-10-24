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

// Function CharacterStudio_Default.CharacterStudio_Default_C.UserConstructionScript
struct ACharacterStudio_Default_C_UserConstructionScript_Params
{
};

// Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveTick
struct ACharacterStudio_Default_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveDestroyed
struct ACharacterStudio_Default_C_ReceiveDestroyed_Params
{
};

// Function CharacterStudio_Default.CharacterStudio_Default_C.ExecuteUbergraph_CharacterStudio_Default
struct ACharacterStudio_Default_C_ExecuteUbergraph_CharacterStudio_Default_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
