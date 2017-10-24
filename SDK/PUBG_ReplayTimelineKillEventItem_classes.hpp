#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C
// 0x0010 (0x0250 - 0x0240)
class UReplayTimelineKillEventItem_C : public UUserWidget
{
public:
	struct FString                                     KillTooltipText;                                          // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C");
		return ptr;
	}


	struct FText GetToolTipText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
