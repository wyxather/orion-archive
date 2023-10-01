#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetPetLoader_Melee_L_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PetPetLoader_Melee_L.Action_PetPetLoader_Melee_L_C
// 0x0008 (0x0220 - 0x0218)
class UAction_PetPetLoader_Melee_L_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetPetLoader_Melee_L.Action_PetPetLoader_Melee_L_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Notify_Melee();
	void ExecuteUbergraph_Action_PetPetLoader_Melee_L(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
