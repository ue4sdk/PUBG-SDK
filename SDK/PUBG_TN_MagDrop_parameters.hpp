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

// Function TN_MagDrop.TN_MagDrop_C.SetSM
struct ATN_MagDrop_C_SetSM_Params
{
	class UStaticMesh*                                 NewSM;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CharacterVelocity;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      CharacterRotation;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LinearVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     AngularVelocity;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TN_MagDrop.TN_MagDrop_C.UserConstructionScript
struct ATN_MagDrop_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
