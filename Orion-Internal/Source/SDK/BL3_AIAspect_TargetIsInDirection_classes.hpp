#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAspect_TargetIsInDirection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAspect_TargetIsInDirection.AIAspect_TargetIsInDirection_C
// 0x0000 (0x0650 - 0x0650)
class UAIAspect_TargetIsInDirection_C : public UAIAspect_Rotation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAspect_TargetIsInDirection.AIAspect_TargetIsInDirection_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
