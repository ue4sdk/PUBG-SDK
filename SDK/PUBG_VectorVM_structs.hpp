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

// Enum VectorVM.EVectorVMOp
enum class EVectorVMOp : uint8_t
{
	EVectorVMOp__done              = 0,
	EVectorVMOp__add               = 1,
	EVectorVMOp__sub               = 2,
	EVectorVMOp__mul               = 3,
	EVectorVMOp__mad               = 4,
	EVectorVMOp__lerp              = 5,
	EVectorVMOp__rcp               = 6,
	EVectorVMOp__rsq               = 7,
	EVectorVMOp__sqrt              = 8,
	EVectorVMOp__neg               = 9,
	EVectorVMOp__abs               = 10,
	EVectorVMOp__exp               = 11,
	EVectorVMOp__exp2              = 12,
	EVectorVMOp__log               = 13,
	EVectorVMOp__log2              = 14,
	EVectorVMOp__sin               = 15,
	EVectorVMOp__cos               = 16,
	EVectorVMOp__tan               = 17,
	EVectorVMOp__asin              = 18,
	EVectorVMOp__acos              = 19,
	EVectorVMOp__atan              = 20,
	EVectorVMOp__atan2             = 21,
	EVectorVMOp__ceil              = 22,
	EVectorVMOp__floor             = 23,
	EVectorVMOp__fmod              = 24,
	EVectorVMOp__frac              = 25,
	EVectorVMOp__trunc             = 26,
	EVectorVMOp__clamp             = 27,
	EVectorVMOp__min               = 28,
	EVectorVMOp__max               = 29,
	EVectorVMOp__pow               = 30,
	EVectorVMOp__sign              = 31,
	EVectorVMOp__step              = 32,
	EVectorVMOp__dot               = 33,
	EVectorVMOp__cross             = 34,
	EVectorVMOp__normalize         = 35,
	EVectorVMOp__random            = 36,
	EVectorVMOp__length            = 37,
	EVectorVMOp__noise             = 38,
	EVectorVMOp__splatx            = 39,
	EVectorVMOp__splaty            = 40,
	EVectorVMOp__splatz            = 41,
	EVectorVMOp__splatw            = 42,
	EVectorVMOp__compose           = 43,
	EVectorVMOp__composex          = 44,
	EVectorVMOp__composey          = 45,
	EVectorVMOp__composez          = 46,
	EVectorVMOp__composew          = 47,
	EVectorVMOp__output            = 48,
	EVectorVMOp__lessthan          = 49,
	EVectorVMOp__select            = 50,
	EVectorVMOp__sample            = 51,
	EVectorVMOp__bufferwrite       = 52,
	EVectorVMOp__easein            = 53,
	EVectorVMOp__easeinout         = 54,
	EVectorVMOp__div               = 55,
	EVectorVMOp__aquireshareddataindex = 56,
	EVectorVMOp__aquireshareddataindexwrap = 57,
	EVectorVMOp__consumeshareddataindex = 58,
	EVectorVMOp__consumeshareddataindexwrap = 59,
	EVectorVMOp__shareddataread    = 60,
	EVectorVMOp__shareddatawrite   = 61,
	EVectorVMOp__shareddataindexvalid = 62,
	EVectorVMOp__NumOpcodes        = 63,
	EVectorVMOp__EVectorVMOp_MAX   = 64
};


// Enum VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
	EVectorVMOperandLocation__TemporaryRegister = 0,
	EVectorVMOperandLocation__InputRegister = 1,
	EVectorVMOperandLocation__OutputRegister = 2,
	EVectorVMOperandLocation__Constant = 3,
	EVectorVMOperandLocation__DataObjConstant = 4,
	EVectorVMOperandLocation__SharedData = 5,
	EVectorVMOperandLocation__Undefined = 6,
	EVectorVMOperandLocation__Num  = 7,
	EVectorVMOperandLocation__EVectorVMOperandLocation_MAX = 8
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
