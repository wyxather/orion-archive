#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Beastmaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Beastmaster.BPChar_Beastmaster_C
// 0x00C4 (0x36AC - 0x35E8)
class ABPChar_Beastmaster_C : public ABPChar_Player_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x35E8(0x0008) (Transient, DuplicateTransient)
	class UGbxNavUserEdgeTrailComponent*               GbxNavUserEdgeTrail;                                      // 0x35F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPBeastmasterComponent_C*                   BPBeastmasterComponent;                                   // 0x35F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   SKMesh_BeastMaster_BaseHead;                              // 0x3600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTerritoryComponent*                         PetTerritory;                                             // 0x3608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   MeshTrap_First;                                           // 0x3610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGbxAttributeFloat                          Att_HuntSkillPassiveScale;                                // 0x3618(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_HuntSkillPassiveDurationScale;                        // 0x3624(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	EOakActionAbilityPetType                           DialogPetType;                                            // 0x3630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x3631(0x0007) MISSED OFFSET
	class AOakCharacter*                               DialogPet;                                                // 0x3638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAttributeFloat                          Att_PetBuffPassiveScale;                                  // 0x3640(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_AttackCommand_PlayRate;                               // 0x364C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_AttackCommand_Damage;                                 // 0x3658(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          OnRep_TrackHealingFX;                                     // 0x3664(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_ClassMod_HuntPowerScale;                              // 0x3670(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_ClassMod_BossHuntSkillModifier;                       // 0x367C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_ClassMod_ExtraRakkCharge;                             // 0x3688(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_ClassMod_HulkedOutTaunt;                              // 0x3694(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_ClassMod_FadeAwayExtend;                              // 0x36A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Beastmaster.BPChar_Beastmaster_C");
		return ptr;
	}


	void TryForceSpawnPetAtLocation(const struct FVector& Location, bool* bRes);
	void GetCurrentPet(class AOakCharacter** res);
	void GetHeadMesh(class USkeletalMesh** HeadMesh);
	void SetupCallResponse();
	class AOakCharacter* GetPet();
	class UOakActionAbility* GetPrimaryActionAbility();
	void UserConstructionScript();
	void OnDialogSequenceFinished_3();
	void SetNewPetThreatScale(float NewScale);
	void PlayPetAudioCallAndResponse(TEnumAsByte<Enum_BeastmasterDialogAction> DialogType);
	void OnInventoryPickedUp(class AActor** PickedUpActor, int* Quantity);
	void ReceiveBeginPlay();
	void HideBackpack();
	void ShowBackpack();
	void OnResourceNowFilled_AttackCommand(const struct FGameResourcePoolReference& ResourcePool);
	void ExecuteUbergraph_BPChar_Beastmaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
