#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Skag_SkagDen_Combat2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ASpawn_Skag_SkagDen_Combat2.ASpawn_Skag_SkagDen_Combat2_C
// 0x0000 (0x01C0 - 0x01C0)
class UASpawn_Skag_SkagDen_Combat2_C : public UGbxAction_SpawnAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ASpawn_Skag_SkagDen_Combat2.ASpawn_Skag_SkagDen_Combat2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
