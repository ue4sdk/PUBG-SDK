#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// Class AudioMixer.SoundEffectLowPassFilter
	// 0x0000 (0x0090 - 0x0090)
	class USoundEffectLowPassFilter : public USoundEffectSource {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x69f2efb1);
			return ptr;
		}

	};


	// Class AudioMixer.SoundEffectLowPassFilterPreset
	// 0x0008 (0x0048 - 0x0040)
	class USoundEffectLowPassFilterPreset : public USoundEffectSourcePreset {
	public:
		struct FSoundEffectLowPassFilterSettings           Settings;                                                 // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xb0a79ae4);
			return ptr;
		}

	};


	// Class AudioMixer.SourceEffectFilter
	// 0x0000 (0x0090 - 0x0090)
	class USourceEffectFilter : public USoundEffectSource {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x3f5200d2);
			return ptr;
		}

	};


	// Class AudioMixer.SoundEffectSourceFilterPreset
	// 0x0010 (0x0050 - 0x0040)
	class USoundEffectSourceFilterPreset : public USoundEffectSourcePreset {
	public:
		struct FSourceEffectFilterSettings                 Settings;                                                 // 0x0040(0x0010) (CPF_Edit)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x74d70c26);
			return ptr;
		}

	};


	// Class AudioMixer.SoundEffectSubmixEQ
	// 0x0000 (0x0090 - 0x0090)
	class USoundEffectSubmixEQ : public USoundEffectSource {
	public:

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x93829be0);
			return ptr;
		}

	};


	// Class AudioMixer.SoundEffectSubmixEQPreset
	// 0x0008 (0x0048 - 0x0040)
	class USoundEffectSubmixEQPreset : public USoundEffectSourcePreset {
	public:
		struct FSubmixEffectEQSettings                     Settings;                                                 // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x47feb9dd);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
