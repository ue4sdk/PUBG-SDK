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

	// BlueprintGeneratedClass P_VehicleSkidAccel_Concrete_BP.P_VehicleSkidAccel_Concrete_BP_C
	// 0x0000 (0x03F8 - 0x03F8)
	class AP_VehicleSkidAccel_Concrete_BP_C : public ATslParticle
	{
	public:

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xca726bfb);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
