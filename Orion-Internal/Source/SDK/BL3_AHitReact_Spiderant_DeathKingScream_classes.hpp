#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Spiderant_DeathKingScream_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C
// 0x0008 (0x0208 - 0x0200)
class UAHitReact_Spiderant_DeathKingScream_C : public UOakAction_PhysicalDeath
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
