#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_Roundhouse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C
// 0x0008 (0x0220 - 0x0218)
class UAction_PetLoader_Roundhouse_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C");
		return ptr;
	}


	void AN_DealDamage();
	void ExecuteUbergraph_Action_PetLoader_Roundhouse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
