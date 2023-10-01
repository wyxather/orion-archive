#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Bp_DialogueStage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_DialogueStage.Bp_DialogueStage_C
// 0x0040 (0x0380 - 0x0340)
class ABp_DialogueStage_C : public ADialogStage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               IsActive;                                                 // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RequireEventRegion;                                       // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ResetPlayerCamera;                                        // 0x0352(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasValidStage;                                            // 0x0353(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	struct FEventTreeStage                             Stage;                                                    // 0x0358(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AEventRegion*                                EventRegion;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bp_DialogueStage.Bp_DialogueStage_C");
		return ptr;
	}


	void StageCameraTargetMatches(struct FEventTreeStage* Stage, bool* Matches);
	void ExitAnimatedCamera();
	void ShowDialog();
	void SetActive(bool* Active);
	void CacheEventRegion();
	void SetupCamera();
	void IsLocalPlayerInEventRegion(bool* Out);
	void OrientNPCToPlayer();
	void SetupShouldViewStage(bool* DoView);
	void CleanupCharacters();
	void SetupCharacters();
	void SetupAnimatedCamera();
	void SetupStage(struct FEventTreeStage* Stage);
	void Begin();
	void End();
	void OnSpectateTargetChanged_Event_1(class AActor** SpectateTarget);
	void OnUpdateActiveState_Event_1();
	void ExecuteUbergraph_Bp_DialogueStage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
