#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPSkel_Corpse_Psycho_Male_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPSkel_Corpse_Psycho_Male.BPSkel_Corpse_Psycho_Male_C
// 0x0000 (0x04E0 - 0x04E0)
class ABPSkel_Corpse_Psycho_Male_C : public AGbxSkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPSkel_Corpse_Psycho_Male.BPSkel_Corpse_Psycho_Male_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
