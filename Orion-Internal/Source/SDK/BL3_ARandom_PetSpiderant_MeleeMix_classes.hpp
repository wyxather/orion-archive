#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_PetSpiderant_MeleeMix_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C
// 0x0008 (0x0240 - 0x0238)
class UARandom_PetSpiderant_MeleeMix_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C");
		return ptr;
	}


	void Notify_Melee();
	void ExecuteUbergraph_ARandom_PetSpiderant_MeleeMix(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
