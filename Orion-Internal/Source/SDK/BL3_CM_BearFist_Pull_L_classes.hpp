#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CM_BearFist_Pull_L_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CM_BearFist_Pull_L.CM_BearFist_Pull_L_C
// 0x0000 (0x08A8 - 0x08A8)
class UCM_BearFist_Pull_L_C : public UOakControlledMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CM_BearFist_Pull_L.CM_BearFist_Pull_L_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
