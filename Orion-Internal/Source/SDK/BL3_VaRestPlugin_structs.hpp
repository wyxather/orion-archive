#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VaRestPlugin.EVaJson
enum class EVaJson : uint8_t
{
	None                           = 0,
	Null                           = 1,
	String                         = 2,
	Number                         = 3,
	Boolean                        = 4,
	Array                          = 5,
	Object                         = 6,
	EVaJson_MAX                    = 7
};


// Enum VaRestPlugin.ERequestStatus
enum class ERequestStatus : uint8_t
{
	NotStarted                     = 0,
	Processing                     = 1,
	Failed                         = 2,
	Failed_ConnectionError         = 3,
	Succeeded                      = 4,
	ERequestStatus_MAX             = 5
};


// Enum VaRestPlugin.ERequestContentType
enum class ERequestContentType : uint8_t
{
	x_www_form_urlencoded_url      = 0,
	x_www_form_urlencoded_body     = 1,
	json                           = 2,
	binary                         = 3,
	ERequestContentType_MAX        = 4
};


// Enum VaRestPlugin.ERequestVerb
enum class ERequestVerb : uint8_t
{
	GET                            = 0,
	POST                           = 1,
	PUT                            = 2,
	DEL                            = 3,
	CUSTOM                         = 4,
	ERequestVerb_MAX               = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VaRestPlugin.VaRestCallResponse
// 0x0030
struct FVaRestCallResponse
{
	class UVaRestRequestJSON*                          Request;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // 0x0010(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
