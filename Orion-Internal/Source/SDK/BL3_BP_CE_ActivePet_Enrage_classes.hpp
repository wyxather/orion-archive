#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_ActivePet_Enrage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_ActivePet_Enrage.BP_CE_ActivePet_Enrage_C
// 0x0008 (0x0180 - 0x0178)
class UBP_CE_ActivePet_Enrage_C : public UOakAction_CoordinatedEffect_ActionAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_ActivePet_Enrage.BP_CE_ActivePet_Enrage_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_BP_CE_ActivePet_Enrage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
