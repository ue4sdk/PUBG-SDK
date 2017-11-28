#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass Uaz_Seat_PassengerBL.Uaz_Seat_PassengerBL_C
	// 0x0000 (0x0454 - 0x0454)
	class AUaz_Seat_PassengerBL_C : public AVehicleSeatPassenger_C {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xab6ae147);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
