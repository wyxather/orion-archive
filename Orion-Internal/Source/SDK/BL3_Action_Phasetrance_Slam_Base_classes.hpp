#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Slam_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C
// 0x0017 (0x02D0 - 0x02B9)
class UAction_Phasetrance_Slam_Base_C : public UAction_Phasetrance_Common_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ArmBuildupFX;                                             // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C");
		return ptr;
	}


	void GetSlamDamage(float* res);
	void SlamFeedbackLaunch(bool Enable);
	void InnerDoSlam();
	void InnerDoSlamDamage();
	void InnerShowSlamLandFX();
	void InnerOnSlamEnded();
	void InnerOnSlamStarted();
	void OnBegin(class AActor** Actor);
	void AN_StartDive();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnFallEnded();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void AN_DoSlam();
	void OnBeginBringUpWeapon(class AActor** Actor);
	void HandlePlayerLanded();
	void TriggerActionSkillReactDialogue();
	void TriggerActionSkillUseDialogue();
	void Trigger_Slam_Begin_Dialogue();
	void Trigger_Slam_Impact_Dialogue();
	void Trigger_slam_Taunt_Dialogue();
	void ExecuteUbergraph_Action_Phasetrance_Slam_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
