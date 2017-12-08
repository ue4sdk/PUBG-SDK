// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes {
	//---------------------------------------------------------------------------
	//Functions
	//---------------------------------------------------------------------------

	// Function ParachutePlayer.ParachutePlayer_C.UserConstructionScript
	// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

	void AParachutePlayer_C::UserConstructionScript() {
		static UFunction* fn = nullptr;
		if (!fn) fn = UObject::FindObject<UFunction>(0x209e9c70);

		AParachutePlayer_C_UserConstructionScript_Params params;

		auto flags = fn->FunctionFlags;

		UObject::ProcessEvent(fn, &params);

		fn->FunctionFlags = flags;
	}


	// Function ParachutePlayer.ParachutePlayer_C.ReceiveEndPlay
	// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
	// Parameters:
	// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

	void AParachutePlayer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason) {
		static UFunction* fn = nullptr;
		if (!fn) fn = UObject::FindObject<UFunction>(0xcdf7d6df);

		AParachutePlayer_C_ReceiveEndPlay_Params params;
		params.EndPlayReason = EndPlayReason;

		auto flags = fn->FunctionFlags;

		UObject::ProcessEvent(fn, &params);

		fn->FunctionFlags = flags;
	}


	// Function ParachutePlayer.ParachutePlayer_C.ReceiveHit
	// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
	// Parameters:
	// class UPrimitiveComponent**    MyComp                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	// class AActor**                 Other                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	// class UPrimitiveComponent**    OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	// bool*                          bSelfMoved                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	// struct FVector*                HitLocation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	// struct FVector*                HitNormal                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	// struct FVector*                NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	// struct FHitResult*             Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

	void AParachutePlayer_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit) {
		static UFunction* fn = nullptr;
		if (!fn) fn = UObject::FindObject<UFunction>(0xad1c9bf1);

		AParachutePlayer_C_ReceiveHit_Params params;
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;

		auto flags = fn->FunctionFlags;

		UObject::ProcessEvent(fn, &params);

		fn->FunctionFlags = flags;
	}


	// Function ParachutePlayer.ParachutePlayer_C.ReceiveTick
	// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
	// Parameters:
	// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

	void AParachutePlayer_C::ReceiveTick(float* DeltaSeconds) {
		static UFunction* fn = nullptr;
		if (!fn) fn = UObject::FindObject<UFunction>(0xf8c551bd);

		AParachutePlayer_C_ReceiveTick_Params params;
		params.DeltaSeconds = DeltaSeconds;

		auto flags = fn->FunctionFlags;

		UObject::ProcessEvent(fn, &params);

		fn->FunctionFlags = flags;
	}


	// Function ParachutePlayer.ParachutePlayer_C.ReceiveBeginPlay
	// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

	void AParachutePlayer_C::ReceiveBeginPlay() {
		static UFunction* fn = nullptr;
		if (!fn) fn = UObject::FindObject<UFunction>(0x4ac65017);

		AParachutePlayer_C_ReceiveBeginPlay_Params params;

		auto flags = fn->FunctionFlags;

		UObject::ProcessEvent(fn, &params);

		fn->FunctionFlags = flags;
	}


	// Function ParachutePlayer.ParachutePlayer_C.ExecuteUbergraph_ParachutePlayer
	// (FUNC_HasDefaults)
	// Parameters:
	// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

	void AParachutePlayer_C::ExecuteUbergraph_ParachutePlayer(int EntryPoint) {
		static UFunction* fn = nullptr;
		if (!fn) fn = UObject::FindObject<UFunction>(0x7e354f3b);

		AParachutePlayer_C_ExecuteUbergraph_ParachutePlayer_Params params;
		params.EntryPoint = EntryPoint;

		auto flags = fn->FunctionFlags;

		UObject::ProcessEvent(fn, &params);

		fn->FunctionFlags = flags;
	}


	// Function ParachutePlayer.ParachutePlayer_C.On Land__DelegateSignature
	// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

	void AParachutePlayer_C::On_Land__DelegateSignature() {
		static UFunction* fn = nullptr;
		if (!fn) fn = UObject::FindObject<UFunction>(0xed87ef92);

		AParachutePlayer_C_On_Land__DelegateSignature_Params params;

		auto flags = fn->FunctionFlags;

		UObject::ProcessEvent(fn, &params);

		fn->FunctionFlags = flags;
	}


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
