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

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.PrepassCharacterCapture
struct UCharacterCapture_Gamepad_C_PrepassCharacterCapture_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.FinalizeCharacterCapture
struct UCharacterCapture_Gamepad_C_FinalizeCharacterCapture_Params
{
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.SaveCharacterStudio
struct UCharacterCapture_Gamepad_C_SaveCharacterStudio_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.InitCharacterCapture
struct UCharacterCapture_Gamepad_C_InitCharacterCapture_Params
{
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Construct
struct UCharacterCapture_Gamepad_C_Construct_Params
{
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Destruct
struct UCharacterCapture_Gamepad_C_Destruct_Params
{
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.ExecuteUbergraph_CharacterCapture_Gamepad
struct UCharacterCapture_Gamepad_C_ExecuteUbergraph_CharacterCapture_Gamepad_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
