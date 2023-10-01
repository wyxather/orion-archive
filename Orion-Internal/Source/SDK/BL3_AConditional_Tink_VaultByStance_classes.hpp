#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AConditional_Tink_VaultByStance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AConditional_Tink_VaultByStance.AConditional_Tink_VaultByStance_C
// 0x0000 (0x0078 - 0x0078)
class UAConditional_Tink_VaultByStance_C : public UGBXAction_Condition_ByStance_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AConditional_Tink_VaultByStance.AConditional_Tink_VaultByStance_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
