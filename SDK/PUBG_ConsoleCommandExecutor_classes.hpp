#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ConsoleCommandExecutor.ConsoleCommandExecutor_C
// 0x0020 (0x03C0 - 0x03A0)
class AConsoleCommandExecutor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             ConsoleCommands;                                          // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConsoleCommandExecutor.ConsoleCommandExecutor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ConsoleCommandExecutor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
