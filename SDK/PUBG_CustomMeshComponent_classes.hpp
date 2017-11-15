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

	// Class CustomMeshComponent.CustomMeshComponent
	// 0x0010 (0x0790 - 0x0780)
	class UCustomMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                      UnknownData00[0x10];                                      // 0x0780(0x0010) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xd31e268b);
			return ptr;
		}


		bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
		void ClearCustomMeshTriangles();
		void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
