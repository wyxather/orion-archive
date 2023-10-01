#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IActionSkill_Beastmaster_DLCSkill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C
// 0x0000 (0x0028 - 0x0028)
class UIActionSkill_Beastmaster_DLCSkill_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C");
		return ptr;
	}


	void TrapFailedToSpawn(bool* res);
	void EndTrapEarly(bool* res);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
