#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenu_GunnerSkillTree_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPMenu_GunnerSkillTree.BPMenu_GunnerSkillTree_C
// 0x0000 (0x0F70 - 0x0F70)
class UBPMenu_GunnerSkillTree_C : public UGFxGunnerSkillScreenTree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_GunnerSkillTree.BPMenu_GunnerSkillTree_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
