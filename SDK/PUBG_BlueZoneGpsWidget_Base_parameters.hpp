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

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsWarningBp
struct UBlueZoneGpsWidget_Base_C_IsWarningBp_Params
{
	bool                                               bIsWarning;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.TickWaning
struct UBlueZoneGpsWidget_Base_C_TickWaning_Params
{
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetReset
struct UBlueZoneGpsWidget_Base_C_SetReset_Params
{
	bool                                               bReset;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetResetTimeCheck
struct UBlueZoneGpsWidget_Base_C_SetResetTimeCheck_Params
{
	float                                              ResetTimeCheck;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetResetTimeCheck
struct UBlueZoneGpsWidget_Base_C_GetResetTimeCheck_Params
{
	float                                              ResetTimeCheck;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetPlayzoneReset
struct UBlueZoneGpsWidget_Base_C_SetPlayzoneReset_Params
{
	bool                                               bNewPlayzoneReset;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsPlayzoneReset
struct UBlueZoneGpsWidget_Base_C_IsPlayzoneReset_Params
{
	bool                                               bReset;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.SetBluezoneReset
struct UBlueZoneGpsWidget_Base_C_SetBluezoneReset_Params
{
	bool                                               bNewBluezoneReset;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsBluezoneReset
struct UBlueZoneGpsWidget_Base_C_IsBluezoneReset_Params
{
	bool                                               bBluezoneReset;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayZoneRadius
struct UBlueZoneGpsWidget_Base_C_GetCurrentPlayZoneRadius_Params
{
	float                                              CurrentPlayzoneRadius;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayZonePosition
struct UBlueZoneGpsWidget_Base_C_GetCurrentPlayZonePosition_Params
{
	class Vector3D                                     CurrentPlayzonePosition;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsResetBp
struct UBlueZoneGpsWidget_Base_C_IsResetBp_Params
{
	bool                                               bReset;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextplayzoneRadiusBp
struct UBlueZoneGpsWidget_Base_C_GetNextplayzoneRadiusBp_Params
{
	float                                              NextPlayzoneRadius;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayzonePositionBp
struct UBlueZoneGpsWidget_Base_C_GetNextPlayzonePositionBp_Params
{
	class Vector3D                                     NextPlayzonePosition;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezoneStateBp
struct UBlueZoneGpsWidget_Base_C_GetBluezoneStateBp_Params
{
	int                                                Stae;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsStateBluezoneReady
struct UBlueZoneGpsWidget_Base_C_IsStateBluezoneReady_Params
{
	bool                                               IsReady;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezoneTimeText
struct UBlueZoneGpsWidget_Base_C_GetBluezoneTimeText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.UpdateGauge
struct UBlueZoneGpsWidget_Base_C_UpdateGauge_Params
{
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.BluezoneGpsMainPrepass
struct UBlueZoneGpsWidget_Base_C_BluezoneGpsMainPrepass_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetTslCharacter
struct UBlueZoneGpsWidget_Base_C_GetTslCharacter_Params
{
	class ACharacter*                                  Character;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetIsInNextPlayzone
struct UBlueZoneGpsWidget_Base_C_GetIsInNextPlayzone_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.IsInNextPlayzoneBp
struct UBlueZoneGpsWidget_Base_C_IsInNextPlayzoneBp_Params
{
	bool                                               bIsIn;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayerzoneToCurrentBlueZoneLength
struct UBlueZoneGpsWidget_Base_C_GetNextPlayerzoneToCurrentBlueZoneLength_Params
{
	float                                              Length;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetPlayerLength
struct UBlueZoneGpsWidget_Base_C_GetPlayerLength_Params
{
	float                                              PlayerLength;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayerzoneToCharacterDirection
struct UBlueZoneGpsWidget_Base_C_GetNextPlayerzoneToCharacterDirection_Params
{
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Direction;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetSafeLength
struct UBlueZoneGpsWidget_Base_C_GetSafeLength_Params
{
	float                                              SafeLength;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     A;                                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     B;                                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetBluezonePositionAndRadius
struct UBlueZoneGpsWidget_Base_C_GetBluezonePositionAndRadius_Params
{
	class Vector3D                                     BluezonePosition;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BluezoneRadius;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetCurrentPlayzonePositionAndRadius
struct UBlueZoneGpsWidget_Base_C_GetCurrentPlayzonePositionAndRadius_Params
{
	class Vector3D                                     CurrentPlayzonePosition;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentPlayzoneRadius;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetNextPlayzonePositionAndRadius
struct UBlueZoneGpsWidget_Base_C_GetNextPlayzonePositionAndRadius_Params
{
	class Vector3D                                     NextPlayzonePosition;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.GetDangerLength
struct UBlueZoneGpsWidget_Base_C_GetDangerLength_Params
{
	float                                              DangerLength;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     A;                                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     B;                                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.Construct
struct UBlueZoneGpsWidget_Base_C_Construct_Params
{
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.MainPrepassWidgetVisibilitySetting
struct UBlueZoneGpsWidget_Base_C_MainPrepassWidgetVisibilitySetting_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnWarning
struct UBlueZoneGpsWidget_Base_C_OnWarning_Params
{
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnLeaveNextPlayzone
struct UBlueZoneGpsWidget_Base_C_OnLeaveNextPlayzone_Params
{
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.OnEnterNextPlayzone
struct UBlueZoneGpsWidget_Base_C_OnEnterNextPlayzone_Params
{
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildResetBluezone
struct UBlueZoneGpsWidget_Base_C_ChildResetBluezone_Params
{
	float                                              Gauge;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildResetPlayzone
struct UBlueZoneGpsWidget_Base_C_ChildResetPlayzone_Params
{
	float                                              Gauge;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ChildUpdateGauge
struct UBlueZoneGpsWidget_Base_C_ChildUpdateGauge_Params
{
	float                                              Gauge;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C.ExecuteUbergraph_BlueZoneGpsWidget_Base
struct UBlueZoneGpsWidget_Base_C_ExecuteUbergraph_BlueZoneGpsWidget_Base_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
