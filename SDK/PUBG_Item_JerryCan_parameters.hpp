#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Item_JerryCan.Item_JerryCan_C.SendSystemMessage
struct UItem_JerryCan_C_SendSystemMessage_Params
{
	class ATslCharacter*                               PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Message;                                                  // (CPF_Parm)
};

// Function Item_JerryCan.Item_JerryCan_C.IsCastable
struct UItem_JerryCan_C_IsCastable_Params
{
	class ATslCharacter**                              Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Item_JerryCan.Item_JerryCan_C.Refule
struct UItem_JerryCan_C_Refule_Params
{
	class APawn*                                       Vehicle;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Item_JerryCan.Item_JerryCan_C.UseBy
struct UItem_JerryCan_C_UseBy_Params
{
	class ATslCharacter**                              Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
