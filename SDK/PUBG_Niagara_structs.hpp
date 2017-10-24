#pragma once

// PlayerUnknown's Battlegrounds (2.6.36.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
};


// Enum Niagara.ENiagaraDataType
enum class ENiagaraDataType : uint8_t
{
	ENiagaraDataType__Scalar       = 0,
	ENiagaraDataType__Vector       = 1,
	ENiagaraDataType__Matrix       = 2,
	ENiagaraDataType__ENiagaraDataType_MAX = 3
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
};


// Enum Niagara.EEmitterRenderModuleType
enum class EEmitterRenderModuleType : uint8_t
{
	RMT_None                       = 0,
	RMT_Sprites                    = 1,
	RMT_Ribbon                     = 2,
	RMT_Trails                     = 3,
	RMT_Meshes                     = 4,
	RMT_MAX                        = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraConstantBase
// 0x0008
struct FNiagaraConstantBase
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstant_Float
// 0x0008 (0x0010 - 0x0008)
struct FNiagaraConstant_Float : public FNiagaraConstantBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraConstant_Vector
// 0x0018 (0x0020 - 0x0008)
struct FNiagaraConstant_Vector : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FVector4                                    Value;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstant_Matrix
// 0x0048 (0x0050 - 0x0008)
struct FNiagaraConstant_Matrix : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     Value;                                                    // 0x0010(0x0040) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants
// 0x0030
struct FNiagaraConstants
{
	TArray<struct FNiagaraConstant_Float>              ScalarConstants;                                          // 0x0000(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FNiagaraConstant_Vector>             VectorConstants;                                          // 0x0010(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FNiagaraConstant_Matrix>             MatrixConstants;                                          // 0x0020(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptConstantData
// 0x0060
struct FNiagaraScriptConstantData
{
	struct FNiagaraConstants                           ExternalConstantsNew;                                     // 0x0000(0x0030)
	struct FNiagaraConstants                           InternalConstantsNew;                                     // 0x0030(0x0030)
};

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x0010
struct FNiagaraVariableInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ENiagaraDataType>                      Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x0010
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ENiagaraDataSetType>                   Type;                                                     // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       // 0x0000(0x0010) (CPF_Edit, CPF_EditConst)
	TArray<struct FNiagaraVariableInfo>                Variables;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptUsageInfo
// 0x0001
struct FNiagaraScriptUsageInfo
{
	bool                                               bReadsAttriubteData;                                      // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0028
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceEventGenerator;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceEmitter;                                            // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UNiagaraEventReceiverEmitterAction*>  EmitterActions;                                           // 0x0018(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0008 (0x0028 - 0x0020)
struct FNiagaraEventGeneratorProperties : public FNiagaraDataSetProperties
{
	int                                                MaxEventsPerFrame;                                        // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0058
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNiagaraConstants                           ExternalConstants;                                        // 0x0008(0x0030) (CPF_Edit)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           // 0x0038(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          // 0x0048(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
