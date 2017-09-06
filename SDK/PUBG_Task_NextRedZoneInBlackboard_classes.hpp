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

// BlueprintGeneratedClass Task_NextRedZoneInBlackboard.Task_NextRedZoneInBlackboard_C
// 0x0008 (0x00A8 - 0x00A0)
class UTask_NextRedZoneInBlackboard_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_NextRedZoneInBlackboard.Task_NextRedZoneInBlackboard_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_NextRedZoneInBlackboard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
