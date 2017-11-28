#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.BoostGaugeUp
struct UItem_Boost_EnergyDrink_C_BoostGaugeUp_Params
{
};

// Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.IsCastable
struct UItem_Boost_EnergyDrink_C_IsCastable_Params
{
	class ATslCharacter**                              Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.PrintCastingTime
struct UItem_Boost_EnergyDrink_C_PrintCastingTime_Params
{
};

// Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.UseBy
struct UItem_Boost_EnergyDrink_C_UseBy_Params
{
	class ATslCharacter**                              Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
