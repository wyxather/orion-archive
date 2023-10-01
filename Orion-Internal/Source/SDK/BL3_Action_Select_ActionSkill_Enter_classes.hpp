#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Select_ActionSkill_Enter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Select_ActionSkill_Enter.Action_Select_ActionSkill_Enter_C
// 0x0000 (0x0218 - 0x0218)
class UAction_Select_ActionSkill_Enter_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Select_ActionSkill_Enter.Action_Select_ActionSkill_Enter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
