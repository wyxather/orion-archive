#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_GoonEvents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_GoonEvents.BPI_GoonEvents_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_GoonEvents_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GoonEvents.BPI_GoonEvents_C");
		return ptr;
	}


	void GoonShared_TargetChanged(class AActor* TargetActor);
	void Goon_LaunchLand();
	void Goon_Anointed_Death();
	void Goon_GrindUpSkag();
	void Goon_OpenRiderRespawnTimerGate();
	void Goon_CloseRiderRespawnTimerGate();
	void Get_GoonAttachedTinkMaxHealth(float* AttachedTink_MaxHealth);
	void Goon_SetTinkBallWeapon(class AWeapon* TinkWeapon);
	void Set_GoonIsDead();
	void Goon_GrabTinkFromPack();
	void Goon_SetAttachedTinkMaxHealth(float MaxHealth);
	void Goon_StolenProj_DisableRight();
	void Goon_StolenProj_EnableRight();
	void Goon_StolenProj_Return();
	void Goon_StolenProj_Disarm();
	void Set_Goon_IsTinkAttached_Pack(bool IsTinkInPack);
	void Goon_LaunchTink(const struct FName& LaunchFromSocket);
	void Goon_LaunchAirBall(const struct FName& LaunchFromSocket);
	void Goon_LaunchAirRing(const struct FName& LaunchFromSocket);
	void Goon_LaunchAirDevil(const struct FName& LaunchFromSocket);
	void Get_GoonBalanceDamage(float* GoonBalancedDamage);
	void Get_GoonLaunchSocketName(struct FName* CurrentLaunchSocket);
	void Set_GoonLaunchSocketName(const struct FName& SavedLaunchSocket);
	void Goon_PerformBarrelLaunch();
	void Goon_PerformJunkBallBarrage(const struct FName& LaunchFromSocket);
	void Set_CachedJunkBallTarget(const struct FVector& SavedJunkBallTargetLoc);
	void Get_CachedJunkBallTarget(struct FVector* JunkBallTargetLoc);
	void Goon_StartTinkRespawnTimer();
	void Goon_DetachBarrel();
	void Goon_LJunkBall_Off();
	void Goon_LJunkBall_On();
	void Get_TinkLoadedCount(float* LoadedTinkCount);
	void Get_InitialLoadTinkCooldown(float* InitialLoadTinkCooldown);
	void PushTinkCannonL();
	void Get_IsBarrelAttached(bool* BarrelAttachState);
	void Set_IsBarrelDetectorActive(bool BarrelDetectorState);
	void Set_GoonAttachedBarrel(class AActor* NewAttachedBarrel);
	void Get_CurrentSmartObject(class AActor** CurrentSmartObject);
	void Get_AmmoTypeL(TEnumAsByte<Enum_GoonAmmoType>* CurrentAmmoType);
	void Set_IsBarrelAttached(bool IsTheBarrelAttached);
	void Set_AmmoTypeL(TEnumAsByte<Enum_GoonAmmoType> NewAmmoType);
	void Get_GoonAttachedBarrel(class AActor** AttachedBarrel);
	void Set_AirBallCount(int NewAirBallCount);
	void Get_AirBallCount(int* CurrentAirBallCount);
	void Increment_AirBallCount();
	void Get_AttachedTinkCurrentHealth(float* AttachedTinkHealth_Output);
	void LoadTinkCannonL();
	void Set_IsTinkInCannonL(bool IsIt);
	void Increment_TinkLoadedCount();
	void Start_TinkRespawnTimer();
	void Set_AttachedTinkCurrentHealth(float CurrentHealth);
	void Get_GoonInPackActor(class AActor** InPackActor);
	void GoonAttachedTink_Died();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
