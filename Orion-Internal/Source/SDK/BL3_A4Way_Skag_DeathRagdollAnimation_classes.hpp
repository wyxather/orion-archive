#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A4Way_Skag_DeathRagdollAnimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A4Way_Skag_DeathRagdollAnimation.A4Way_Skag_DeathRagdollAnimation_C
// 0x0000 (0x00C8 - 0x00C8)
class UA4Way_Skag_DeathRagdollAnimation_C : public UGbxAction_DirectionContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A4Way_Skag_DeathRagdollAnimation.A4Way_Skag_DeathRagdollAnimation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
