#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACond_PsychoMaleShared_JumpByStance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ACond_PsychoMaleShared_JumpByStance.ACond_PsychoMaleShared_JumpByStance_C
// 0x0000 (0x0078 - 0x0078)
class UACond_PsychoMaleShared_JumpByStance_C : public UGBXAction_Condition_ByStance_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ACond_PsychoMaleShared_JumpByStance.ACond_PsychoMaleShared_JumpByStance_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
