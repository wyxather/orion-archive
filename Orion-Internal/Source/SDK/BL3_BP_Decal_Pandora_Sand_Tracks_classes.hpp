#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Decal_Pandora_Sand_Tracks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Decal_Pandora_Sand_Tracks.BP_Decal_Pandora_Sand_Tracks_C
// 0x0000 (0x04DF - 0x04DF)
class ABP_Decal_Pandora_Sand_Tracks_C : public ABP_DecalActor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal_Pandora_Sand_Tracks.BP_Decal_Pandora_Sand_Tracks_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
