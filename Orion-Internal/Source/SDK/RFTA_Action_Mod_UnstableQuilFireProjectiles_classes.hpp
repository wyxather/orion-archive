#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_UnstableQuilFireProjectiles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C
// 0x0035 (0x02F8 - 0x02C3)
class UAction_Mod_UnstableQuilFireProjectiles_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       Socket;                                                   // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               ServerCalculatedProjectileEntries;                        // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	int                                                RemainingProjectilesToFire;                               // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalProjectilesToFire;                                   // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoneFiringProjectiles;                                    // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	float                                              BurstIncrementDelay;                                      // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class ARemnantRangedWeaponMod_C*                   OwningWeaponMod;                                          // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C");
		return ptr;
	}


	void DoneWithBurst(bool* DoneFiring);
	void IsInFrontOfPlayer(struct FVector* Location, class ACharacterGunfire** Character, bool* InFront);
	void GetCrosshairDirection(class ACharacterGunfire** Character, struct FVector* GunStartLoc, struct FVector* GunEndLoc, struct FVector* Dir);
	void GetEndProjectileLocation(struct FVector* Dir);
	void FireProjectileInstance(int* InstanceIndex);
	void GetSocketLocationFromOwner(struct FVector* SocketLocation);
	void FireProjectiles();
	void OnActionStart();
	void FireAllProjectiles(int* NumProjectiles, class ARemnantRangedWeaponMod_C** Weapon, float* BurstIncrementDelay, struct FName* Socket, class AActor** Owner);
	void ExecuteUbergraph_Action_Mod_UnstableQuilFireProjectiles(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
