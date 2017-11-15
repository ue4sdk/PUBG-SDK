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

	// BlueprintGeneratedClass SlotWidgetBaseInterface.SlotWidgetBaseInterface_C
	// 0x0000 (0x0028 - 0x0028)
	class USlotWidgetBaseInterface_C : public UInterface
	{
	public:

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x5731f0d5);
			return ptr;
		}


		void GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer);
		void GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
