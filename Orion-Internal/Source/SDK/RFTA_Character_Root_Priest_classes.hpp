#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Priest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Root_Priest.Character_Root_Priest_C
// 0x0050 (0x0C68 - 0x0C18)
class ACharacter_Root_Priest_C : public ABP_Monster_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             HomingTarget;                                             // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             HealthBar;                                                // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             RootFrog_Cast_Shield_SC;                                  // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Root_Frog_Staff;                                          // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             FireProjectile;                                           // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WP_Staff;                                                 // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharacter_Root_Hollow_C*>            ActorsArray;                                              // 0x0C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               ActorsInRange;                                            // 0x0C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C61(0x0003) MISSED OFFSET
	int                                                SpawnIncrement;                                           // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Priest.Character_Root_Priest_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnBuffStart();
	void OnBuffEnd();
	void SFX_Buff_On();
	void SFX_Buff_Off();
	void OnBuffHollows();
	void OnAlert();
	void CombatExit();
	void OnSeedCallerThrow();
	void ExecuteUbergraph_Character_Root_Priest(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
