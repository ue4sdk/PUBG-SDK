#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Toy_Item_Ammo_Bolt.Toy_Item_Ammo_Bolt_C
// 0x0000 (0x0198 - 0x0198)
class UToy_Item_Ammo_Bolt_C : public UItem_Ammo_Bolt_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Toy_Item_Ammo_Bolt.Toy_Item_Ammo_Bolt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
