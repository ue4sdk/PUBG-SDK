#pragma once

// PLAYERUNKNOWN BattleGrounds (2.4.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslLobby.TslLobby_v2_C
// 0x0008 (0x03A0 - 0x0398)
class ATslLobby_v2_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TslLobby.TslLobby_v2_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TslLobby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
