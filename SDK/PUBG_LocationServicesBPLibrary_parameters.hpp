#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
struct ULocationServices_StopLocationServices_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
struct ULocationServices_StartLocationServices_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
struct ULocationServices_IsLocationAccuracyAvailable_Params
{
	ELocationAccuracy                                  Accuracy;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
struct ULocationServices_InitLocationServices_Params
{
	ELocationAccuracy                                  Accuracy;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpdateFrequency;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceFilter;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
struct ULocationServices_GetLocationServicesImpl_Params
{
	class ULocationServicesImpl*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
struct ULocationServices_GetLastKnownLocation_Params
{
	struct FLocationServicesData                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
struct ULocationServices_AreLocationServicesEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
