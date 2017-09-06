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

// BlueprintGeneratedClass M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C
// 0x0020 (0x0408 - 0x03E8)
class AM_ElectricWall_Inside_BP_C : public ATslPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _____0______0_F1196C2844F052526643A091F7753F02;           // 0x03F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_F1196C2844F052526643A091F7753F02;       // 0x03FC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          АР„З|·xЗ_1;                                               // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void АР„З|·xЗ_();
	void ReceiveBeginPlay();
	void Custom_Event_1();
	void ExecuteUbergraph_M_ElectricWall_Inside_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
