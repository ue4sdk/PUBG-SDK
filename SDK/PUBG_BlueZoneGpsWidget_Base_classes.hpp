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

	// WidgetBlueprintGeneratedClass BlueZoneGpsWidget_Base.BlueZoneGpsWidget_Base_C
	// 0x0041 (0x0281 - 0x0240)
	class UBlueZoneGpsWidget_Base_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
		struct FVector                                     CachedNextPlayerzoneToCharacterDirection;                 // 0x0248(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		float                                              DangerLength;                                             // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		float                                              SafeLength;                                               // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		float                                              PlayerLength;                                             // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		float                                              NextPlayerzoneToCurrentBlueZoneLength;                    // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		struct FVector                                     SafeLengthPosA;                                           // 0x0264(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		bool                                               bIsWidgetVanishing;                                       // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
		float                                              LastGauge;                                                // 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		class UCurveFloat*                                 ResetCurve;                                               // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		bool                                               bOldIsInNextPlayzone;                                     // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xc618aaed);
			return ptr;
		}


		void IsWarningBp(bool* bIsWarning);
		void TickWaning();
		void SetReset(bool bReset);
		void SetResetTimeCheck(float ResetTimeCheck, float* Result);
		void GetResetTimeCheck(float* ResetTimeCheck);
		void SetPlayzoneReset(bool bNewPlayzoneReset);
		void IsPlayzoneReset(bool* bReset);
		void SetBluezoneReset(bool bNewBluezoneReset);
		void IsBluezoneReset(bool* bBluezoneReset);
		void GetCurrentPlayZoneRadius(float* CurrentPlayzoneRadius);
		void GetCurrentPlayZonePosition(struct FVector* CurrentPlayzonePosition);
		void IsResetBp(bool* bReset);
		void GetNextplayzoneRadiusBp(float* NextPlayzoneRadius);
		void GetNextPlayzonePositionBp(struct FVector* NextPlayzonePosition);
		void GetBluezoneStateBp(int* Stae);
		void IsStateBluezoneReady(bool* IsReady);
		struct FText GetBluezoneTimeText();
		void UpdateGauge();
		void BluezoneGpsMainPrepass(class UWidget* BoundWidget);
		void GetTslCharacter(class ACharacter** Character);
		struct FLinearColor GetIsInNextPlayzone();
		void IsInNextPlayzoneBp(bool* bIsIn);
		void GetNextPlayerzoneToCurrentBlueZoneLength(float* Length);
		void GetPlayerLength(float* PlayerLength);
		void GetNextPlayerzoneToCharacterDirection(float Scale, struct FVector* Direction);
		void GetSafeLength(float* SafeLength, struct FVector* A, struct FVector* B);
		void GetBluezonePositionAndRadius(struct FVector* BluezonePosition, float* BluezoneRadius);
		void GetCurrentPlayzonePositionAndRadius(struct FVector* CurrentPlayzonePosition, float* CurrentPlayzoneRadius);
		void GetNextPlayzonePositionAndRadius(struct FVector* NextPlayzonePosition, float* Radius);
		void GetDangerLength(float* DangerLength, struct FVector* A, struct FVector* B);
		void Construct();
		void MainPrepassWidgetVisibilitySetting(class UWidget* BoundWidget);
		void OnWarning();
		void OnLeaveNextPlayzone();
		void OnEnterNextPlayzone();
		void ChildResetBluezone(float Gauge);
		void ChildResetPlayzone(float Gauge);
		void ChildUpdateGauge(float Gauge);
		void ExecuteUbergraph_BlueZoneGpsWidget_Base(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
