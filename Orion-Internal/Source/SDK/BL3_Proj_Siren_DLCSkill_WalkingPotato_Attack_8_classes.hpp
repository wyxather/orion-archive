#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Siren_DLCSkill_WalkingPotato_Attack_8_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C
// 0x0018 (0x09E0 - 0x09C8)
class AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C : public AProj_Siren_DLCSkill_WalkingPotato_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	int                                                MiniShots;                                                // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	class AActor*                                      MiniShotTarget;                                           // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SirenDLCActionSkill_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void FireShotAtEnemy();
	void StartFiringShots();
	void ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
