#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageSource_CryoFallingImpact_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageSource_CryoFallingImpact.DamageSource_CryoFallingImpact_C
// 0x0000 (0x0098 - 0x0098)
class UDamageSource_CryoFallingImpact_C : public UOakDamageSource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_CryoFallingImpact.DamageSource_CryoFallingImpact_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
