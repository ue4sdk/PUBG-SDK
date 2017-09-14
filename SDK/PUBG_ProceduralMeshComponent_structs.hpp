#pragma once

// PLAYERUNKNOWN BattleGrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption
{
	EProcMeshSliceCapOption__NoCap = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0010
struct FProcMeshTangent
{
	class Vector3D                                     TangentX;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bFlipTangentY : 1;                                        // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x0034
struct FProcMeshVertex
{
	class Vector3D                                     Position;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Normal;                                                   // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FProcMeshTangent                            Tangent;                                                  // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FColor                                      Color;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     UV0;                                                      // 0x002C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0040
struct FProcMeshSection
{
	TArray<struct FProcMeshVertex>                     ProcVertexBuffer;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        ProcIndexBuffer;                                          // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        SectionLocalBox;                                          // 0x0020(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableCollision : 1;                                     // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSectionVisible : 1;                                      // 0x003D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
