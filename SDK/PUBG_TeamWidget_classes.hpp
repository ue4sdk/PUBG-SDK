#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass TeamWidget.TeamWidget_C
	// 0x0018 (0x0258 - 0x0240)
	class UTeamWidget_C : public UUserWidget {
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
		TArray<class UBP_TeamMarkWidget_C*>                TeamMarkWidgets;                                          // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamWidget.TeamWidget_C");
			return ptr;
		}


		void On_TeamHeadMarkCanvas_Prepass_1(class UWidget* BoundWidget);
		void UpdateTeamMarkWidget();
		void RemoveTeamMarkWidget(TArray<class ATeam*>* Teams);
		void AddTeamMarkWidget(TArray<class ATeam*>* Teams);
		void ExecuteUbergraph_TeamWidget(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
