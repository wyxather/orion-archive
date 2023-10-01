#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_ArtifactStat_ATLAS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_ArtifactStat_ATLAS.Ability_ArtifactStat_ATLAS_C
// 0x000E (0x0128 - 0x011A)
class UAbility_ArtifactStat_ATLAS_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_ArtifactStat_ATLAS.Ability_ArtifactStat_ATLAS_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_Ability_ArtifactStat_ATLAS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
