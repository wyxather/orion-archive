#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Beastmaster_Enrage_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C
// 0x0028 (0x0290 - 0x0268)
class UA_Beastmaster_Enrage_Base_C : public UOakAction_Anim_ActionAbility_Pet_Jabbermon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PreTeleportFX;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     PetSpawnLoc;                                              // 0x0278(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class ABPPetEnrageRift_C*                          Rift;                                                     // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C");
		return ptr;
	}


	void FirePetSummonStarted();
	void GetEnrageRiftActorClass(class UClass** res);
	void InitRegisterProperties();
	void GetPetSpawnLoc(struct FVector* res);
	void GetOwnerPet(class AOakCharacter** res);
	void DoPreTeleportEffects();
	void Notify_Skill();
	void Notify_SkillEnd();
	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Notify_Rumble();
	void Notify_CS_Pitch();
	void Notify_CS_FoV();
	void ExecuteUbergraph_A_Beastmaster_Enrage_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
