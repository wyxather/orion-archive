#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ACLPlugin.ACLVectorFormat
enum class EACLVectorFormat : uint8_t
{
	ACLVF_Vector3                  = 0,
	ACLVF_Vector3_Variable         = 1,
	ACLVF_Vector3_MAX              = 2
};


// Enum ACLPlugin.ACLRotationFormat
enum class EACLRotationFormat : uint8_t
{
	ACLRF_Quat                     = 0,
	ACLRF_QuatDropW                = 1,
	ACLRF_QuatDropW_Variable       = 2,
	ACLRF_MAX                      = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
