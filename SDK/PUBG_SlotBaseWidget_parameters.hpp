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

// Function SlotBaseWidget.SlotBaseWidget_C.IsPlayCharacterPickupAnim
struct USlotBaseWidget_C_IsPlayCharacterPickupAnim_Params
{
	bool                                               bIsPickup;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SlotBaseWidget.SlotBaseWidget_C.IsCharacterCasting
struct USlotBaseWidget_C_IsCharacterCasting_Params
{
	bool                                               IsCasting;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SlotBaseWidget.SlotBaseWidget_C.PlaySoundAk
struct USlotBaseWidget_C_PlaySoundAk_Params
{
	class UAkAudioEvent*                               SoundAk;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SlotBaseWidget.SlotBaseWidget_C.Construct
struct USlotBaseWidget_C_Construct_Params
{
};

// Function SlotBaseWidget.SlotBaseWidget_C.OnMouseEnter
struct USlotBaseWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SlotBaseWidget.SlotBaseWidget_C.ExecuteUbergraph_SlotBaseWidget
struct USlotBaseWidget_C_ExecuteUbergraph_SlotBaseWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
