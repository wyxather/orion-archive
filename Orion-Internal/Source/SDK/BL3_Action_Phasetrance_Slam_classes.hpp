#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Slam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Phasetrance_Slam.Action_Phasetrance_Slam_C
// 0x0008 (0x02D8 - 0x02D0)
class UAction_Phasetrance_Slam_C : public UAction_Phasetrance_Slam_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_Slam.Action_Phasetrance_Slam_C");
		return ptr;
	}


	void StopSlamLoopFeedback();
	void GetSlamControlledMove(class UClass** res);
	void GetSlamTargetLocation(struct FVector* res);
	void OnServerBegin(class AActor** Actor);
	void InnerDoSlamDamage();
	void AN_Unlockmovement();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBeginBringUpWeapon(class AActor** Actor);
	void AN_SlamMoveLock();
	void OnBegin(class AActor** Actor);
	void AN_FeedbackSlamLand();
	void AN_FeedbackSlamLoop();
	void ExecuteUbergraph_Action_Phasetrance_Slam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
