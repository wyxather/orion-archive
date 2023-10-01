#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_PetSkag_MeleeMix_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C
// 0x0008 (0x0240 - 0x0238)
class UARand_PetSkag_MeleeMix_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C");
		return ptr;
	}


	void Notify_Bite();
	void Notify_ClawRtoL();
	void Notify_ClawLtoR();
	void Notify_MeleeAttack();
	void ExecuteUbergraph_ARand_PetSkag_MeleeMix(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
