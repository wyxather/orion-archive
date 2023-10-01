#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PunkFemale_SMG_Reload_Crouched_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PunkFemale_SMG_Reload_Crouched.Action_PunkFemale_SMG_Reload_Crouched_C
// 0x0000 (0x0218 - 0x0218)
class UAction_PunkFemale_SMG_Reload_Crouched_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PunkFemale_SMG_Reload_Crouched.Action_PunkFemale_SMG_Reload_Crouched_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
