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

	// Function CompassMarkerWidget.CompassMarkerWidget_C.On_CompassMarkerImage_Prepass_1
	struct UCompassMarkerWidget_C_On_CompassMarkerImage_Prepass_1_Params {
		class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function CompassMarkerWidget.CompassMarkerWidget_C.InitializeCompassMarker
	struct UCompassMarkerWidget_C_InitializeCompassMarker_Params {
		float                                              ViewSize;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	};

	// Function CompassMarkerWidget.CompassMarkerWidget_C.Update
	struct UCompassMarkerWidget_C_Update_Params {
		float                                              X;                                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	};

	// Function CompassMarkerWidget.CompassMarkerWidget_C.Construct
	struct UCompassMarkerWidget_C_Construct_Params {
	};

	// Function CompassMarkerWidget.CompassMarkerWidget_C.ExecuteUbergraph_CompassMarkerWidget
	struct UCompassMarkerWidget_C_ExecuteUbergraph_CompassMarkerWidget_Params {
		int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
