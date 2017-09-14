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

	// Function TeamWidget.TeamWidget_C.On_TeamHeadMarkCanvas_Prepass_1
	struct UTeamWidget_C_On_TeamHeadMarkCanvas_Prepass_1_Params {
		class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function TeamWidget.TeamWidget_C.UpdateTeamMarkWidget
	struct UTeamWidget_C_UpdateTeamMarkWidget_Params {
	};

	// Function TeamWidget.TeamWidget_C.RemoveTeamMarkWidget
	struct UTeamWidget_C_RemoveTeamMarkWidget_Params {
		TArray<class ATeam*>                               Teams;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	};

	// Function TeamWidget.TeamWidget_C.AddTeamMarkWidget
	struct UTeamWidget_C_AddTeamMarkWidget_Params {
		TArray<class ATeam*>                               Teams;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	};

	// Function TeamWidget.TeamWidget_C.ExecuteUbergraph_TeamWidget
	struct UTeamWidget_C_ExecuteUbergraph_TeamWidget_Params {
		int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
