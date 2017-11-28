#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// Class MovieSceneTracks.MovieScene3DConstraintSection
	// 0x0010 (0x0050 - 0x0040)
	class UMovieScene3DConstraintSection : public UMovieSceneSection {
	public:
		struct FGuid                                       ConstraintId;                                             // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x82ac6d54);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieScene3DAttachSection
	// 0x0018 (0x0068 - 0x0050)
	class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection {
	public:
		struct FName                                       AttachSocketName;                                         // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FName                                       AttachComponentName;                                      // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      bConstrainTx : 1;                                         // 0x0060(0x0001) (CPF_Edit)
		unsigned char                                      bConstrainTy : 1;                                         // 0x0060(0x0001) (CPF_Edit)
		unsigned char                                      bConstrainTz : 1;                                         // 0x0060(0x0001) (CPF_Edit)
		unsigned char                                      bConstrainRx : 1;                                         // 0x0060(0x0001) (CPF_Edit)
		unsigned char                                      bConstrainRy : 1;                                         // 0x0060(0x0001) (CPF_Edit)
		unsigned char                                      bConstrainRz : 1;                                         // 0x0060(0x0001) (CPF_Edit)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x9e748086);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieScene3DPathSection
	// 0x0080 (0x00D0 - 0x0050)
	class UMovieScene3DPathSection : public UMovieScene3DConstraintSection {
	public:
		struct FRichCurve                                  TimingCurve;                                              // 0x0050(0x0078) (CPF_Edit)
		TEnumAsByte<EMovieScene3DPathSection_Axis>         FrontAxisEnum;                                            // 0x00C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TEnumAsByte<EMovieScene3DPathSection_Axis>         UpAxisEnum;                                               // 0x00C9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x2];                                       // 0x00CA(0x0002) MISSED OFFSET
		unsigned char                                      bFollow : 1;                                              // 0x00CC(0x0001) (CPF_Edit)
		unsigned char                                      bReverse : 1;                                             // 0x00CC(0x0001) (CPF_Edit)
		unsigned char                                      bForceUpright : 1;                                        // 0x00CC(0x0001) (CPF_Edit)
		unsigned char                                      UnknownData01[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xeb04a6b4);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieScene3DConstraintTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieScene3DConstraintTrack : public UMovieSceneTrack {
	public:
		TArray<class UMovieSceneSection*>                  ConstraintSections;                                       // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x810ca164);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieScene3DAttachTrack
	// 0x0000 (0x0038 - 0x0038)
	class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xeedf98a2);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieScene3DPathTrack
	// 0x0000 (0x0038 - 0x0038)
	class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x7c2b7ac4);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieScene3DTransformSection
	// 0x0440 (0x0480 - 0x0040)
	class UMovieScene3DTransformSection : public UMovieSceneSection {
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
		struct FRichCurve                                  Translation[0x3];                                         // 0x0048(0x0078)
		struct FRichCurve                                  Rotation[0x3];                                            // 0x01B0(0x0078)
		struct FRichCurve                                  Scale[0x3];                                               // 0x0318(0x0078)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x1e46f97b);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneActorReferenceSection
	// 0x0098 (0x00D8 - 0x0040)
	class UMovieSceneActorReferenceSection : public UMovieSceneSection {
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
		struct FIntegralCurve                              ActorGuidIndexCurve;                                      // 0x0048(0x0070)
		unsigned char                                      UnknownData01[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
		TArray<struct FString>                             ActorGuidStrings;                                         // 0x00C8(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x342b4e42);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneAudioSection
	// 0x0018 (0x0058 - 0x0040)
	class UMovieSceneAudioSection : public UMovieSceneSection {
	public:
		class USoundBase*                                  Sound;                                                    // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              AudioStartTime;                                           // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              AudioDilationFactor;                                      // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              AudioVolume;                                              // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bSuppressSubtitles;                                       // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xe0e4e68c);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneAudioTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneAudioTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  AudioSections;                                            // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xadf3781c);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneBoolSection
	// 0x0080 (0x00C0 - 0x0040)
	class UMovieSceneBoolSection : public UMovieSceneSection {
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
		bool                                               DefaultValue;                                             // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
		struct FIntegralCurve                              BoolCurve;                                                // 0x0050(0x0070)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xa88c7908);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneVisibilitySection
	// 0x0000 (0x00C0 - 0x00C0)
	class UMovieSceneVisibilitySection : public UMovieSceneBoolSection {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xc3b889f0);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneByteSection
	// 0x0078 (0x00B8 - 0x0040)
	class UMovieSceneByteSection : public UMovieSceneSection {
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
		struct FIntegralCurve                              ByteCurve;                                                // 0x0048(0x0070)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x8e048572);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneCameraAnimSection
	// 0x0028 (0x0068 - 0x0040)
	class UMovieSceneCameraAnimSection : public UMovieSceneSection {
	public:
		class UCameraAnim*                                 CameraAnim;                                               // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              PlayRate;                                                 // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              PlayScale;                                                // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              BlendInTime;                                              // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              BlendOutTime;                                             // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bLooping;                                                 // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x1];                                       // 0x0059(0x0001) MISSED OFFSET
		TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // 0x005A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x1];                                       // 0x005B(0x0001) MISSED OFFSET
		struct FRotator                                    UserDefinedPlaySpace;                                     // 0x005C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x582b7c2a);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneCameraAnimTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  CameraAnimSections;                                       // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x7c80530e);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneCameraCutSection
	// 0x0010 (0x0050 - 0x0040)
	class UMovieSceneCameraCutSection : public UMovieSceneSection {
	public:
		struct FGuid                                       CameraGuid;                                               // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x2a18d337);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneCameraCutTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xf8e18213);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneCameraShakeSection
	// 0x0020 (0x0060 - 0x0040)
	class UMovieSceneCameraShakeSection : public UMovieSceneSection {
	public:
		class UClass*                                      ShakeClass;                                               // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              PlayScale;                                                // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // 0x004C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
		struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0050(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xeaef7991);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneCameraShakeTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  CameraShakeSections;                                      // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x9b8f1599);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneColorSection
	// 0x01E8 (0x0228 - 0x0040)
	class UMovieSceneColorSection : public UMovieSceneSection {
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
		struct FRichCurve                                  RedCurve;                                                 // 0x0048(0x0078)
		struct FRichCurve                                  GreenCurve;                                               // 0x00C0(0x0078)
		struct FRichCurve                                  BlueCurve;                                                // 0x0138(0x0078)
		struct FRichCurve                                  AlphaCurve;                                               // 0x01B0(0x0078)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xe71e3d91);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneEventSection
	// 0x0068 (0x00A8 - 0x0040)
	class UMovieSceneEventSection : public UMovieSceneSection {
	public:
		struct FNameCurve                                  Events;                                                   // 0x0040(0x0068)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x82b1e22);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneEventTrack
	// 0x0018 (0x0040 - 0x0028)
	class UMovieSceneEventTrack : public UMovieSceneNameableTrack {
	public:
		unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x0028(0x0001) (CPF_Edit)
		unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x0028(0x0001) (CPF_Edit)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
		TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0030(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xe5e927e6);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneFloatSection
	// 0x0080 (0x00C0 - 0x0040)
	class UMovieSceneFloatSection : public UMovieSceneSection {
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
		struct FRichCurve                                  FloatCurve;                                               // 0x0048(0x0078)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x903dead0);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneFadeSection
	// 0x0018 (0x00D8 - 0x00C0)
	class UMovieSceneFadeSection : public UMovieSceneFloatSection {
	public:
		struct FLinearColor                                FadeColor;                                                // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      bFadeAudio : 1;                                           // 0x00D0(0x0001) (CPF_Edit)
		unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x6c39405e);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneSlomoSection
	// 0x0000 (0x00C0 - 0x00C0)
	class UMovieSceneSlomoSection : public UMovieSceneFloatSection {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xc70048e6);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
	// 0x0018 (0x0058 - 0x0040)
	class UMovieSceneLevelVisibilitySection : public UMovieSceneSection {
	public:
		TEnumAsByte<ELevelVisibility>                      Visibility;                                               // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
		TArray<struct FName>                               LevelNames;                                               // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x80c588b8);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieScenePropertyTrack
	// 0x0028 (0x0050 - 0x0028)
	class UMovieScenePropertyTrack : public UMovieSceneNameableTrack {
	public:
		struct FName                                       PropertyName;                                             // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FString                                     PropertyPath;                                             // 0x0030(0x0010) (CPF_ZeroConstructor)
		TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0040(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xd85c65a1);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xf0765620);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneParameterSection
	// 0x0030 (0x0070 - 0x0040)
	class UMovieSceneParameterSection : public UMovieSceneSection {
	public:
		TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                            // 0x0040(0x0010) (CPF_ZeroConstructor)
		TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            // 0x0050(0x0010) (CPF_ZeroConstructor)
		TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                             // 0x0060(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xa12d5071);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneMaterialTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xb722f981);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
	// 0x0008 (0x0040 - 0x0038)
	class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack {
	public:
		int                                                MaterialIndex;                                            // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x42919d0c);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneParticleParameterTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x2ccf3f03);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneParticleSection
	// 0x0070 (0x00B0 - 0x0040)
	class UMovieSceneParticleSection : public UMovieSceneSection {
	public:
		struct FIntegralCurve                              ParticleKeys;                                             // 0x0040(0x0070)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xba5d1d0a);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneParticleTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneParticleTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  ParticleSections;                                         // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xaa84aeee);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieScene3DTransformTrack
	// 0x0000 (0x0050 - 0x0050)
	class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xdf2ff3ff);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneActorReferenceTrack
	// 0x0000 (0x0050 - 0x0050)
	class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x81911006);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneBoolTrack
	// 0x0000 (0x0050 - 0x0050)
	class UMovieSceneBoolTrack : public UMovieScenePropertyTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xda8d53f0);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneVisibilityTrack
	// 0x0000 (0x0050 - 0x0050)
	class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xa0322d58);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneByteTrack
	// 0x0008 (0x0058 - 0x0050)
	class UMovieSceneByteTrack : public UMovieScenePropertyTrack {
	public:
		class UEnum*                                       Enum;                                                     // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xf39cd8b6);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneColorTrack
	// 0x0008 (0x0058 - 0x0050)
	class UMovieSceneColorTrack : public UMovieScenePropertyTrack {
	public:
		bool                                               bIsSlateColor;                                            // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x17c73999);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneFloatTrack
	// 0x0000 (0x0050 - 0x0050)
	class UMovieSceneFloatTrack : public UMovieScenePropertyTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x46b2b638);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneFadeTrack
	// 0x0000 (0x0050 - 0x0050)
	class UMovieSceneFadeTrack : public UMovieSceneFloatTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xf00c583a);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneSlomoTrack
	// 0x0000 (0x0050 - 0x0050)
	class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x2dc8b602);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneStringTrack
	// 0x0000 (0x0050 - 0x0050)
	class UMovieSceneStringTrack : public UMovieScenePropertyTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xde6125a1);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneVectorTrack
	// 0x0008 (0x0058 - 0x0050)
	class UMovieSceneVectorTrack : public UMovieScenePropertyTrack {
	public:
		int                                                NumChannelsUsed;                                          // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xa59f1d9f);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
	// 0x0028 (0x0068 - 0x0040)
	class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection {
	public:
		class UAnimSequence*                               AnimSequence;                                             // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
		class UAnimSequenceBase*                           Animation;                                                // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              StartOffset;                                              // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              EndOffset;                                                // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              PlayRate;                                                 // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      bReverse : 1;                                             // 0x005C(0x0001) (CPF_Edit)
		unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
		struct FName                                       SlotName;                                                 // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x74cf56ed);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x3b7713fd);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneSpawnTrack
	// 0x0020 (0x0048 - 0x0028)
	class UMovieSceneSpawnTrack : public UMovieSceneTrack {
	public:
		TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)
		struct FGuid                                       ObjectGuid;                                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x3172d721);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneStringSection
	// 0x0080 (0x00C0 - 0x0040)
	class UMovieSceneStringSection : public UMovieSceneSection {
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
		struct FStringCurve                                StringCurve;                                              // 0x0048(0x0078)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xdb186639);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneSubSection
	// 0x0058 (0x0098 - 0x0040)
	class UMovieSceneSubSection : public UMovieSceneSection {
	public:
		float                                              StartOffset;                                              // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              TimeScale;                                                // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              PrerollTime;                                              // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
		class UMovieSceneSequence*                         SubSequence;                                              // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TLazyObjectPtr<class AActor>                       ActorToRecord;                                            // 0x0058(0x0020) (CPF_Edit, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
		struct FString                                     TargetSequenceName;                                       // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
		struct FDirectoryPath                              TargetPathToRecordTo;                                     // 0x0088(0x0010) (CPF_Edit)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x56668ae8);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneCinematicShotSection
	// 0x0018 (0x00B0 - 0x0098)
	class UMovieSceneCinematicShotSection : public UMovieSceneSubSection {
	public:
		struct FText                                       DisplayName;                                              // 0x0098(0x0018)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xbc44d87);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneSubTrack
	// 0x0010 (0x0038 - 0x0028)
	class UMovieSceneSubTrack : public UMovieSceneNameableTrack {
	public:
		TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x31c8acd0);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneCinematicShotTrack
	// 0x0000 (0x0038 - 0x0038)
	class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x7ed84923);
			return ptr;
		}

	};


	// Class MovieSceneTracks.MovieSceneVectorSection
	// 0x01F0 (0x0230 - 0x0040)
	class UMovieSceneVectorSection : public UMovieSceneSection {
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
		struct FRichCurve                                  Curves[0x4];                                              // 0x0048(0x0078)
		int                                                ChannelsUsed;                                             // 0x0228(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x022C(0x0004) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x9d01a81b);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
