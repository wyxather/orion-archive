#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Select_Enter_NoActionSkill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Select_Enter_NoActionSkill.Action_Select_Enter_NoActionSkill_C
// 0x0000 (0x0218 - 0x0218)
class UAction_Select_Enter_NoActionSkill_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Select_Enter_NoActionSkill.Action_Select_Enter_NoActionSkill_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
