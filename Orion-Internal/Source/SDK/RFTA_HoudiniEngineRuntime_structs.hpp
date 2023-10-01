#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"
#include "RFTA_Engine_classes.hpp"
#include "RFTA_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum HoudiniEngineRuntime.EHoudiniVertexAttributeDataType
enum class EHoudiniVertexAttributeDataType : uint8_t
{
	VADT_Float                     = 0,
	VADT_Int32                     = 1,
	VADT_Bool                      = 2,
	VADT_MAX                       = 3
};


// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8_t
{
	Xform                          = 0,
	Bounder                        = 1,
	Unsupported                    = 2,
	EHoudiniHandleType_MAX         = 3
};


// Enum HoudiniEngineRuntime.EHoudiniToolSelectionType
enum class EHoudiniToolSelectionType : uint8_t
{
	HTOOL_SELECTION_ALL            = 0,
	HTOOL_SELECTION_WORLD_ONLY     = 1,
	HTOOL_SELECTION_CB_ONLY        = 2,
	HTOOL_SELECTION_MAX            = 3
};


// Enum HoudiniEngineRuntime.EHoudiniToolType
enum class EHoudiniToolType : uint8_t
{
	HTOOLTYPE_GENERATOR            = 0,
	HTOOLTYPE_OPERATOR_SINGLE      = 1,
	HTOOLTYPE_OPERATOR_MULTI       = 2,
	HTOOLTYPE_OPERATOR_BATCH       = 3,
	HTOOLTYPE_MAX                  = 4
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsAxisImport
enum class EHoudiniRuntimeSettingsAxisImport : uint8_t
{
	HRSAI_Unreal                   = 0,
	HRSAI_Houdini                  = 1,
	HRSAI_MAX                      = 2
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Nothing                  = 2,
	HRSRF_MAX                      = 3
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_MAX                      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HoudiniEngineRuntime.HoudiniToolDirectory
// 0x0030
struct FHoudiniToolDirectory
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              Path;                                                     // 0x0010(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	class FString                                      ContentDirID;                                             // 0x0020(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
