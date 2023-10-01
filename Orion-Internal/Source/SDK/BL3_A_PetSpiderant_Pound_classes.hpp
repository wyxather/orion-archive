#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_Pound_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PetSpiderant_Pound.A_PetSpiderant_Pound_C
// 0x0009 (0x0231 - 0x0228)
class UA_PetSpiderant_Pound_C : public UA_Pet_AttackCommand_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	EOakActionAbilityPetEvolutionType                  NewPetEvolutionType;                                      // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSpiderant_Pound.A_PetSpiderant_Pound_C");
		return ptr;
	}


	void Notify_Melee();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_A_PetSpiderant_Pound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
