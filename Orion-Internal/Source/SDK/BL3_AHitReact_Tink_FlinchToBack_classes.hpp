#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Tink_FlinchToBack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Tink_FlinchToBack.AHitReact_Tink_FlinchToBack_C
// 0x0000 (0x0248 - 0x0248)
class UAHitReact_Tink_FlinchToBack_C : public UGBXAction_EnemyVariableParent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Tink_FlinchToBack.AHitReact_Tink_FlinchToBack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
