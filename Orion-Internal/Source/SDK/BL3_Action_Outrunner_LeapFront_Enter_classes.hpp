#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Outrunner_LeapFront_Enter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Outrunner_LeapFront_Enter.Action_Outrunner_LeapFront_Enter_C
// 0x0000 (0x0220 - 0x0220)
class UAction_Outrunner_LeapFront_Enter_C : public UAction_Vehicle_Interpolate_SharedSettings_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Outrunner_LeapFront_Enter.Action_Outrunner_LeapFront_Enter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
