#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ZipUtility.EZipUtilityCompletionState
enum class EZipUtilityCompletionState : uint8_t
{
	SUCCESS                        = 0,
	FAILURE_NOT_FOUND              = 1,
	FAILURE_UNKNOWN                = 2,
	EZipUtilityCompletionState_MAX = 3
};


// Enum ZipUtility.ZipUtilityCompressionLevel
enum class EZipUtilityCompressionLevel : uint8_t
{
	COMPRESSION_LEVEL_NONE         = 0,
	COMPRESSION_LEVEL_FAST         = 1,
	COMPRESSION_LEVEL_NORMAL       = 2,
	COMPRESSION_LEVEL_MAX          = 3
};


// Enum ZipUtility.ZipUtilityCompressionFormat
enum class EZipUtilityCompressionFormat : uint8_t
{
	COMPRESSION_FORMAT_UNKNOWN     = 0,
	COMPRESSION_FORMAT_SEVEN_ZIP   = 1,
	COMPRESSION_FORMAT_ZIP         = 2,
	COMPRESSION_FORMAT_GZIP        = 3,
	COMPRESSION_FORMAT_BZIP2       = 4,
	COMPRESSION_FORMAT_RAR         = 5,
	COMPRESSION_FORMAT_TAR         = 6,
	COMPRESSION_FORMAT_ISO         = 7,
	COMPRESSION_FORMAT_CAB         = 8,
	COMPRESSION_FORMAT_LZMA        = 9,
	COMPRESSION_FORMAT_LZMA86      = 10,
	COMPRESSION_FORMAT_MAX         = 11
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
