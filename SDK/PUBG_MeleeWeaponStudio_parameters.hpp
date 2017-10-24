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

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.OnLoaded
struct AMeleeWeaponStudio_C_OnLoaded_Params
{
};

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.UserConstructionScript
struct AMeleeWeaponStudio_C_UserConstructionScript_Params
{
};

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.SetItem
struct AMeleeWeaponStudio_C_SetItem_Params
{
	class UItem**                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.ExecuteUbergraph_MeleeWeaponStudio
struct AMeleeWeaponStudio_C_ExecuteUbergraph_MeleeWeaponStudio_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
