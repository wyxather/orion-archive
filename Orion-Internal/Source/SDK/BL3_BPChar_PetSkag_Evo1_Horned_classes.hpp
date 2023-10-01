#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetSkag_Evo1_Horned_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C
// 0x0008 (0x2610 - 0x2608)
class ABPChar_PetSkag_Evo1_Horned_C : public ABPChar_PetSkag_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2608(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_PetSkag_Evo1_Horned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
