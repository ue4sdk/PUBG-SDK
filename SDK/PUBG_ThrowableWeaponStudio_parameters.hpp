#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.OnLoaded
struct AThrowableWeaponStudio_C_OnLoaded_Params
{
};

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.UserConstructionScript
struct AThrowableWeaponStudio_C_UserConstructionScript_Params
{
};

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.SetItem
struct AThrowableWeaponStudio_C_SetItem_Params
{
	class UItem**                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.ExecuteUbergraph_ThrowableWeaponStudio
struct AThrowableWeaponStudio_C_ExecuteUbergraph_ThrowableWeaponStudio_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
