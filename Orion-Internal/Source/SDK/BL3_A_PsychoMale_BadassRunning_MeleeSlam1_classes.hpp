#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_BadassRunning_MeleeSlam1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C
// 0x0008 (0x0250 - 0x0248)
class UA_PsychoMale_BadassRunning_MeleeSlam1_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C");
		return ptr;
	}


	void GbxAsyncRequest_Hit_11117E0B4C3CBCBEB6C434B346B833D5(const struct FHitResult& Result);
	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void MeleeStrike();
	void LockRotation();
	void ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
