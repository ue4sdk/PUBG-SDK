#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// Class AkAudio.AkAutoPlayInterface
	// 0x0000 (0x0028 - 0x0028)
	class UAkAutoPlayInterface : public UInterface {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xe56258d9);
			return ptr;
		}

	};


	// Class AkAudio.AkAmbientSound
	// 0x0020 (0x03C0 - 0x03A0)
	class AAkAmbientSound : public AActor {
	public:
		unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET
		class UAkComponent*                                AkComponent;                                              // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
		float                                              AutoPlayDistance;                                         // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xdbd0f16);
			return ptr;
		}


		void StopAmbientSound();
		void StartAmbientSound();
		bool IsCurrentlyPlaying();
	};


	// Class AkAudio.AkAudioBank
	// 0x0008 (0x0030 - 0x0028)
	class UAkAudioBank : public UObject {
	public:
		bool                                               AutoLoad;                                                 // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xf57ed491);
			return ptr;
		}

	};


	// Class AkAudio.AkAudioEvent
	// 0x0010 (0x0038 - 0x0028)
	class UAkAudioEvent : public UObject {
	public:
		class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              MaxAttenuationRadius;                                     // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x781374f1);
			return ptr;
		}

	};


	// Class AkAudio.AkAuxBus
	// 0x0010 (0x0038 - 0x0028)
	class UAkAuxBus : public UObject {
	public:
		class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xb0caae0f);
			return ptr;
		}

	};


	// Class AkAudio.AkComponent
	// 0x00F0 (0x03F0 - 0x0300)
	class UAkComponent : public USceneComponent {
	public:
		bool                                               StopWhenOwnerDestroyed;                                   // 0x0300(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDynamicReverb;                                           // 0x0301(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		bool                                               bUseDoppler;                                              // 0x0302(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x1];                                       // 0x0303(0x0001) MISSED OFFSET
		float                                              AttenuationScalingFactor;                                 // 0x0304(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              OcclusionRefreshInterval;                                 // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
		class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FString                                     EventName;                                                // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		unsigned char                                      UnknownData02[0xC8];                                      // 0x0328(0x00C8) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x23176db8);
			return ptr;
		}


		void UseReverbVolumes(bool inUseReverbVolumes);
		void StopPlayingID(int PlayingID);
		void Stop();
		void SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
		void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
		void SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
		void SetOutputBusVolume(float BusVolume);
		void SetAttenuationScalingFactor(float Value);
		void SetActiveListeners(int in_uListenerMask);
		void PostTrigger(const struct FString& Trigger);
		int PostAssociatedAkEvent();
		int PostAkEventByName(const struct FString& in_EventName);
		int PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName);
		bool IsCurrentlyPlaying();
		float GetAttenuationRadius();
		void CalculateRelativeSpeed();
		void CalculateDynamicReverb();
	};


	// Class AkAudio.AkGameplayStatics
	// 0x0000 (0x0028 - 0x0028)
	class UAkGameplayStatics : public UBlueprintFunctionLibrary {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xc77bd920);
			return ptr;
		}


		void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
		void STATIC_UnloadBankByName(const struct FString& BankName);
		void STATIC_UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName);
		void STATIC_StopProfilerCapture();
		void STATIC_StopOutputCapture();
		void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
		void STATIC_StopAll();
		void STATIC_StopActor(class AActor* Actor);
		void STATIC_StartProfilerCapture(const struct FString& Filename);
		void STATIC_StartOutputCapture(const struct FString& Filename);
		void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
		class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, bool AutoDestroy);
		void STATIC_SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
		void STATIC_SetState(const struct FName& StateGroup, const struct FName& State);
		void STATIC_SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
		void STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor);
		void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
		void STATIC_PostTrigger(const struct FName& Trigger, class AActor* Actor);
		void STATIC_PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
		int STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
		void STATIC_PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
		int STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject);
		int STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
		void STATIC_LoadInitBank();
		void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
		void STATIC_LoadBankByName(const struct FString& BankName);
		void STATIC_LoadBank(class UAkAudioBank* Bank, const struct FString& BankName);
		class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType);
		void STATIC_ClearBanks();
		void STATIC_AddOutputCaptureMarker(const struct FString& MarkerText);
	};


	// Class AkAudio.AkReverbVolume
	// 0x0038 (0x0410 - 0x03D8)
	class AAkReverbVolume : public AVolume {
	public:
		unsigned char                                      bEnabled : 1;                                             // 0x03D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net)
		unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
		class UAkAuxBus*                                   AuxBus;                                                   // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FString                                     AuxBusName;                                               // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		float                                              SendLevel;                                                // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FadeRate;                                                 // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              Priority;                                                 // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
		class AAkReverbVolume*                             NextLowerPriorityAkReverbVolume;                          // 0x0408(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x4e0fe485);
			return ptr;
		}

	};


	// Class AkAudio.AkSettings
	// 0x0070 (0x0098 - 0x0028)
	class UAkSettings : public UObject {
	public:
		unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
		struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (CPF_Edit, CPF_Config)
		struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0040(0x0010) (CPF_Edit, CPF_Config)
		struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0050(0x0010) (CPF_Edit, CPF_Config)
		unsigned char                                      UnknownData01[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x4c712b70);
			return ptr;
		}

	};


	// Class AkAudio.InterpTrackAkAudioEvent
	// 0x0018 (0x00A8 - 0x0090)
	class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase {
	public:
		TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (CPF_ZeroConstructor)
		unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
		unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xd6e42d8);
			return ptr;
		}

	};


	// Class AkAudio.InterpTrackAkAudioRTPC
	// 0x0018 (0x00A8 - 0x0090)
	class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {
	public:
		struct FString                                     Param;                                                    // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
		unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
		unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x7bcdfd49);
			return ptr;
		}

	};


	// Class AkAudio.InterpTrackInstAkAudioEvent
	// 0x0008 (0x0030 - 0x0028)
	class UInterpTrackInstAkAudioEvent : public UInterpTrackInst {
	public:
		float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xae9a0f0);
			return ptr;
		}

	};


	// Class AkAudio.InterpTrackInstAkAudioRTPC
	// 0x0008 (0x0030 - 0x0028)
	class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst {
	public:
		float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xa6ed0161);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
