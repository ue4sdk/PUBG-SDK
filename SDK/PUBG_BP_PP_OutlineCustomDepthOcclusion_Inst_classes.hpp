#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes
{
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C
	// 0x0008 (0x03F0 - 0x03E8)
	class ABP_PP_OutlineCustomDepthOcclusion_Inst_C : public ATslPostProcessEffect
	{
	public:
		class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x6c944d75);
			return ptr;
		}


		void UserConstructionScript();
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
