#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_TinkLoot_Gib_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_TinkLoot_Gib.AHitReact_TinkLoot_Gib_C
// 0x0008 (0x08F8 - 0x08F0)
class UAHitReact_TinkLoot_Gib_C : public UOakAction_Gib
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_TinkLoot_Gib.AHitReact_TinkLoot_Gib_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_AHitReact_TinkLoot_Gib(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
