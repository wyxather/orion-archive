#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADirection_PetLoader_Flinch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ADirection_PetLoader_Flinch.ADirection_PetLoader_Flinch_C
// 0x0008 (0x00D0 - 0x00C8)
class UADirection_PetLoader_Flinch_C : public UGbxAction_DirectionContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ADirection_PetLoader_Flinch.ADirection_PetLoader_Flinch_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_ADirection_PetLoader_Flinch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
