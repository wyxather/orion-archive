#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ExplodingObject_Barrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C
// 0x00A4 (0x06FC - 0x0658)
class ABP_ExplodingObject_Barrel_C : public ABP_ExplodingObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0658(0x0008) (Transient, DuplicateTransient)
	class USocketComponent*                            Socket_Melee;                                             // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTriggerComponent*                        OakTrigger;                                               // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           EnemyProximityCapsule;                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUseSlotComponent*                         Slot_GoonInteract;                                        // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUseSlotComponent*                         Slot_Kick;                                                // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USmartObjectComponent*                       SmartObject;                                              // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSmartObjectActionSet                       ASet_NoActions_1;                                         // 0x0690(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSmartObjectActionSet                       ASet_GoonInteract;                                        // 0x06B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                               Random_Seed_1;                                            // 0x06D0(0x0008) (Edit, BlueprintVisible)
	float                                              RandomFloatFromStream_1;                                  // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SingularityPullScale;                                     // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSingularityGrabbed;                                      // 0x06E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06E1(0x0003) MISSED OFFSET
	float                                              NewVar_1;                                                 // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_2;                                                 // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_3;                                                 // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_4;                                                 // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_5;                                                 // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_6;                                                 // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C");
		return ptr;
	}


	float GetPullScale();
	void OnRep_bSingularityGrabbed();
	void Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C** NewPresentation, class UMaterialInstanceDynamic** DynamicMI);
	void Barrel_SetupMaterialParams(class UMaterialInstanceDynamic* Material, const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, class UTexture* CompTexture, class UTexture* NormalTexture);
	void UserConstructionScript();
	void SmartObject_NPC_Kick_Begin(class APawn* User);
	void SmartObject_Barrel_GoonInteract_Success(class APawn* User);
	void PlayerKickBarrel(class ACharacter* Char);
	void PlayerButtSlamBarrel(class ACharacter* Char);
	void PlayerMeleeBarrel(class ACharacter* Char);
	void Damaged(class UGbxDamageType** DamageType, class UDamageSource** DamageSource);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void OnSingularityPullBegin(class USingularityComponent* SingularityComponent);
	void OnSingularityPullEnd(class USingularityComponent* SingularityComponent);
	void Explode_Damage();
	void IronBearFisted(class ACharacter* Char);
	void ReceiveBeginPlay();
	void DEBUG_PrematureExplosion();
	void ThrowExplodingObject(struct FVector* ThrowVector, float* Force, struct FRotator* RotatorForSpin, struct FVector* OptionalAdditiveVector);
	void ExecuteUbergraph_BP_ExplodingObject_Barrel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
