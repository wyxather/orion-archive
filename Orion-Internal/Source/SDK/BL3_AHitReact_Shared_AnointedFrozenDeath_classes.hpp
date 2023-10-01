#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Shared_AnointedFrozenDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Shared_AnointedFrozenDeath.AHitReact_Shared_AnointedFrozenDeath_C
// 0x0000 (0x0078 - 0x0078)
class UAHitReact_Shared_AnointedFrozenDeath_C : public UOakAction_FrozenDeath
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Shared_AnointedFrozenDeath.AHitReact_Shared_AnointedFrozenDeath_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
