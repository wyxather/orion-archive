#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_GFxActionSkill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_GFxActionSkill.BPWidget_GFxActionSkill_C
// 0x0000 (0x07A0 - 0x07A0)
class UBPWidget_GFxActionSkill_C : public UGFxActionSkillWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_GFxActionSkill.BPWidget_GFxActionSkill_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
