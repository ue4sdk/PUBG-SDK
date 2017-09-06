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

// BlueprintGeneratedClass Buff_FireDOT.Buff_FireDOT_C
// 0x0008 (0x0428 - 0x0420)
class ABuff_FireDOT_C : public ABuff_DamageOverTime_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FireDOT.Buff_FireDOT_C");
		return ptr;
	}


	void UserConstructionScript();
	void TickBuff();
	void ExecuteUbergraph_Buff_FireDOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
