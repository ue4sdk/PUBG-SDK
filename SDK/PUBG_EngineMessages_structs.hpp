#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	struct FString                                     Text;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	double                                             TimeSeconds;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     UserToGrant;                                              // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     UserToDeny;                                               // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	struct FString                                     CurrentLevel;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                EngineVersion;                                            // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HasBegunPlay : 1;                                         // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FGuid                                       InstanceId;                                               // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     InstanceType;                                             // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WorldTimeSeconds;                                         // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
