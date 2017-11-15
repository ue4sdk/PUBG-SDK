#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes
{
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass P_VehicleSkidAccel_Dirt_BP.P_VehicleSkidAccel_Dirt_BP_C
	// 0x0000 (0x03F8 - 0x03F8)
	class AP_VehicleSkidAccel_Dirt_BP_C : public ATslParticle
	{
	public:

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x58acef37);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
