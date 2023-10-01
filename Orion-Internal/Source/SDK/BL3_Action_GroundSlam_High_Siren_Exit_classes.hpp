#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GroundSlam_High_Siren_Exit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_GroundSlam_High_Siren_Exit.Action_GroundSlam_High_Siren_Exit_C
// 0x00B8 (0x02D8 - 0x0220)
class UAction_GroundSlam_High_Siren_Exit_C : public UAction_GroundSlam_High_Exit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	TMap<class UClass*, class UParticleSystem*>        GroundSlam_FX;                                            // 0x0228(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UParticleSystem*>        GroundSlam_FX_3rd;                                        // 0x0278(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      Player_Actor;                                             // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABPChar_Player_C*                            Player_BPChar;                                            // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_GroundSlam_High_Siren_Exit.Action_GroundSlam_High_Siren_Exit_C");
		return ptr;
	}


	void PlayVFX();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_GroundSlam_High_Siren_Exit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
