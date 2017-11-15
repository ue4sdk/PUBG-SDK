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

	// Class SlateCore.SlateWidgetStyleContainerBase
	// 0x0008 (0x0030 - 0x0028)
	class USlateWidgetStyleContainerBase : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xf53e342d);
			return ptr;
		}

	};


	// Class SlateCore.FontBulkData
	// 0x00A0 (0x00C8 - 0x0028)
	class UFontBulkData : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x6fd0eafc);
			return ptr;
		}

	};


	// Class SlateCore.FontProviderInterface
	// 0x0000 (0x0028 - 0x0028)
	class UFontProviderInterface : public UInterface
	{
	public:

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x83420538);
			return ptr;
		}

	};


	// Class SlateCore.SlateTypes
	// 0x0000 (0x0028 - 0x0028)
	class USlateTypes : public UObject
	{
	public:

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xd3565345);
			return ptr;
		}

	};


	// Class SlateCore.SlateWidgetStyleContainerInterface
	// 0x0000 (0x0028 - 0x0028)
	class USlateWidgetStyleContainerInterface : public UInterface
	{
	public:

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xb83b3e9b);
			return ptr;
		}

	};


	// Class SlateCore.SlateWidgetStyleAsset
	// 0x0008 (0x0030 - 0x0028)
	class USlateWidgetStyleAsset : public UObject
	{
	public:
		class USlateWidgetStyleContainerBase*              CustomStyle;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x60e544d3);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
