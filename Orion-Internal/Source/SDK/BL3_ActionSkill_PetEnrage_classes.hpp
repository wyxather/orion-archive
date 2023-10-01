#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_PetEnrage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_PetEnrage.ActionSkill_PetEnrage_C
// 0x0009 (0x0271 - 0x0268)
class UActionSkill_PetEnrage_C : public UOakActionAbility_HulkOut
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (Transient, DuplicateTransient)
	bool                                               bHasValidSpawnLocation;                                   // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_PetEnrage.ActionSkill_PetEnrage_C");
		return ptr;
	}


	bool ShouldStopAbilityOnPawnSlotComponentAttach();
	EGbxAbilityState CalculateAbilityState();
	void GetActionRegisters(const struct FVector& InLocation, TArray<struct FGbxActionRegister>* res);
	float GetCooldownRestartPercent();
	bool GetMaxCooldownModifier(EGbxAttributeModifierType* ModifierType, float* Value);
	void GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A(const struct FHitResult& Result);
	void GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A(const struct FHitResult& Result);
	void OnStartActionAbility();
	void FindTargetLocationAsync();
	void LocationQueryComplete(const struct FVector& TargetLocation);
	void OnStopActionAbility();
	void ExecuteUbergraph_ActionSkill_PetEnrage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
