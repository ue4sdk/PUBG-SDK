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

// BlueprintGeneratedClass Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C
// 0x0010 (0x0400 - 0x03F0)
class ABuff_BreakSunkenVehicle_C : public ATslBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C");
		return ptr;
	}


	void UserConstructionScript();
	void TickBuff();
	void StopBuffBlueprint(bool* bCanceled);
	void ExecuteUbergraph_Buff_BreakSunkenVehicle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
