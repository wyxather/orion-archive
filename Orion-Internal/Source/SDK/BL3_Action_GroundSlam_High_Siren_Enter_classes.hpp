#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GroundSlam_High_Siren_Enter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_GroundSlam_High_Siren_Enter.Action_GroundSlam_High_Siren_Enter_C
// 0x0000 (0x0220 - 0x0220)
class UAction_GroundSlam_High_Siren_Enter_C : public UAction_GroundSlam_High_Enter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_GroundSlam_High_Siren_Enter.Action_GroundSlam_High_Siren_Enter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
