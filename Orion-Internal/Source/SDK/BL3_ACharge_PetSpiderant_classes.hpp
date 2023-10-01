#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_PetSpiderant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ACharge_PetSpiderant.ACharge_PetSpiderant_C
// 0x0011 (0x0151 - 0x0140)
class UACharge_PetSpiderant_C : public UGbxAction_AICharge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ChargeTrail;                                              // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	EOakActionAbilityPetEvolutionType                  NewPetEvolutionType;                                      // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ACharge_PetSpiderant.ACharge_PetSpiderant_C");
		return ptr;
	}


	void OnLoop(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnHitWall(class AActor** Actor);
	void OnBegin(class AActor** Actor);
	void Notify_Melee();
	void ExecuteUbergraph_ACharge_PetSpiderant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
