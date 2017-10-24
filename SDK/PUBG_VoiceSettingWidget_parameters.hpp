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

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelByOption
struct UVoiceSettingWidget_C_GetVoiceChannelByOption_Params
{
	bool                                               GlobalChannel;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TeamChannel;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceByOption
struct UVoiceSettingWidget_C_GetMyVoiceByOption_Params
{
	bool                                               bIsMuted;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsePushToTalk;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelOptionString
struct UVoiceSettingWidget_C_GetVoiceChannelOptionString_Params
{
	struct FString                                     OptionString;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceOptionString
struct UVoiceSettingWidget_C_GetMyVoiceOptionString_Params
{
	struct FString                                     OptionString;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.IsChanged
struct UVoiceSettingWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.UpdateVoiceSettingWidget
struct UVoiceSettingWidget_C_UpdateVoiceSettingWidget_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.Construct
struct UVoiceSettingWidget_C_Construct_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.OnApply
struct UVoiceSettingWidget_C_OnApply_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.OnDefault
struct UVoiceSettingWidget_C_OnDefault_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.OnReset
struct UVoiceSettingWidget_C_OnReset_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.ExecuteUbergraph_VoiceSettingWidget
struct UVoiceSettingWidget_C_ExecuteUbergraph_VoiceSettingWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
