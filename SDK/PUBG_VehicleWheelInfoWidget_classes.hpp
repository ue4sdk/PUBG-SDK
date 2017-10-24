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

// WidgetBlueprintGeneratedClass VehicleWheelInfoWidget.VehicleWheelInfoWidget_C
// 0x0008 (0x02E8 - 0x02E0)
class UVehicleWheelInfoWidget_C : public UVehicleWheelInfoBaseWidget
{
public:
	class UTslWheeledVehicleMovement*                  TslWheeledVehicleMovement;                                // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VehicleWheelInfoWidget.VehicleWheelInfoWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
