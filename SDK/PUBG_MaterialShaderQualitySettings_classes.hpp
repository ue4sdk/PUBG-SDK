#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
	// 0x0018 (0x0040 - 0x0028)
	class UShaderPlatformQualitySettings : public UObject {
	public:
		struct FMaterialQualityOverrides                   QualityOverrides[0x3];                                    // 0x0028(0x0006) (CPF_Edit, CPF_Config)
		unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x7cd504f1);
			return ptr;
		}

	};


	// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
	// 0x0050 (0x0078 - 0x0028)
	class UMaterialShaderQualitySettings : public UObject {
	public:
		TMap<struct FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                        // 0x0028(0x0050) (CPF_ZeroConstructor)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x98df038f);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
