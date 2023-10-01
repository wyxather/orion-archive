#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GrenadeThrow_Crouched_Armed_Firing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_GrenadeThrow_Crouched_Armed_Firing.Action_GrenadeThrow_Crouched_Armed_Firing_C
// 0x0000 (0x0228 - 0x0228)
class UAction_GrenadeThrow_Crouched_Armed_Firing_C : public UAction_GrenadeThrow_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_GrenadeThrow_Crouched_Armed_Firing.Action_GrenadeThrow_Crouched_Armed_Firing_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
