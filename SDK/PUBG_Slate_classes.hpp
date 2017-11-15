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

	// Class Slate.ButtonWidgetStyle
	// 0x02A8 (0x02D8 - 0x0030)
	class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FButtonStyle                                ButtonStyle;                                              // 0x0030(0x02A8) (CPF_Edit, CPF_BlueprintVisible)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xab0f29bf);
			return ptr;
		}

	};


	// Class Slate.CheckBoxWidgetStyle
	// 0x05E0 (0x0610 - 0x0030)
	class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0030(0x05E0) (CPF_Edit)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xd194c696);
			return ptr;
		}

	};


	// Class Slate.ComboBoxWidgetStyle
	// 0x0428 (0x0458 - 0x0030)
	class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0030(0x0428) (CPF_Edit)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x2d9d3fb4);
			return ptr;
		}

	};


	// Class Slate.ComboButtonWidgetStyle
	// 0x03E0 (0x0410 - 0x0030)
	class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0030(0x03E0) (CPF_Edit)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xb86cb8f5);
			return ptr;
		}

	};


	// Class Slate.EditableTextBoxWidgetStyle
	// 0x0870 (0x08A0 - 0x0030)
	class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0030(0x0870) (CPF_Edit)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x5ca64be7);
			return ptr;
		}

	};


	// Class Slate.EditableTextWidgetStyle
	// 0x0248 (0x0278 - 0x0030)
	class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0030(0x0248) (CPF_Edit)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xbb1a84c);
			return ptr;
		}

	};


	// Class Slate.ProgressWidgetStyle
	// 0x01B8 (0x01E8 - 0x0030)
	class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0030(0x01B8) (CPF_Edit, CPF_BlueprintVisible)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x59582c44);
			return ptr;
		}

	};


	// Class Slate.ScrollBarWidgetStyle
	// 0x0518 (0x0548 - 0x0030)
	class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0030(0x0518) (CPF_Edit)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x86b63cfd);
			return ptr;
		}

	};


	// Class Slate.ScrollBoxWidgetStyle
	// 0x0248 (0x0278 - 0x0030)
	class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0030(0x0248) (CPF_Edit)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x36373efd);
			return ptr;
		}

	};


	// Class Slate.SpinBoxWidgetStyle
	// 0x0310 (0x0340 - 0x0030)
	class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0030(0x0310) (CPF_Edit)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x35673a76);
			return ptr;
		}

	};


	// Class Slate.TextBlockWidgetStyle
	// 0x0208 (0x0238 - 0x0030)
	class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0030(0x0208) (CPF_Edit)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x80f30493);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
