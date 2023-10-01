#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSkag_RangedAttack_Evo2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C
// 0x0008 (0x0240 - 0x0238)
class UA_PetSkag_RangedAttack_Evo2_C : public UA_PetSkag_RangedAttack_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_A_PetSkag_RangedAttack_Evo2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
