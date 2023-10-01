#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_BadassRunning_MeleeRockSlam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C
// 0x0008 (0x0250 - 0x0248)
class UA_PsychoMale_BadassRunning_MeleeRockSlam_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C");
		return ptr;
	}


	void GbxAsyncRequest_Spawned_D412A4A94D04A1FEDB5F4898E40F5D93(class AActor* Actor, int InstanceIndex);
	void OnBegin(class AActor** Actor);
	void MeleeStrike();
	void ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeRockSlam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
