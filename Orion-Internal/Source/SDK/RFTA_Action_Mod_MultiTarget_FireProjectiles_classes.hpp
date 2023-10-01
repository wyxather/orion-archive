#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_MultiTarget_FireProjectiles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C
// 0x005D (0x0320 - 0x02C3)
class UAction_Mod_MultiTarget_FireProjectiles_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Spread;                                                   // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FName                                       Socket;                                                   // 0x02D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileToFire;                                         // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialVelocity;                                          // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialPitch;                                             // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MinAimPitch;                                              // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialSpread;                                            // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               FinishActionOnProjectilesFired;                           // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	TArray<struct FMultiTargetProjectileEntry>         ProjectileEntries;                                        // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               UseSpreadForDumbFire;                                     // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               UseReticuleForAim;                                        // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0312(0x0002) MISSED OFFSET
	struct FVector                                     ReticuleLocation;                                         // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C");
		return ptr;
	}


	void GetEndProjectileLocation(int* ProjectileIndex, struct FVector* EndLocation);
	void FireAllProjectiles();
	void FireAndAddProjectile(struct FMultiTargetProjectileEntry* ProjectileEntry);
	void InitProjectile(class AActor** Target, class ABP_Projectile_Homing_MultiTarget_Base_C** Projectile);
	void FinishFiringProjectiles();
	void GetFireDirection(struct FVector* Dir);
	void OrderTargets(class ACharacterGunfire** Character, TArray<class AActor*>* Targets, TArray<class AActor*>* OrderedTargets);
	void GetCurrentTarget(int* Index, TArray<class AActor*>* Targets, class AActor** Target);
	void Get_Socket_Location_from_owner(struct FVector* SocketLocation);
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_MultiTarget_FireProjectiles(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
