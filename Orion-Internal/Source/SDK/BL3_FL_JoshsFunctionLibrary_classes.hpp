#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FL_JoshsFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UFL_JoshsFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C");
		return ptr;
	}


	void STATIC_ValidateSpawnPoint(class USpawnPointComponent* PointToValidate, float MaxDropDistance, class UObject* __WorldContext);
	void STATIC_AIScriptedLookAtPlayers(class AActor* Target, class UObject* __WorldContext);
	void STATIC_SetBlackboardInt(const struct FName& BlackboardKey, class AActor* ControlledActor, int Value, class UObject* __WorldContext);
	void STATIC_GetBlackboardInt(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* __WorldContext, int* Value);
	void STATIC_TestHitReaction(class AActor* Actor, TEnumAsByte<Enum_TestHitReactionType> Hit_Reaction_Type, TEnumAsByte<Enum_TestHitReactionDirection> Hit_Reaction_Direction, const struct FForceSelection& Force, class UObject* __WorldContext, struct FText* Display_Text);
	void STATIC_ThrowLightProjectile(class AActor* WhoIsThrowing_, class UClass* LightProjectileData, const struct FName& SourceSocket, class AActor* TargetOverride, const struct FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset, int DataFlags, class UObject* __WorldContext);
	void STATIC_TransformSplat(const struct FHitResult& HitResult, class UObject* __WorldContext, struct FTransform* SplatTransform);
	void STATIC_GrantSecondWind(class AActor* ActorToGrantSecondWindTo, class UObject* __WorldContext);
	void STATIC_SimpleScreenParticle(class AActor* Target, class UParticleSystem* ScreenParticle, bool AllowMultipleInstances, bool OnlyDrawIfShieldsAreDepleted, class UObject* __WorldContext);
	void STATIC_GetElementalTypeFromWeapon(class AActor* ActorWithWeapon, class UObject* __WorldContext, EOakElementalType* WeaponElement);
	void STATIC_GetBlackboardObject(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* __WorldContext, class UObject** Value);
	void STATIC_SetBlackboardObject(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* Value, class UObject* __WorldContext);
	void STATIC_Setup_for_Throw_Actor_At(class APawn* Who_is_Throwing_, class AActor* TargetOverride, const struct FName& TargetSocket, class UObject* __WorldContext, struct FVector* TargetLocation, struct FVector* TargetVelocity);
	void STATIC_GetCurrentTarget(class APawn* Who_s_Target_, class UObject* __WorldContext, class AActor** Target);
	void STATIC_GetBlackboardFloat(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* __WorldContext, float* Value);
	void STATIC_GetBlackboardBool(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* __WorldContext, bool* Value);
	void STATIC_SetBlackboardFloat(class AActor* ControlledActor, const struct FName& BlackboardKey, float Value, class UObject* __WorldContext);
	void STATIC_SetBlackboardBool(class AActor* ControlledActor, const struct FName& BlackboardKey, bool Value, class UObject* __WorldContext);
	void STATIC_SetStance(class AActor* Target, class UOakStanceData* New_Stance, class UObject* __WorldContext);
	void STATIC_ForciblyResetSpawner(class ASpawner* Spawner, bool Kill_Existing_Actors, class UObject* __WorldContext);
	void STATIC_ResourceLock(class AActor* Actor, TEnumAsByte<Enum_ResourceLockType> Lock_Type, const struct FName& Reason, bool LockState, class UObject* __WorldContext);
	void STATIC_GBXActionVariableSetup(class AActor* Actor, class UObject* __WorldContext, class AActor** MySelf, class AActor** MyTarget, class UDamageCauserComponent** MyDamageCausingComponent, class ACharacter** MyCharacter, class UTeam** MyTeam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
