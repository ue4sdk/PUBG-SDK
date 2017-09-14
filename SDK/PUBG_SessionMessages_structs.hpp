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

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{

};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{

};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Data;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	double                                             TimeSeconds;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Verbosity;                                                // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0098
struct FSessionServicePong
{
	unsigned char                                      Authorized : 1;                                           // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     BuildDate;                                                // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     DeviceName;                                               // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     InstanceName;                                             // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      IsConsoleBuild : 1;                                       // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     PlatformName;                                             // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     SessionName;                                              // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     SessionOwner;                                             // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      Standalone : 1;                                           // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct SessionMessages.SessionServicePing
// 0x0010
struct FSessionServicePing
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
