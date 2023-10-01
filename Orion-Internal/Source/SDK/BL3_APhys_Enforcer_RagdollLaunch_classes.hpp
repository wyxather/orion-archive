#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Enforcer_RagdollLaunch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass APhys_Enforcer_RagdollLaunch.APhys_Enforcer_RagdollLaunch_C
// 0x0000 (0x0190 - 0x0190)
class UAPhys_Enforcer_RagdollLaunch_C : public UAPhys_Enemy_RagdollLaunch_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass APhys_Enforcer_RagdollLaunch.APhys_Enforcer_RagdollLaunch_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
