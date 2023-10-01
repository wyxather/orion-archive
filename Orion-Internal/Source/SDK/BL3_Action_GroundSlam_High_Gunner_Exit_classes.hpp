#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GroundSlam_High_Gunner_Exit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_GroundSlam_High_Gunner_Exit.Action_GroundSlam_High_Gunner_Exit_C
// 0x00B8 (0x02D8 - 0x0220)
class UAction_GroundSlam_High_Gunner_Exit_C : public UAction_GroundSlam_High_Exit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	TMap<class UClass*, class UParticleSystem*>        GroundSlam_FX;                                            // 0x0228(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      Player_Actor;                                             // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABPChar_Player_C*                            Player_BPChar;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<class UClass*, class UParticleSystem*>        GroundSlam_FX_3rd;                                        // 0x0288(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_GroundSlam_High_Gunner_Exit.Action_GroundSlam_High_Gunner_Exit_C");
		return ptr;
	}


	void OnBeginBringUpWeapon(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void PlayVFX();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_GroundSlam_High_Gunner_Exit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
