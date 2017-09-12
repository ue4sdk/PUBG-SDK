#pragma once

// PlayerUnknown's Battlegrounds (2.6.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack
{
	EMediaPlayerTrack__Audio       = 0,
	EMediaPlayerTrack__Binary      = 1,
	EMediaPlayerTrack__Caption     = 2,
	EMediaPlayerTrack__Script      = 3,
	EMediaPlayerTrack__Subtitle    = 4,
	EMediaPlayerTrack__Text        = 5,
	EMediaPlayerTrack__Video       = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaSubtitle
// 0x0030
struct FMediaSubtitle
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct MediaAssets.MediaPlayerOverlay
// 0x0028
struct FMediaPlayerOverlay
{
	unsigned char                                      HasPosition : 1;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     Position;                                                 // 0x0004(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0010(0x0018)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
