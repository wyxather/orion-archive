#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_29_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_Console_29.BP_Challenge_Console_28_C
// 0x0020 (0x0280 - 0x0260)
class UBP_Challenge_Console_28_C : public UBP_Challenge_Console_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class AProj_Grenade_C*                             GrenadeProj;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AProj_Grenade_C*>                     GrenadeProjArray;                                         // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_Console_29.BP_Challenge_Console_28_C");
		return ptr;
	}


	void CheckSticky(class UObject* Object, bool* isSticky);
	void GrenadeDestroyed(class AActor* DestroyedActor);
	void CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ExecuteUbergraph_BP_Challenge_Console_29(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
