#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// Class JsonUtilities.JsonUtilitiesDummyObject
	// 0x0000 (0x0028 - 0x0028)
	class UJsonUtilitiesDummyObject : public UObject {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x3f39f85c);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
