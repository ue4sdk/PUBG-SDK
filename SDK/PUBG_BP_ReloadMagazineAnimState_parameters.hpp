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

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.DropMag
struct UBP_ReloadMagazineAnimState_C_DropMag_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.AttachMag
struct UBP_ReloadMagazineAnimState_C_AttachMag_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Attach;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ShowMag
struct UBP_ReloadMagazineAnimState_C_ShowMag_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyEnd
struct UBP_ReloadMagazineAnimState_C_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyBegin
struct UBP_ReloadMagazineAnimState_C_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             TotalDuration;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
