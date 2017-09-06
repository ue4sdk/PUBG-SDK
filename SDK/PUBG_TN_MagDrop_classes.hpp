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

// BlueprintGeneratedClass TN_MagDrop.TN_MagDrop_C
// 0x0008 (0x03A8 - 0x03A0)
class ATN_MagDrop_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_MagDrop.TN_MagDrop_C");
		return ptr;
	}


	void SetSM(class UStaticMesh* NewSM, const class Vector3D& CharacterVelocity, const class Rotator& CharacterRotation, const class Vector3D& LinearVelocity, const class Vector3D& AngularVelocity);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
