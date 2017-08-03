// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TN_MagDrop.TN_MagDrop_C.SetSM
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewSM                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 CharacterVelocity              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Rotator                  CharacterRotation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 LinearVelocity                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class Vector3D                 AngularVelocity                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATN_MagDrop_C::SetSM(class UStaticMesh* NewSM, const class Vector3D& CharacterVelocity, const class Rotator& CharacterRotation, const class Vector3D& LinearVelocity, const class Vector3D& AngularVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MagDrop.TN_MagDrop_C.SetSM");

	ATN_MagDrop_C_SetSM_Params params;
	params.NewSM = NewSM;
	params.CharacterVelocity = CharacterVelocity;
	params.CharacterRotation = CharacterRotation;
	params.LinearVelocity = LinearVelocity;
	params.AngularVelocity = AngularVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_MagDrop.TN_MagDrop_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATN_MagDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MagDrop.TN_MagDrop_C.UserConstructionScript");

	ATN_MagDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
