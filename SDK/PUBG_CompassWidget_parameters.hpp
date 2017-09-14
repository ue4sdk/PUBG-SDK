#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes {
	//---------------------------------------------------------------------------
	//Parameters
	//---------------------------------------------------------------------------

	// Function CompassWidget.CompassWidget_C.GetPlayerRotation
	struct UCompassWidget_C_GetPlayerRotation_Params {
		class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
	};

	// Function CompassWidget.CompassWidget_C.CalcCompassMarkerDir
	struct UCompassWidget_C_CalcCompassMarkerDir_Params {
		class Vector2D                                     A;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              Dir;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function CompassWidget.CompassWidget_C.CreateCompassMarkerWidget
	struct UCompassWidget_C_CreateCompassMarkerWidget_Params {
		int                                                Number;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		class UCompassMarkerWidget_C*                      CompassMarker;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function CompassWidget.CompassWidget_C.InitCompassWidget
	struct UCompassWidget_C_InitCompassWidget_Params {
	};

	// Function CompassWidget.CompassWidget_C.Get_Compass_Arrow_Visibility_1
	struct UCompassWidget_C_Get_Compass_Arrow_Visibility_1_Params {
		TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
	};

	// Function CompassWidget.CompassWidget_C.ConvertAngleToUV
	struct UCompassWidget_C_ConvertAngleToUV_Params {
		float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
	};

	// Function CompassWidget.CompassWidget_C.UpdateDirection
	struct UCompassWidget_C_UpdateDirection_Params {
	};

	// Function CompassWidget.CompassWidget_C.Construct
	struct UCompassWidget_C_Construct_Params {
	};

	// Function CompassWidget.CompassWidget_C.Tick
	struct UCompassWidget_C_Tick_Params {
		struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
		float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function CompassWidget.CompassWidget_C.ExecuteUbergraph_CompassWidget
	struct UCompassWidget_C_ExecuteUbergraph_CompassWidget_Params {
		int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
